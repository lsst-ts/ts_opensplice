package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMSubscriberBuiltinTopicDataDataReaderViewHelper
{

    public static DDS.CMSubscriberBuiltinTopicDataDataReaderView narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMSubscriberBuiltinTopicDataDataReaderView) {
            return (DDS.CMSubscriberBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMSubscriberBuiltinTopicDataDataReaderView unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMSubscriberBuiltinTopicDataDataReaderView) {
            return (DDS.CMSubscriberBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
