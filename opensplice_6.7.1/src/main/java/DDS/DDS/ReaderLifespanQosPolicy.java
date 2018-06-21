package DDS;

public final class ReaderLifespanQosPolicy {

    public boolean use_lifespan;
    public DDS.Duration_t duration = new DDS.Duration_t();

    public ReaderLifespanQosPolicy() {
    }

    public ReaderLifespanQosPolicy(
        boolean _use_lifespan,
        DDS.Duration_t _duration)
    {
        use_lifespan = _use_lifespan;
        duration = _duration;
    }

}
