package DDS;

public class CMPublisherBuiltinTopicDataTypeSupport extends org.opensplice.dds.dcps.TypeSupportImpl implements DDS.TypeSupportOperations
{
    private long copyCache;

    public CMPublisherBuiltinTopicDataTypeSupport()
    {
        super("DDS::CMPublisherBuiltinTopicData",
              "kernelModule::v_publisherCMInfo",
              "key.localId,key.systemId",
              null,
              DDS.CMPublisherBuiltinTopicDataMetaHolder.metaDescriptor);
    }

    @Override
    protected void finalize() throws Throwable
    {
        super.finalize();
    }

    @Override
    protected DDS.DataWriter create_datawriter ()
    {
        return new CMPublisherBuiltinTopicDataDataWriterImpl(this);
    }

    @Override
    protected DDS.DataReader create_datareader ()
    {
        return new CMPublisherBuiltinTopicDataDataReaderImpl(this);
    }

    @Override
    protected DDS.DataReaderView create_dataview ()
    {
        return new CMPublisherBuiltinTopicDataDataReaderViewImpl(this);
    }
}
