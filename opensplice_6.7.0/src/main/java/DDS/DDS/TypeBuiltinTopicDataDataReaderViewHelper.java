package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class TypeBuiltinTopicDataDataReaderViewHelper
{

    public static DDS.TypeBuiltinTopicDataDataReaderView narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.TypeBuiltinTopicDataDataReaderView) {
            return (DDS.TypeBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.TypeBuiltinTopicDataDataReaderView unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.TypeBuiltinTopicDataDataReaderView) {
            return (DDS.TypeBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
