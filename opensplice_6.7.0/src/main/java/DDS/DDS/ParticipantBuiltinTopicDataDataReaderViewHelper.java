package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class ParticipantBuiltinTopicDataDataReaderViewHelper
{

    public static DDS.ParticipantBuiltinTopicDataDataReaderView narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.ParticipantBuiltinTopicDataDataReaderView) {
            return (DDS.ParticipantBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.ParticipantBuiltinTopicDataDataReaderView unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.ParticipantBuiltinTopicDataDataReaderView) {
            return (DDS.ParticipantBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
