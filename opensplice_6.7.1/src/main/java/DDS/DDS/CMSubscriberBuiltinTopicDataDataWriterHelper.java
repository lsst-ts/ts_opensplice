package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMSubscriberBuiltinTopicDataDataWriterHelper
{

    public static DDS.CMSubscriberBuiltinTopicDataDataWriter narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMSubscriberBuiltinTopicDataDataWriter) {
            return (DDS.CMSubscriberBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMSubscriberBuiltinTopicDataDataWriter unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMSubscriberBuiltinTopicDataDataWriter) {
            return (DDS.CMSubscriberBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
