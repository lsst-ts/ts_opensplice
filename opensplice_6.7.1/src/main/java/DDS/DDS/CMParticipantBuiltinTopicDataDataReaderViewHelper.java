package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMParticipantBuiltinTopicDataDataReaderViewHelper
{

    public static DDS.CMParticipantBuiltinTopicDataDataReaderView narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMParticipantBuiltinTopicDataDataReaderView) {
            return (DDS.CMParticipantBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMParticipantBuiltinTopicDataDataReaderView unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMParticipantBuiltinTopicDataDataReaderView) {
            return (DDS.CMParticipantBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
