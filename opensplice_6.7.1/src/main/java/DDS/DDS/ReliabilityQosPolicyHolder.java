package DDS;

public final class ReliabilityQosPolicyHolder
{

    public DDS.ReliabilityQosPolicy value = null;

    public ReliabilityQosPolicyHolder () { }

    public ReliabilityQosPolicyHolder (DDS.ReliabilityQosPolicy initialValue)
    {
        value = initialValue;
    }

}
