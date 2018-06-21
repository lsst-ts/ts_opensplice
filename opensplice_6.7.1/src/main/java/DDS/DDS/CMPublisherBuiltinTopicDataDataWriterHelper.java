package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMPublisherBuiltinTopicDataDataWriterHelper
{

    public static DDS.CMPublisherBuiltinTopicDataDataWriter narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMPublisherBuiltinTopicDataDataWriter) {
            return (DDS.CMPublisherBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMPublisherBuiltinTopicDataDataWriter unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMPublisherBuiltinTopicDataDataWriter) {
            return (DDS.CMPublisherBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
