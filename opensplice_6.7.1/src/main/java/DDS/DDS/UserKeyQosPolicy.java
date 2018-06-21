package DDS;

public final class UserKeyQosPolicy {

    public boolean enable;
    public java.lang.String expression = "";

    public UserKeyQosPolicy() {
    }

    public UserKeyQosPolicy(
        boolean _enable,
        java.lang.String _expression)
    {
        enable = _enable;
        expression = _expression;
    }

}
