package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMSubscriberBuiltinTopicDataTypeSupportHelper
{

    public static DDS.CMSubscriberBuiltinTopicDataTypeSupport narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMSubscriberBuiltinTopicDataTypeSupport) {
            return (DDS.CMSubscriberBuiltinTopicDataTypeSupport)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMSubscriberBuiltinTopicDataTypeSupport unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMSubscriberBuiltinTopicDataTypeSupport) {
            return (DDS.CMSubscriberBuiltinTopicDataTypeSupport)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
