package DDS;

public final class InvalidSampleVisibilityQosPolicy {

    public DDS.InvalidSampleVisibilityQosPolicyKind kind = DDS.InvalidSampleVisibilityQosPolicyKind.from_int(0);

    public InvalidSampleVisibilityQosPolicy() {
    }

    public InvalidSampleVisibilityQosPolicy(
        DDS.InvalidSampleVisibilityQosPolicyKind _kind)
    {
        kind = _kind;
    }

}
