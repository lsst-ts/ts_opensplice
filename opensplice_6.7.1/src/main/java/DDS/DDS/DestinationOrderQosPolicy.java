package DDS;

public final class DestinationOrderQosPolicy {

    public DDS.DestinationOrderQosPolicyKind kind = DDS.DestinationOrderQosPolicyKind.from_int(0);

    public DestinationOrderQosPolicy() {
    }

    public DestinationOrderQosPolicy(
        DDS.DestinationOrderQosPolicyKind _kind)
    {
        kind = _kind;
    }

}
