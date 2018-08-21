package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMParticipantBuiltinTopicDataDataReaderHelper
{

    public static DDS.CMParticipantBuiltinTopicDataDataReader narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMParticipantBuiltinTopicDataDataReader) {
            return (DDS.CMParticipantBuiltinTopicDataDataReader)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMParticipantBuiltinTopicDataDataReader unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMParticipantBuiltinTopicDataDataReader) {
            return (DDS.CMParticipantBuiltinTopicDataDataReader)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
