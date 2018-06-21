package DDS;

import org.opensplice.dds.dcps.Utilities;

public class InvalidSampleVisibilityQosPolicyKind {

    private int __value;
    private static int __size = 3;
    private static DDS.InvalidSampleVisibilityQosPolicyKind[] __array = new DDS.InvalidSampleVisibilityQosPolicyKind[__size];

    public static final int _NO_INVALID_SAMPLES = 0;
    public static final DDS.InvalidSampleVisibilityQosPolicyKind NO_INVALID_SAMPLES = new DDS.InvalidSampleVisibilityQosPolicyKind(_NO_INVALID_SAMPLES);

    public static final int _MINIMUM_INVALID_SAMPLES = 1;
    public static final DDS.InvalidSampleVisibilityQosPolicyKind MINIMUM_INVALID_SAMPLES = new DDS.InvalidSampleVisibilityQosPolicyKind(_MINIMUM_INVALID_SAMPLES);

    public static final int _ALL_INVALID_SAMPLES = 2;
    public static final DDS.InvalidSampleVisibilityQosPolicyKind ALL_INVALID_SAMPLES = new DDS.InvalidSampleVisibilityQosPolicyKind(_ALL_INVALID_SAMPLES);

    public int value ()
    {
        return __value;
    }

    public static DDS.InvalidSampleVisibilityQosPolicyKind from_int (int value)
    {
        if (value >= 0 && value < __size) {
            return __array[value];
        }
        throw Utilities.createException(Utilities.EXCEPTION_TYPE_BAD_OPERATION, null);
    }

    protected InvalidSampleVisibilityQosPolicyKind (int value)
    {
        __value = value;
        __array[__value] = this;
    }
}
