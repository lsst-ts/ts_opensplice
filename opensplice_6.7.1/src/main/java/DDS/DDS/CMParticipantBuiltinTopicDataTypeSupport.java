package DDS;

public class CMParticipantBuiltinTopicDataTypeSupport extends org.opensplice.dds.dcps.TypeSupportImpl implements DDS.TypeSupportOperations
{
    private long copyCache;

    public CMParticipantBuiltinTopicDataTypeSupport()
    {
        super("DDS::CMParticipantBuiltinTopicData",
              "kernelModule::v_participantCMInfo",
              "key.localId,key.systemId",
              null,
              DDS.CMParticipantBuiltinTopicDataMetaHolder.metaDescriptor);
    }

    @Override
    protected void finalize() throws Throwable
    {
        super.finalize();
    }

    @Override
    protected DDS.DataWriter create_datawriter ()
    {
        return new CMParticipantBuiltinTopicDataDataWriterImpl(this);
    }

    @Override
    protected DDS.DataReader create_datareader ()
    {
        return new CMParticipantBuiltinTopicDataDataReaderImpl(this);
    }

    @Override
    protected DDS.DataReaderView create_dataview ()
    {
        return new CMParticipantBuiltinTopicDataDataReaderViewImpl(this);
    }
}
