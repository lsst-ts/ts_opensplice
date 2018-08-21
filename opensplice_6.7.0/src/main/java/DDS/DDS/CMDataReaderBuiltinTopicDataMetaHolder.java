package DDS;

public final class CMDataReaderBuiltinTopicDataMetaHolder
{

    public static java.lang.String metaDescriptor[] = { "<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\"><Long/></Array></TypeDef><Struct name=\"ProductDataQosPolicy\"><Member name=\"value\"><String/></Member></Struct><Enum name=\"HistoryQosPolicyKind\"><Element name=\"KEEP_LAST_HISTORY_QOS\" value=\"0\"/><Element name=\"KEEP_ALL_HISTORY_QOS\" value=\"1\"/></Enum><Struct name=\"ResourceLimitsQosPolicy\"><Member name=\"max_samples\"><Long/></Member><Member name=\"max_instances\"><Long/></Member><Member name=\"max_samples_per_instance\"><Long/></Member></Struct><Struct name=\"Duration_t\"><Member name=\"sec\"><Long/></Member><Member name=\"nanosec\"><ULong/></Member></Struct><Enum name=\"InvalidSampleVisibilityQosPolicyKind\"><Element name=\"NO_INVALID_SAMPLES\" value=\"0\"/><Element name=\"MINIMUM_INVALID_SAMPLES\" value=\"1\"/><Element name=\"ALL_INVALID_SAMPLES\" value=\"2\"/></Enum><Struct name=\"UserKeyQosPolicy\"><Member name=\"enable\"><Boolean/></Member><Member name=\"expression\"><String/></Member></Struct><Struct name=\"ShareQosPolicy\"><Member name=\"name\"><String/></Member><Member name=\"enable\"><Boolean/></Member></Struct><Struct name=\"HistoryQosPolicy\"><Member name=\"kind\"><Type name=\"HistoryQosPolicyKind\"/></Member><Member name=\"depth\"><Long/></Member></Struct><Struct name=\"ReaderLifespanQosPolicy\"><Member name=\"use_lifespan\"><Boolean/></Member><Member name=\"duration\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"InvalidSampleVisibilityQosPolicy\"><Member name=\"kind\"><Type name=\"InvalidSampleVisibilityQosPolicyKind\"/></Member></Struct><Struct name=\"ReaderDataLifecycleQosPolicy\"><Member name=\"autopurge_nowriter_samples_delay\"><Type name=\"Duration_t\"/></Member><Member name=\"autopurge_disposed_samples_delay\"><Type name=\"Duration_t\"/></Member><Member name=\"autopurge_dispose_all\"><Boolean/></Member><Member name=\"enable_invalid_samples\"><Boolean/></Member><Member name=\"invalid_sample_visibility\"><Type name=\"InvalidSampleVisibilityQosPolicy\"/></Member></Struct><Struct name=\"CMDataReaderBuiltinTopicData\"><Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"product\"><Type name=\"ProductDataQosPolicy\"/></Member><Member name=\"subscriber_key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"name\"><String/></Member><Member name=\"history\"><Type name=\"HistoryQosPolicy\"/></Member><Member name=\"resource_limits\"><Type name=\"ResourceLimitsQosPolicy\"/></Member><Member name=\"reader_data_lifecycle\"><Type name=\"ReaderDataLifecycleQosPolicy\"/></Member><Member name=\"subscription_keys\"><Type name=\"UserKeyQosPolicy\"/></Member><Member name=\"reader_lifespan\"><Type name=\"ReaderLifespanQosPolicy\"/></Member><Member name=\"share\"><Type name=\"ShareQosPolicy\"/></Member></Struct></Module></MetaData>" };

    public CMDataReaderBuiltinTopicDataMetaHolder()
    {
    }

}