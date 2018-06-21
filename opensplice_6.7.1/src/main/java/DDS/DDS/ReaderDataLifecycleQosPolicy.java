package DDS;

public final class ReaderDataLifecycleQosPolicy {

    public DDS.Duration_t autopurge_nowriter_samples_delay = new DDS.Duration_t();
    public DDS.Duration_t autopurge_disposed_samples_delay = new DDS.Duration_t();
    public boolean autopurge_dispose_all;
    public boolean enable_invalid_samples;
    public DDS.InvalidSampleVisibilityQosPolicy invalid_sample_visibility = new DDS.InvalidSampleVisibilityQosPolicy();

    public ReaderDataLifecycleQosPolicy() {
    }

    public ReaderDataLifecycleQosPolicy(
        DDS.Duration_t _autopurge_nowriter_samples_delay,
        DDS.Duration_t _autopurge_disposed_samples_delay,
        boolean _autopurge_dispose_all,
        boolean _enable_invalid_samples,
        DDS.InvalidSampleVisibilityQosPolicy _invalid_sample_visibility)
    {
        autopurge_nowriter_samples_delay = _autopurge_nowriter_samples_delay;
        autopurge_disposed_samples_delay = _autopurge_disposed_samples_delay;
        autopurge_dispose_all = _autopurge_dispose_all;
        enable_invalid_samples = _enable_invalid_samples;
        invalid_sample_visibility = _invalid_sample_visibility;
    }

}
