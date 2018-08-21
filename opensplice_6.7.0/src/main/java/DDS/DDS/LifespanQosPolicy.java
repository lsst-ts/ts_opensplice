package DDS;

public final class LifespanQosPolicy {

    public DDS.Duration_t duration = new DDS.Duration_t();

    public LifespanQosPolicy() {
    }

    public LifespanQosPolicy(
        DDS.Duration_t _duration)
    {
        duration = _duration;
    }

}
