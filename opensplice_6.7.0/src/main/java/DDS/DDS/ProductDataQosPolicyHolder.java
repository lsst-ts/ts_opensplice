package DDS;

public final class ProductDataQosPolicyHolder
{

    public DDS.ProductDataQosPolicy value = null;

    public ProductDataQosPolicyHolder () { }

    public ProductDataQosPolicyHolder (DDS.ProductDataQosPolicy initialValue)
    {
        value = initialValue;
    }

}
