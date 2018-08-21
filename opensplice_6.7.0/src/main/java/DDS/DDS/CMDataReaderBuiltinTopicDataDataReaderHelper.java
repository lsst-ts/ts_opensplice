package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMDataReaderBuiltinTopicDataDataReaderHelper
{

    public static DDS.CMDataReaderBuiltinTopicDataDataReader narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataReaderBuiltinTopicDataDataReader) {
            return (DDS.CMDataReaderBuiltinTopicDataDataReader)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMDataReaderBuiltinTopicDataDataReader unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataReaderBuiltinTopicDataDataReader) {
            return (DDS.CMDataReaderBuiltinTopicDataDataReader)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
