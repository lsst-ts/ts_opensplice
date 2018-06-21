package DDS;

public final class ReliabilityQosPolicy {

    public DDS.ReliabilityQosPolicyKind kind = DDS.ReliabilityQosPolicyKind.from_int(0);
    public DDS.Duration_t max_blocking_time = new DDS.Duration_t();
    public boolean synchronous;

    public ReliabilityQosPolicy() {
    }

    public ReliabilityQosPolicy(
        DDS.ReliabilityQosPolicyKind _kind,
        DDS.Duration_t _max_blocking_time,
        boolean _synchronous)
    {
        kind = _kind;
        max_blocking_time = _max_blocking_time;
        synchronous = _synchronous;
    }

}
