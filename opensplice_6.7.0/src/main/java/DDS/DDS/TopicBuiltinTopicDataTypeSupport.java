package DDS;

public class TopicBuiltinTopicDataTypeSupport extends org.opensplice.dds.dcps.TypeSupportImpl implements DDS.TypeSupportOperations
{
    private long copyCache;

    public TopicBuiltinTopicDataTypeSupport()
    {
        super("DDS::TopicBuiltinTopicData",
              "kernelModule::v_topicInfo",
              "key.localId,key.systemId",
              null,
              DDS.TopicBuiltinTopicDataMetaHolder.metaDescriptor);
    }

    @Override
    protected void finalize() throws Throwable
    {
        super.finalize();
    }

    @Override
    protected DDS.DataWriter create_datawriter ()
    {
        return new TopicBuiltinTopicDataDataWriterImpl(this);
    }

    @Override
    protected DDS.DataReader create_datareader ()
    {
        return new TopicBuiltinTopicDataDataReaderImpl(this);
    }

    @Override
    protected DDS.DataReaderView create_dataview ()
    {
        return new TopicBuiltinTopicDataDataReaderViewImpl(this);
    }
}
