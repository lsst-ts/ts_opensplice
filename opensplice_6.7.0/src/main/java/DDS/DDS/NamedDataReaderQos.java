package DDS;

public final class NamedDataReaderQos {

    public java.lang.String name = "";
    public DDS.DataReaderQos datareader_qos = new DDS.DataReaderQos();

    public NamedDataReaderQos() {
    }

    public NamedDataReaderQos(
        java.lang.String _name,
        DDS.DataReaderQos _datareader_qos)
    {
        name = _name;
        datareader_qos = _datareader_qos;
    }

}
