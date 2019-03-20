echo "<<< Vortex OpenSplice RTS Release 6.9.190227OSS For x86_64.linux-debug Date 2019-03-15 >>>"
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
if test -n "$BASH_VERSION"; then
    OSPL_HOME="$( cd "$( echo "${BASH_SOURCE[0]%/*}")" && pwd )"
else
    echo "Please manually set OSPL_HOME to the install directory."
fi
PATH=$OSPL_HOME/bin:$PATH
LD_LIBRARY_PATH=$OSPL_HOME/lib:${LD_LIBRARY_PATH:=}
if [ "${OSPL_URI:=}" = "" ]
then
    OSPL_URI=file://$OSPL_HOME/etc/config/ospl.xml
    export OSPL_URI
fi
. $OSPL_HOME/etc/java/defs.$SPLICE_JDK
export OSPL_HOME PATH LD_LIBRARY_PATH
