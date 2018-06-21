package DDS;

public final class CMParticipantBuiltinTopicData {

    public int[] key = new int[3];
    public DDS.ProductDataQosPolicy product = new DDS.ProductDataQosPolicy();

    public CMParticipantBuiltinTopicData() {
    }

    public CMParticipantBuiltinTopicData(
        int[] _key,
        DDS.ProductDataQosPolicy _product)
    {
        key = _key;
        product = _product;
    }

}
