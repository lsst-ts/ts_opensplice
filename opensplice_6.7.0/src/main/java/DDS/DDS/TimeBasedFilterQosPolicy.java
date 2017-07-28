package DDS;

public final class TimeBasedFilterQosPolicy {

    public DDS.Duration_t minimum_separation = new DDS.Duration_t();

    public TimeBasedFilterQosPolicy() {
    }

    public TimeBasedFilterQosPolicy(
        DDS.Duration_t _minimum_separation)
    {
        minimum_separation = _minimum_separation;
    }

}
