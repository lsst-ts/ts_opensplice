package DDS;

public class SubscriptionBuiltinTopicDataTypeSupport extends org.opensplice.dds.dcps.TypeSupportImpl implements DDS.TypeSupportOperations
{
    private long copyCache;

    public SubscriptionBuiltinTopicDataTypeSupport()
    {
        super("DDS::SubscriptionBuiltinTopicData",
              "kernelModule::v_subscriptionInfo",
              "key.localId,key.systemId",
              null,
              DDS.SubscriptionBuiltinTopicDataMetaHolder.metaDescriptor);
    }

    @Override
    protected void finalize() throws Throwable
    {
        super.finalize();
    }

    @Override
    protected DDS.DataWriter create_datawriter ()
    {
        return new SubscriptionBuiltinTopicDataDataWriterImpl(this);
    }

    @Override
    protected DDS.DataReader create_datareader ()
    {
        return new SubscriptionBuiltinTopicDataDataReaderImpl(this);
    }

    @Override
    protected DDS.DataReaderView create_dataview ()
    {
        return new SubscriptionBuiltinTopicDataDataReaderViewImpl(this);
    }
}