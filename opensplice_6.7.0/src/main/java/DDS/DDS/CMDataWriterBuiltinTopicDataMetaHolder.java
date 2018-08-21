package DDS;

public final class CMDataWriterBuiltinTopicDataMetaHolder
{

    public static java.lang.String metaDescriptor[] = { "<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\"><Long/></Array></TypeDef><Struct name=\"ProductDataQosPolicy\"><Member name=\"value\"><String/></Member></Struct><Enum name=\"HistoryQosPolicyKind\"><Element name=\"KEEP_LAST_HISTORY_QOS\" value=\"0\"/><Element name=\"KEEP_ALL_HISTORY_QOS\" value=\"1\"/></Enum><Struct name=\"ResourceLimitsQosPolicy\"><Member name=\"max_samples\"><Long/></Member><Member name=\"max_instances\"><Long/></Member><Member name=\"max_samples_per_instance\"><Long/></Member></Struct><Struct name=\"Duration_t\"><Member name=\"sec\"><Long/></Member><Member name=\"nanosec\"><ULong/></Member></Struct><Struct name=\"HistoryQosPolicy\"><Member name=\"kind\"><Type name=\"HistoryQosPolicyKind\"/></Member><Member name=\"depth\"><Long/></Member></Struct><Struct name=\"WriterDataLifecycleQosPolicy\"><Member name=\"autodispose_unregistered_instances\"><Boolean/></Member><Member name=\"autopurge_suspended_samples_delay\"><Type name=\"Duration_t\"/></Member><Member name=\"autounregister_instance_delay\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"CMDataWriterBuiltinTopicData\"><Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"product\"><Type name=\"ProductDataQosPolicy\"/></Member><Member name=\"publisher_key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"name\"><String/></Member><Member name=\"history\"><Type name=\"HistoryQosPolicy\"/></Member><Member name=\"resource_limits\"><Type name=\"ResourceLimitsQosPolicy\"/></Member><Member name=\"writer_data_lifecycle\"><Type name=\"WriterDataLifecycleQosPolicy\"/></Member></Struct></Module></MetaData>" };

    public CMDataWriterBuiltinTopicDataMetaHolder()
    {
    }

}
