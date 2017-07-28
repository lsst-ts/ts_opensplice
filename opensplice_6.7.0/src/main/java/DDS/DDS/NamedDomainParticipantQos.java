package DDS;

public final class NamedDomainParticipantQos {

    public java.lang.String name = "";
    public DDS.DomainParticipantQos domainparticipant_qos = new DDS.DomainParticipantQos();

    public NamedDomainParticipantQos() {
    }

    public NamedDomainParticipantQos(
        java.lang.String _name,
        DDS.DomainParticipantQos _domainparticipant_qos)
    {
        name = _name;
        domainparticipant_qos = _domainparticipant_qos;
    }

}
