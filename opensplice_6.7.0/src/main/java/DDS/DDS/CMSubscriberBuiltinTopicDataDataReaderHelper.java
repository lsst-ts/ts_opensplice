package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMSubscriberBuiltinTopicDataDataReaderHelper
{

    public static DDS.CMSubscriberBuiltinTopicDataDataReader narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMSubscriberBuiltinTopicDataDataReader) {
            return (DDS.CMSubscriberBuiltinTopicDataDataReader)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMSubscriberBuiltinTopicDataDataReader unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMSubscriberBuiltinTopicDataDataReader) {
            return (DDS.CMSubscriberBuiltinTopicDataDataReader)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
