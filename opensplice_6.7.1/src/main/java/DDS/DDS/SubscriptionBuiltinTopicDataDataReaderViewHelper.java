package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class SubscriptionBuiltinTopicDataDataReaderViewHelper
{

    public static DDS.SubscriptionBuiltinTopicDataDataReaderView narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.SubscriptionBuiltinTopicDataDataReaderView) {
            return (DDS.SubscriptionBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.SubscriptionBuiltinTopicDataDataReaderView unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.SubscriptionBuiltinTopicDataDataReaderView) {
            return (DDS.SubscriptionBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
