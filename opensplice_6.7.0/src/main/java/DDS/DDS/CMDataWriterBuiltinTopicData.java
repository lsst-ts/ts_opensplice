package DDS;

public final class CMDataWriterBuiltinTopicData {

    public int[] key = new int[3];
    public DDS.ProductDataQosPolicy product = new DDS.ProductDataQosPolicy();
    public int[] publisher_key = new int[3];
    public java.lang.String name = "";
    public DDS.HistoryQosPolicy history = new DDS.HistoryQosPolicy();
    public DDS.ResourceLimitsQosPolicy resource_limits = new DDS.ResourceLimitsQosPolicy();
    public DDS.WriterDataLifecycleQosPolicy writer_data_lifecycle = new DDS.WriterDataLifecycleQosPolicy();

    public CMDataWriterBuiltinTopicData() {
    }

    public CMDataWriterBuiltinTopicData(
        int[] _key,
        DDS.ProductDataQosPolicy _product,
        int[] _publisher_key,
        java.lang.String _name,
        DDS.HistoryQosPolicy _history,
        DDS.ResourceLimitsQosPolicy _resource_limits,
        DDS.WriterDataLifecycleQosPolicy _writer_data_lifecycle)
    {
        key = _key;
        product = _product;
        publisher_key = _publisher_key;
        name = _name;
        history = _history;
        resource_limits = _resource_limits;
        writer_data_lifecycle = _writer_data_lifecycle;
    }

}
