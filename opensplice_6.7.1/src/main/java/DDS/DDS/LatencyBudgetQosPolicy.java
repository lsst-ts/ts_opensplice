package DDS;

public final class LatencyBudgetQosPolicy {

    public DDS.Duration_t duration = new DDS.Duration_t();

    public LatencyBudgetQosPolicy() {
    }

    public LatencyBudgetQosPolicy(
        DDS.Duration_t _duration)
    {
        duration = _duration;
    }

}
