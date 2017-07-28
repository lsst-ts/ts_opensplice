package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class TypeBuiltinTopicDataDataWriterHelper
{

    public static DDS.TypeBuiltinTopicDataDataWriter narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.TypeBuiltinTopicDataDataWriter) {
            return (DDS.TypeBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.TypeBuiltinTopicDataDataWriter unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.TypeBuiltinTopicDataDataWriter) {
            return (DDS.TypeBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
