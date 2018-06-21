package DDS;

public class PublicationBuiltinTopicDataTypeSupport extends org.opensplice.dds.dcps.TypeSupportImpl implements DDS.TypeSupportOperations
{
    private long copyCache;

    public PublicationBuiltinTopicDataTypeSupport()
    {
        super("DDS::PublicationBuiltinTopicData",
              "kernelModule::v_publicationInfo",
              "key.localId,key.systemId",
              null,
              DDS.PublicationBuiltinTopicDataMetaHolder.metaDescriptor);
    }

    @Override
    protected void finalize() throws Throwable
    {
        super.finalize();
    }

    @Override
    protected DDS.DataWriter create_datawriter ()
    {
        return new PublicationBuiltinTopicDataDataWriterImpl(this);
    }

    @Override
    protected DDS.DataReader create_datareader ()
    {
        return new PublicationBuiltinTopicDataDataReaderImpl(this);
    }

    @Override
    protected DDS.DataReaderView create_dataview ()
    {
        return new PublicationBuiltinTopicDataDataReaderViewImpl(this);
    }
}
