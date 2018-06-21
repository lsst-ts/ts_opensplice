package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class SubscriptionBuiltinTopicDataDataWriterHelper
{

    public static DDS.SubscriptionBuiltinTopicDataDataWriter narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.SubscriptionBuiltinTopicDataDataWriter) {
            return (DDS.SubscriptionBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.SubscriptionBuiltinTopicDataDataWriter unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.SubscriptionBuiltinTopicDataDataWriter) {
            return (DDS.SubscriptionBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
