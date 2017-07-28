package DDS;

public final class CMPublisherBuiltinTopicDataMetaHolder
{

    public static java.lang.String metaDescriptor[] = { "<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\"><Long/></Array></TypeDef><Struct name=\"ProductDataQosPolicy\"><Member name=\"value\"><String/></Member></Struct><Struct name=\"EntityFactoryQosPolicy\"><Member name=\"autoenable_created_entities\"><Boolean/></Member></Struct><TypeDef name=\"StringSeq\"><Sequence><String/></Sequence></TypeDef><Struct name=\"PartitionQosPolicy\"><Member name=\"name\"><Type name=\"StringSeq\"/></Member></Struct><Struct name=\"CMPublisherBuiltinTopicData\"><Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"product\"><Type name=\"ProductDataQosPolicy\"/></Member><Member name=\"participant_key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"name\"><String/></Member><Member name=\"entity_factory\"><Type name=\"EntityFactoryQosPolicy\"/></Member><Member name=\"partition\"><Type name=\"PartitionQosPolicy\"/></Member></Struct></Module></MetaData>" };

    public CMPublisherBuiltinTopicDataMetaHolder()
    {
    }

}
