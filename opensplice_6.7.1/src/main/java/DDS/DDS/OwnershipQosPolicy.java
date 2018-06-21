package DDS;

public final class OwnershipQosPolicy {

    public DDS.OwnershipQosPolicyKind kind = DDS.OwnershipQosPolicyKind.from_int(0);

    public OwnershipQosPolicy() {
    }

    public OwnershipQosPolicy(
        DDS.OwnershipQosPolicyKind _kind)
    {
        kind = _kind;
    }

}
