package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMDataWriterBuiltinTopicDataDataReaderViewHelper
{

    public static DDS.CMDataWriterBuiltinTopicDataDataReaderView narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataWriterBuiltinTopicDataDataReaderView) {
            return (DDS.CMDataWriterBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMDataWriterBuiltinTopicDataDataReaderView unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataWriterBuiltinTopicDataDataReaderView) {
            return (DDS.CMDataWriterBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
