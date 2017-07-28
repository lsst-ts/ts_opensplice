package DDS;

public final class NamedPublisherQos {

    public java.lang.String name = "";
    public DDS.PublisherQos publisher_qos = new DDS.PublisherQos();

    public NamedPublisherQos() {
    }

    public NamedPublisherQos(
        java.lang.String _name,
        DDS.PublisherQos _publisher_qos)
    {
        name = _name;
        publisher_qos = _publisher_qos;
    }

}
