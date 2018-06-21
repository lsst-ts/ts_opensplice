package DDS;

public final class NamedDomainParticipantQosHolder
{

    public DDS.NamedDomainParticipantQos value = null;

    public NamedDomainParticipantQosHolder () { }

    public NamedDomainParticipantQosHolder (DDS.NamedDomainParticipantQos initialValue)
    {
        value = initialValue;
    }

}
