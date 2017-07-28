package DDS;

import org.opensplice.dds.dcps.Utilities;

public final class PublicationBuiltinTopicDataDataReaderViewHelper
{

    public static DDS.PublicationBuiltinTopicDataDataReaderView narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.PublicationBuiltinTopicDataDataReaderView) {
            return (DDS.PublicationBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

    public static DDS.PublicationBuiltinTopicDataDataReaderView unchecked_narrow(java.lang.Object obj)
    {
        if (obj == null) {
            return null;
        } else if (obj instanceof DDS.PublicationBuiltinTopicDataDataReaderView) {
            return (DDS.PublicationBuiltinTopicDataDataReaderView)obj;
        } else {
            throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_PARAM, null);
        }
    }

}
