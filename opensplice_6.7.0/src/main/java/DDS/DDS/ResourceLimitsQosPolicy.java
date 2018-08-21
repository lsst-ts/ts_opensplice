package DDS;

public final class ResourceLimitsQosPolicy {

    public int max_samples;
    public int max_instances;
    public int max_samples_per_instance;

    public ResourceLimitsQosPolicy() {
    }

    public ResourceLimitsQosPolicy(
        int _max_samples,
        int _max_instances,
        int _max_samples_per_instance)
    {
        max_samples = _max_samples;
        max_instances = _max_instances;
        max_samples_per_instance = _max_samples_per_instance;
    }

}
