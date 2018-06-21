package DDS;

public class TypeBuiltinTopicDataTypeSupport extends org.opensplice.dds.dcps.TypeSupportImpl implements DDS.TypeSupportOperations
{
    private long copyCache;

    public TypeBuiltinTopicDataTypeSupport()
    {
        super("DDS::TypeBuiltinTopicData",
              "kernelModule::v_typeInfo",
              "name,data_representation_id,type_hash.msb,type_hash.lsb",
              null,
              DDS.TypeBuiltinTopicDataMetaHolder.metaDescriptor);
    }

    @Override
    protected void finalize() throws Throwable
    {
        super.finalize();
    }

    @Override
    protected DDS.DataWriter create_datawriter ()
    {
        return new TypeBuiltinTopicDataDataWriterImpl(this);
    }

    @Override
    protected DDS.DataReader create_datareader ()
    {
        return new TypeBuiltinTopicDataDataReaderImpl(this);
    }

    @Override
    protected DDS.DataReaderView create_dataview ()
    {
        return new TypeBuiltinTopicDataDataReaderViewImpl(this);
    }
}
