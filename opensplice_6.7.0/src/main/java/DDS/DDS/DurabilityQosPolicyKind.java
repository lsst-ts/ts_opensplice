package DDS;

import org.opensplice.dds.dcps.Utilities;

public class DurabilityQosPolicyKind {

    private int __value;
    private static int __size = 4;
    private static DDS.DurabilityQosPolicyKind[] __array = new DDS.DurabilityQosPolicyKind[__size];

    public static final int _VOLATILE_DURABILITY_QOS = 0;
    public static final DDS.DurabilityQosPolicyKind VOLATILE_DURABILITY_QOS = new DDS.DurabilityQosPolicyKind(_VOLATILE_DURABILITY_QOS);

    public static final int _TRANSIENT_LOCAL_DURABILITY_QOS = 1;
    public static final DDS.DurabilityQosPolicyKind TRANSIENT_LOCAL_DURABILITY_QOS = new DDS.DurabilityQosPolicyKind(_TRANSIENT_LOCAL_DURABILITY_QOS);

    public static final int _TRANSIENT_DURABILITY_QOS = 2;
    public static final DDS.DurabilityQosPolicyKind TRANSIENT_DURABILITY_QOS = new DDS.DurabilityQosPolicyKind(_TRANSIENT_DURABILITY_QOS);

    public static final int _PERSISTENT_DURABILITY_QOS = 3;
    public static final DDS.DurabilityQosPolicyKind PERSISTENT_DURABILITY_QOS = new DDS.DurabilityQosPolicyKind(_PERSISTENT_DURABILITY_QOS);

    public int value ()
    {
        return __value;
    }

    public static DDS.DurabilityQosPolicyKind from_int (int value)
    {
        if (value >= 0 && value < __size) {
            return __array[value];
        }
        throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_OPERATION, null);
    }

    protected DurabilityQosPolicyKind (int value)
    {
        __value = value;
        __array[__value] = this;
    }
}
