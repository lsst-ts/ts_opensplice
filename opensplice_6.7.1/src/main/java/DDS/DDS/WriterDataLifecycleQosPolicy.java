package DDS;

public final class WriterDataLifecycleQosPolicy {

    public boolean autodispose_unregistered_instances;
    public DDS.Duration_t autopurge_suspended_samples_delay = new DDS.Duration_t();
    public DDS.Duration_t autounregister_instance_delay = new DDS.Duration_t();

    public WriterDataLifecycleQosPolicy() {
    }

    public WriterDataLifecycleQosPolicy(
        boolean _autodispose_unregistered_instances,
        DDS.Duration_t _autopurge_suspended_samples_delay,
        DDS.Duration_t _autounregister_instance_delay)
    {
        autodispose_unregistered_instances = _autodispose_unregistered_instances;
        autopurge_suspended_samples_delay = _autopurge_suspended_samples_delay;
        autounregister_instance_delay = _autounregister_instance_delay;
    }

}
