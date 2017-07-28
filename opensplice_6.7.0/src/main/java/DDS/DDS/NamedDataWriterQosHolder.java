package DDS;

public final class NamedDataWriterQosHolder
{

    public DDS.NamedDataWriterQos value = null;

    public NamedDataWriterQosHolder () { }

    public NamedDataWriterQosHolder (DDS.NamedDataWriterQos initialValue)
    {
        value = initialValue;
    }

}
