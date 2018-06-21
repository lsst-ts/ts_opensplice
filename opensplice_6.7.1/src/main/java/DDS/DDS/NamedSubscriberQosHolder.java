package DDS;

public final class NamedSubscriberQosHolder
{

    public DDS.NamedSubscriberQos value = null;

    public NamedSubscriberQosHolder () { }

    public NamedSubscriberQosHolder (DDS.NamedSubscriberQos initialValue)
    {
        value = initialValue;
    }

}
