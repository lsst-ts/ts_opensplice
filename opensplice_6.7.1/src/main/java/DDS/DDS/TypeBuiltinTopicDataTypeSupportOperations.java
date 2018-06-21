package DDS;

public interface TypeBuiltinTopicDataTypeSupportOperations extends
    DDS.TypeSupportOperations
{
    @Override
    int register_type(
            DDS.DomainParticipant participant, 
            java.lang.String type_name);

}
