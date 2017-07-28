package DDS;

public class CMDataWriterBuiltinTopicDataTypeSupport extends org.opensplice.dds.dcps.TypeSupportImpl implements DDS.TypeSupportOperations
{
    private long copyCache;

    public CMDataWriterBuiltinTopicDataTypeSupport()
    {
        super("DDS::CMDataWriterBuiltinTopicData",
              "kernelModule::v_dataWriterCMInfo",
              "key.localId,key.systemId",
              null,
              DDS.CMDataWriterBuiltinTopicDataMetaHolder.metaDescriptor);
    }

    @Override
    protected void finalize() throws Throwable
    {
        super.finalize();
    }

    @Override
    protected DDS.DataWriter create_datawriter ()
    {
        return new CMDataWriterBuiltinTopicDataDataWriterImpl(this);
    }

    @Override
    protected DDS.DataReader create_datareader ()
    {
        return new CMDataWriterBuiltinTopicDataDataReaderImpl(this);
    }

    @Override
    protected DDS.DataReaderView create_dataview ()
    {
        return new CMDataWriterBuiltinTopicDataDataReaderViewImpl(this);
    }
}
