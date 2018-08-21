package DDS;

public final class TypeBuiltinTopicData {

    public java.lang.String name = "";
    public short data_representation_id;
    public DDS.TypeHash type_hash = new DDS.TypeHash();
    public byte[] meta_data = new byte[0];
    public byte[] extentions = new byte[0];

    public TypeBuiltinTopicData() {
    }

    public TypeBuiltinTopicData(
        java.lang.String _name,
        short _data_representation_id,
        DDS.TypeHash _type_hash,
        byte[] _meta_data,
        byte[] _extentions)
    {
        name = _name;
        data_representation_id = _data_representation_id;
        type_hash = _type_hash;
        meta_data = _meta_data;
        extentions = _extentions;
    }

}
