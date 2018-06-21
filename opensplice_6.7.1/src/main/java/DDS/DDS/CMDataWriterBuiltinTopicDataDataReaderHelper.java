package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMDataWriterBuiltinTopicDataDataReaderHelper
{

    public static DDS.CMDataWriterBuiltinTopicDataDataReader narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataWriterBuiltinTopicDataDataReader) {
            return (DDS.CMDataWriterBuiltinTopicDataDataReader)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMDataWriterBuiltinTopicDataDataReader unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataWriterBuiltinTopicDataDataReader) {
            return (DDS.CMDataWriterBuiltinTopicDataDataReader)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
