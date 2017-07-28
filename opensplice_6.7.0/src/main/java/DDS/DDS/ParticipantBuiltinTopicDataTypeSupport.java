package DDS;

public class ParticipantBuiltinTopicDataTypeSupport extends org.opensplice.dds.dcps.TypeSupportImpl implements DDS.TypeSupportOperations
{
    private long copyCache;

    public ParticipantBuiltinTopicDataTypeSupport()
    {
        super("DDS::ParticipantBuiltinTopicData",
              "kernelModule::v_participantInfo",
              "key.localId,key.systemId",
              null,
              DDS.ParticipantBuiltinTopicDataMetaHolder.metaDescriptor);
    }

    @Override
    protected void finalize() throws Throwable
    {
        super.finalize();
    }

    @Override
    protected DDS.DataWriter create_datawriter ()
    {
        return new ParticipantBuiltinTopicDataDataWriterImpl(this);
    }

    @Override
    protected DDS.DataReader create_datareader ()
    {
        return new ParticipantBuiltinTopicDataDataReaderImpl(this);
    }

    @Override
    protected DDS.DataReaderView create_dataview ()
    {
        return new ParticipantBuiltinTopicDataDataReaderViewImpl(this);
    }
}
