package DDS;

public final class NamedDataWriterQos {

    public java.lang.String name = "";
    public DDS.DataWriterQos datawriter_qos = new DDS.DataWriterQos();

    public NamedDataWriterQos() {
    }

    public NamedDataWriterQos(
        java.lang.String _name,
        DDS.DataWriterQos _datawriter_qos)
    {
        name = _name;
        datawriter_qos = _datawriter_qos;
    }

}
