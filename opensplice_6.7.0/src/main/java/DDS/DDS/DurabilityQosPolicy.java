package DDS;

public final class DurabilityQosPolicy {

    public DDS.DurabilityQosPolicyKind kind = DDS.DurabilityQosPolicyKind.from_int(0);

    public DurabilityQosPolicy() {
    }

    public DurabilityQosPolicy(
        DDS.DurabilityQosPolicyKind _kind)
    {
        kind = _kind;
    }

}
