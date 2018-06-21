package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class TopicBuiltinTopicDataDataWriterHelper
{

    public static DDS.TopicBuiltinTopicDataDataWriter narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.TopicBuiltinTopicDataDataWriter) {
            return (DDS.TopicBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.TopicBuiltinTopicDataDataWriter unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.TopicBuiltinTopicDataDataWriter) {
            return (DDS.TopicBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
