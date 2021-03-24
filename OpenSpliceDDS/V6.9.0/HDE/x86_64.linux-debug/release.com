echo "<<< Vortex OpenSplice HDE Release 6.9.190925OSS For x86_64.linux-dev, Date 2021-03-18 >>>"
if [ "${SPLICE_ORB:=}" = "" ]
then
    SPLICE_ORB=DDS_OpenFusion_1_6_1
    export SPLICE_ORB
fi
if [ "${SPLICE_JDK:=}" = "" ]
then
    SPLICE_JDK=jdk
    export SPLICE_JDK
fi
if [ -n "${BASH_VERSION}" ]
then
    OSPL_HOME="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
else
    echo "Please manually set OSPL_HOME to the install directory."
fi
PATH=$OSPL_HOME/bin:$PATH
LD_LIBRARY_PATH=$OSPL_HOME/lib${LD_LIBRARY_PATH:+:}$LD_LIBRARY_PATH
CPATH=$OSPL_HOME/include:$OSPL_HOME/include/sys:${CPATH:=}
if [ "${OSPL_URI:=}" = "" ]
then
    OSPL_URI=file://$OSPL_HOME/etc/config/ospl.xml
    export OSPL_URI
fi
export OSPL_RELEASE=6.9.190925OSS
OSPL_TMPL_PATH=$OSPL_HOME/etc/idlpp
. $OSPL_HOME/etc/java/defs.$SPLICE_JDK
export OSPL_HOME PATH LD_LIBRARY_PATH CPATH OSPL_TMPL_PATH VORTEX_DIR
