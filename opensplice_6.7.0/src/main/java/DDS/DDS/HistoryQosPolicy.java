package DDS;

public final class HistoryQosPolicy {

    public DDS.HistoryQosPolicyKind kind = DDS.HistoryQosPolicyKind.from_int(0);
    public int depth;

    public HistoryQosPolicy() {
    }

    public HistoryQosPolicy(
        DDS.HistoryQosPolicyKind _kind,
        int _depth)
    {
        kind = _kind;
        depth = _depth;
    }

}
