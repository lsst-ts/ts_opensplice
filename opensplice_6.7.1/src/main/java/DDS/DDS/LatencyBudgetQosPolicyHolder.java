package DDS;

public final class LatencyBudgetQosPolicyHolder
{

    public DDS.LatencyBudgetQosPolicy value = null;

    public LatencyBudgetQosPolicyHolder () { }

    public LatencyBudgetQosPolicyHolder (DDS.LatencyBudgetQosPolicy initialValue)
    {
        value = initialValue;
    }

}
