package DDS;

public final class CMPublisherBuiltinTopicData {

    public int[] key = new int[3];
    public DDS.ProductDataQosPolicy product = new DDS.ProductDataQosPolicy();
    public int[] participant_key = new int[3];
    public java.lang.String name = "";
    public DDS.EntityFactoryQosPolicy entity_factory = new DDS.EntityFactoryQosPolicy();
    public DDS.PartitionQosPolicy partition = new DDS.PartitionQosPolicy();

    public CMPublisherBuiltinTopicData() {
    }

    public CMPublisherBuiltinTopicData(
        int[] _key,
        DDS.ProductDataQosPolicy _product,
        int[] _participant_key,
        java.lang.String _name,
        DDS.EntityFactoryQosPolicy _entity_factory,
        DDS.PartitionQosPolicy _partition)
    {
        key = _key;
        product = _product;
        participant_key = _participant_key;
        name = _name;
        entity_factory = _entity_factory;
        partition = _partition;
    }

}
