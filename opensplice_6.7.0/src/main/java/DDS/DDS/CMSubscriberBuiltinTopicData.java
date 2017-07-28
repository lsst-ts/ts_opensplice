package DDS;

public final class CMSubscriberBuiltinTopicData {

    public int[] key = new int[3];
    public DDS.ProductDataQosPolicy product = new DDS.ProductDataQosPolicy();
    public int[] participant_key = new int[3];
    public java.lang.String name = "";
    public DDS.EntityFactoryQosPolicy entity_factory = new DDS.EntityFactoryQosPolicy();
    public DDS.ShareQosPolicy share = new DDS.ShareQosPolicy();
    public DDS.PartitionQosPolicy partition = new DDS.PartitionQosPolicy();

    public CMSubscriberBuiltinTopicData() {
    }

    public CMSubscriberBuiltinTopicData(
        int[] _key,
        DDS.ProductDataQosPolicy _product,
        int[] _participant_key,
        java.lang.String _name,
        DDS.EntityFactoryQosPolicy _entity_factory,
        DDS.ShareQosPolicy _share,
        DDS.PartitionQosPolicy _partition)
    {
        key = _key;
        product = _product;
        participant_key = _participant_key;
        name = _name;
        entity_factory = _entity_factory;
        share = _share;
        partition = _partition;
    }

}
