cmake_minimum_required (VERSION 3.12)
project (ts_opensplice)

set (OPENSPLICE_VERSION "6.9.0" CACHE STRING "Version number of OpenSplice RPM")
set (OPENSPLICE_RELEASE 15 CACHE STRING "Release number of OpenSplice RPM")
set (OPENSPLICE_PLATFORM "x86_64" CACHE STRING "Platform for OpenSplice RPM")
set (Rpm_topdir ${CMAKE_BINARY_DIR}/rpmbuild)

if (OPENSPLICE_VERSION AND OPENSPLICE_RELEASE)
  set (Spec_file OpenSpliceDDS-${OPENSPLICE_VERSION}-${OPENSPLICE_RELEASE}.spec)
  set (Rpm_file ${Rpm_topdir}/RPMS/${OPENSPLICE_PLATFORM}/OpenSpliceDDS-${OPENSPLICE_VERSION}-${OPENSPLICE_RELEASE}.${OPENSPLICE_PLATFORM}.rpm)
  add_custom_command (
    OUTPUT ${Rpm_file}
# Use a second cmake script to fill out the spec template
    COMMAND ${CMAKE_COMMAND} -D Spec_SOURCE_DIR="${CMAKE_SOURCE_DIR}" -D Spec_BINARY_DIR="${CMAKE_BINARY_DIR}" -D OPENSPLICE_VERSION=${OPENSPLICE_VERSION} -D OPENSPLICE_RELEASE=${OPENSPLICE_RELEASE} -P ${CMAKE_SOURCE_DIR}/configure_spec.cmake
# Make the rpmbuild directories
    COMMAND $(CMAKE_COMMAND) -E make_directory ${Rpm_topdir}/BUILD ${Rpm_topdir}/BUILDROOT ${Rpm_topdir}/RPMS ${Rpm_topdir}/SOURCES ${Rpm_topdir}/SPECS ${Rpm_topdir}/SRPMS
# Make the RPM source tarball from the git clone
    COMMAND tar --exclude ${CMAKE_SOURCE_DIR}/.git --exclude ${CMAKE_BINARY_DIR} -P --transform=s:${CMAKE_SOURCE_DIR}:OpenSpliceDDS-${OPENSPLICE_VERSION}: -czf ${Rpm_topdir}/SOURCES/OpenSpliceDDS-v${OPENSPLICE_VERSION}.tar.gz ${CMAKE_SOURCE_DIR}
# Copy in our custom source patch
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/lsst.patch ${Rpm_topdir}/SOURCES
# Now do the rpmbuild
    COMMAND rpmbuild -bb --define '_topdir ${Rpm_topdir}' "${Spec_file}"
    DEPENDS ${CMAKE_SOURCE_DIR}/OpenSpliceDDS.spec-tmpl
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
  )
  add_custom_target (rpm ALL DEPENDS ${Rpm_file})
elseif (NOT OPENSPLICE_VERSION)
  message(FATAL_ERROR "OPENSPLICE_VERSION must be specified")
elseif (NOT OPENSPLICE_RELEASE)
  message(FATAL_ERROR "OPENSPLICE_RELEASE must be specified")
elseif (NOT OPENSPLICE_PLATFORM)
  message(FATAL_ERROR "OPENSPLICE_PLATFORM must be specified")
endif ()
