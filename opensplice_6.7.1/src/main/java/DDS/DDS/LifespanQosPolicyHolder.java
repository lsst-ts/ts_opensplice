package DDS;

public final class LifespanQosPolicyHolder
{

    public DDS.LifespanQosPolicy value = null;

    public LifespanQosPolicyHolder () { }

    public LifespanQosPolicyHolder (DDS.LifespanQosPolicy initialValue)
    {
        value = initialValue;
    }

}
