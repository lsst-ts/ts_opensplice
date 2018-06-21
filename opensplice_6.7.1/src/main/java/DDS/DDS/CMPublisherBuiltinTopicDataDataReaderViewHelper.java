package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMPublisherBuiltinTopicDataDataReaderViewHelper
{

    public static DDS.CMPublisherBuiltinTopicDataDataReaderView narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMPublisherBuiltinTopicDataDataReaderView) {
            return (DDS.CMPublisherBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMPublisherBuiltinTopicDataDataReaderView unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMPublisherBuiltinTopicDataDataReaderView) {
            return (DDS.CMPublisherBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
