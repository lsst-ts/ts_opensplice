package DDS;

public interface TopicBuiltinTopicDataDataWriterOperations extends
    DDS.DataWriterOperations
{

    long register_instance(
            DDS.TopicBuiltinTopicData instance_data);

    long register_instance_w_timestamp(
            DDS.TopicBuiltinTopicData instance_data, 
            DDS.Time_t source_timestamp);

    int unregister_instance(
            DDS.TopicBuiltinTopicData instance_data, 
            long handle);

    int unregister_instance_w_timestamp(
            DDS.TopicBuiltinTopicData instance_data, 
            long handle, 
            DDS.Time_t source_timestamp);

    int write(
            DDS.TopicBuiltinTopicData instance_data, 
            long handle);

    int write_w_timestamp(
            DDS.TopicBuiltinTopicData instance_data, 
            long handle, 
            DDS.Time_t source_timestamp);

    int dispose(
            DDS.TopicBuiltinTopicData instance_data, 
            long instance_handle);

    int dispose_w_timestamp(
            DDS.TopicBuiltinTopicData instance_data, 
            long instance_handle, 
            DDS.Time_t source_timestamp);
    
    int writedispose(
            DDS.TopicBuiltinTopicData instance_data, 
            long instance_handle);

    int writedispose_w_timestamp(
            DDS.TopicBuiltinTopicData instance_data, 
            long instance_handle, 
            DDS.Time_t source_timestamp);

    int get_key_value(
            DDS.TopicBuiltinTopicDataHolder key_holder, 
            long handle);
    
    long lookup_instance(
            DDS.TopicBuiltinTopicData instance_data);

}
