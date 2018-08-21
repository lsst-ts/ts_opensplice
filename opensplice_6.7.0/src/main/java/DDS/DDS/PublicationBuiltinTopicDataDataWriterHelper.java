package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class PublicationBuiltinTopicDataDataWriterHelper
{

    public static DDS.PublicationBuiltinTopicDataDataWriter narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.PublicationBuiltinTopicDataDataWriter) {
            return (DDS.PublicationBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.PublicationBuiltinTopicDataDataWriter unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.PublicationBuiltinTopicDataDataWriter) {
            return (DDS.PublicationBuiltinTopicDataDataWriter)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
