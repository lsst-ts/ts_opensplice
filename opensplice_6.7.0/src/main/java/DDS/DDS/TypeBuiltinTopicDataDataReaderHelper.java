package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class TypeBuiltinTopicDataDataReaderHelper
{

    public static DDS.TypeBuiltinTopicDataDataReader narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.TypeBuiltinTopicDataDataReader) {
            return (DDS.TypeBuiltinTopicDataDataReader)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.TypeBuiltinTopicDataDataReader unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.TypeBuiltinTopicDataDataReader) {
            return (DDS.TypeBuiltinTopicDataDataReader)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
