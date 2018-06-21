package DDS;

public final class NamedPublisherQosHolder
{

    public DDS.NamedPublisherQos value = null;

    public NamedPublisherQosHolder () { }

    public NamedPublisherQosHolder (DDS.NamedPublisherQos initialValue)
    {
        value = initialValue;
    }

}
