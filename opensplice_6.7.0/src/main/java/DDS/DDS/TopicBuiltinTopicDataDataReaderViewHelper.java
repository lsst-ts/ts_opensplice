package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class TopicBuiltinTopicDataDataReaderViewHelper
{

    public static DDS.TopicBuiltinTopicDataDataReaderView narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.TopicBuiltinTopicDataDataReaderView) {
            return (DDS.TopicBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.TopicBuiltinTopicDataDataReaderView unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.TopicBuiltinTopicDataDataReaderView) {
            return (DDS.TopicBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
