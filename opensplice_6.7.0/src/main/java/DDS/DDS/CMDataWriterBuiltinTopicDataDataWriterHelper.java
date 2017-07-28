package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMDataWriterBuiltinTopicDataDataWriterHelper
{

    public static DDS.CMDataWriterBuiltinTopicDataDataWriter narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataWriterBuiltinTopicDataDataWriter) {
            return (DDS.CMDataWriterBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMDataWriterBuiltinTopicDataDataWriter unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataWriterBuiltinTopicDataDataWriter) {
            return (DDS.CMDataWriterBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
