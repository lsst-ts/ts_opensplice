package DDS;

public final class UserDataQosPolicyHolder
{

    public DDS.UserDataQosPolicy value = null;

    public UserDataQosPolicyHolder () { }

    public UserDataQosPolicyHolder (DDS.UserDataQosPolicy initialValue)
    {
        value = initialValue;
    }

}
