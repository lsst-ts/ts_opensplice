package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMParticipantBuiltinTopicDataDataWriterHelper
{

    public static DDS.CMParticipantBuiltinTopicDataDataWriter narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMParticipantBuiltinTopicDataDataWriter) {
            return (DDS.CMParticipantBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMParticipantBuiltinTopicDataDataWriter unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMParticipantBuiltinTopicDataDataWriter) {
            return (DDS.CMParticipantBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
