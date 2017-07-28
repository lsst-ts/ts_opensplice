package DDS;

public final class NamedTopicQos {

    public java.lang.String name = "";
    public DDS.TopicQos topic_qos = new DDS.TopicQos();

    public NamedTopicQos() {
    }

    public NamedTopicQos(
        java.lang.String _name,
        DDS.TopicQos _topic_qos)
    {
        name = _name;
        topic_qos = _topic_qos;
    }

}
