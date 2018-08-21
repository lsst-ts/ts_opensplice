package DDS;

public final class PartitionQosPolicyHolder
{

    public DDS.PartitionQosPolicy value = null;

    public PartitionQosPolicyHolder () { }

    public PartitionQosPolicyHolder (DDS.PartitionQosPolicy initialValue)
    {
        value = initialValue;
    }

}
