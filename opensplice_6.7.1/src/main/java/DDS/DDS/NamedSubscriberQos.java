package DDS;

public final class NamedSubscriberQos {

    public java.lang.String name = "";
    public DDS.SubscriberQos subscriber_qos = new DDS.SubscriberQos();

    public NamedSubscriberQos() {
    }

    public NamedSubscriberQos(
        java.lang.String _name,
        DDS.SubscriberQos _subscriber_qos)
    {
        name = _name;
        subscriber_qos = _subscriber_qos;
    }

}
