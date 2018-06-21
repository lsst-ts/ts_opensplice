package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMDataWriterBuiltinTopicDataTypeSupportHelper
{

    public static DDS.CMDataWriterBuiltinTopicDataTypeSupport narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataWriterBuiltinTopicDataTypeSupport) {
            return (DDS.CMDataWriterBuiltinTopicDataTypeSupport)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMDataWriterBuiltinTopicDataTypeSupport unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataWriterBuiltinTopicDataTypeSupport) {
            return (DDS.CMDataWriterBuiltinTopicDataTypeSupport)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
