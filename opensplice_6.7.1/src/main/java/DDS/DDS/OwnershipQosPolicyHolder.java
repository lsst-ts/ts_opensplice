package DDS;

public final class OwnershipQosPolicyHolder
{

    public DDS.OwnershipQosPolicy value = null;

    public OwnershipQosPolicyHolder () { }

    public OwnershipQosPolicyHolder (DDS.OwnershipQosPolicy initialValue)
    {
        value = initialValue;
    }

}
