package DDS;

public final class NamedTopicQosHolder
{

    public DDS.NamedTopicQos value = null;

    public NamedTopicQosHolder () { }

    public NamedTopicQosHolder (DDS.NamedTopicQos initialValue)
    {
        value = initialValue;
    }

}
