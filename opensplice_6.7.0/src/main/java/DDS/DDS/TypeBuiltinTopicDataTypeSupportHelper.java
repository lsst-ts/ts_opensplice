package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class TypeBuiltinTopicDataTypeSupportHelper
{

    public static DDS.TypeBuiltinTopicDataTypeSupport narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.TypeBuiltinTopicDataTypeSupport) {
            return (DDS.TypeBuiltinTopicDataTypeSupport)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.TypeBuiltinTopicDataTypeSupport unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.TypeBuiltinTopicDataTypeSupport) {
            return (DDS.TypeBuiltinTopicDataTypeSupport)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
