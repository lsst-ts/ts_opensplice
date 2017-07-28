package DDS;

public class CMDataReaderBuiltinTopicDataTypeSupport extends org.opensplice.dds.dcps.TypeSupportImpl implements DDS.TypeSupportOperations
{
    private long copyCache;

    public CMDataReaderBuiltinTopicDataTypeSupport()
    {
        super("DDS::CMDataReaderBuiltinTopicData",
              "kernelModule::v_dataReaderCMInfo",
              "key.localId,key.systemId",
              null,
              DDS.CMDataReaderBuiltinTopicDataMetaHolder.metaDescriptor);
    }

    @Override
    protected void finalize() throws Throwable
    {
        super.finalize();
    }

    @Override
    protected DDS.DataWriter create_datawriter ()
    {
        return new CMDataReaderBuiltinTopicDataDataWriterImpl(this);
    }

    @Override
    protected DDS.DataReader create_datareader ()
    {
        return new CMDataReaderBuiltinTopicDataDataReaderImpl(this);
    }

    @Override
    protected DDS.DataReaderView create_dataview ()
    {
        return new CMDataReaderBuiltinTopicDataDataReaderViewImpl(this);
    }
}
