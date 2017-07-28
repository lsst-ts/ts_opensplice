package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMDataReaderBuiltinTopicDataTypeSupportHelper
{

    public static DDS.CMDataReaderBuiltinTopicDataTypeSupport narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataReaderBuiltinTopicDataTypeSupport) {
            return (DDS.CMDataReaderBuiltinTopicDataTypeSupport)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMDataReaderBuiltinTopicDataTypeSupport unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataReaderBuiltinTopicDataTypeSupport) {
            return (DDS.CMDataReaderBuiltinTopicDataTypeSupport)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
