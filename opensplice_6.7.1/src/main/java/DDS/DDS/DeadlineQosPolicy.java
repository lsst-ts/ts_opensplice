package DDS;

public final class DeadlineQosPolicy {

    public DDS.Duration_t period = new DDS.Duration_t();

    public DeadlineQosPolicy() {
    }

    public DeadlineQosPolicy(
        DDS.Duration_t _period)
    {
        period = _period;
    }

}
