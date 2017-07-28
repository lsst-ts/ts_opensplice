package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMParticipantBuiltinTopicDataTypeSupportHelper
{

    public static DDS.CMParticipantBuiltinTopicDataTypeSupport narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMParticipantBuiltinTopicDataTypeSupport) {
            return (DDS.CMParticipantBuiltinTopicDataTypeSupport)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMParticipantBuiltinTopicDataTypeSupport unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMParticipantBuiltinTopicDataTypeSupport) {
            return (DDS.CMParticipantBuiltinTopicDataTypeSupport)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
