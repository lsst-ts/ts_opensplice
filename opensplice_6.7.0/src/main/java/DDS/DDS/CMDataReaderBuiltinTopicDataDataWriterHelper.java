package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class CMDataReaderBuiltinTopicDataDataWriterHelper
{

    public static DDS.CMDataReaderBuiltinTopicDataDataWriter narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataReaderBuiltinTopicDataDataWriter) {
            return (DDS.CMDataReaderBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.CMDataReaderBuiltinTopicDataDataWriter unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.CMDataReaderBuiltinTopicDataDataWriter) {
            return (DDS.CMDataReaderBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
