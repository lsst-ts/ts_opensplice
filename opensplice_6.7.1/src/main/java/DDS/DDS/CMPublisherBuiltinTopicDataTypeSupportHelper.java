package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMPublisherBuiltinTopicDataTypeSupportHelper
{

    public static DDS.CMPublisherBuiltinTopicDataTypeSupport narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMPublisherBuiltinTopicDataTypeSupport) {
            return (DDS.CMPublisherBuiltinTopicDataTypeSupport)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMPublisherBuiltinTopicDataTypeSupport unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMPublisherBuiltinTopicDataTypeSupport) {
            return (DDS.CMPublisherBuiltinTopicDataTypeSupport)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
