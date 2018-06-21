package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMPublisherBuiltinTopicDataDataReaderHelper
{

    public static DDS.CMPublisherBuiltinTopicDataDataReader narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMPublisherBuiltinTopicDataDataReader) {
            return (DDS.CMPublisherBuiltinTopicDataDataReader)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMPublisherBuiltinTopicDataDataReader unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMPublisherBuiltinTopicDataDataReader) {
            return (DDS.CMPublisherBuiltinTopicDataDataReader)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
