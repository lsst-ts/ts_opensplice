package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMDataReaderBuiltinTopicDataDataReaderViewHelper
{

    public static DDS.CMDataReaderBuiltinTopicDataDataReaderView narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataReaderBuiltinTopicDataDataReaderView) {
            return (DDS.CMDataReaderBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMDataReaderBuiltinTopicDataDataReaderView unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataReaderBuiltinTopicDataDataReaderView) {
            return (DDS.CMDataReaderBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
