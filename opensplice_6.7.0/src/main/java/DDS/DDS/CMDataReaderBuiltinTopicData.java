package DDS;

public final class CMDataReaderBuiltinTopicData {

    public int[] key = new int[3];
    public DDS.ProductDataQosPolicy product = new DDS.ProductDataQosPolicy();
    public int[] subscriber_key = new int[3];
    public java.lang.String name = "";
    public DDS.HistoryQosPolicy history = new DDS.HistoryQosPolicy();
    public DDS.ResourceLimitsQosPolicy resource_limits = new DDS.ResourceLimitsQosPolicy();
    public DDS.ReaderDataLifecycleQosPolicy reader_data_lifecycle = new DDS.ReaderDataLifecycleQosPolicy();
    public DDS.UserKeyQosPolicy subscription_keys = new DDS.UserKeyQosPolicy();
    public DDS.ReaderLifespanQosPolicy reader_lifespan = new DDS.ReaderLifespanQosPolicy();
    public DDS.ShareQosPolicy share = new DDS.ShareQosPolicy();

    public CMDataReaderBuiltinTopicData() {
    }

    public CMDataReaderBuiltinTopicData(
        int[] _key,
        DDS.ProductDataQosPolicy _product,
        int[] _subscriber_key,
        java.lang.String _name,
        DDS.HistoryQosPolicy _history,
        DDS.ResourceLimitsQosPolicy _resource_limits,
        DDS.ReaderDataLifecycleQosPolicy _reader_data_lifecycle,
        DDS.UserKeyQosPolicy _subscription_keys,
        DDS.ReaderLifespanQosPolicy _reader_lifespan,
        DDS.ShareQosPolicy _share)
    {
        key = _key;
        product = _product;
        subscriber_key = _subscriber_key;
        name = _name;
        history = _history;
        resource_limits = _resource_limits;
        reader_data_lifecycle = _reader_data_lifecycle;
        subscription_keys = _subscription_keys;
        reader_lifespan = _reader_lifespan;
        share = _share;
    }

}
