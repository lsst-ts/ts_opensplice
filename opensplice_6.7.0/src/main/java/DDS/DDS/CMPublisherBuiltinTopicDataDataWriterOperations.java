package DDS;

public interface CMPublisherBuiltinTopicDataDataWriterOperations extends
    DDS.DataWriterOperations
{

    long register_instance(
            DDS.CMPublisherBuiltinTopicData instance_data);

    long register_instance_w_timestamp(
            DDS.CMPublisherBuiltinTopicData instance_data, 
            DDS.Time_t source_timestamp);

    int unregister_instance(
            DDS.CMPublisherBuiltinTopicData instance_data, 
            long handle);

    int unregister_instance_w_timestamp(
            DDS.CMPublisherBuiltinTopicData instance_data, 
            long handle, 
            DDS.Time_t source_timestamp);

    int write(
            DDS.CMPublisherBuiltinTopicData instance_data, 
            long handle);

    int write_w_timestamp(
            DDS.CMPublisherBuiltinTopicData instance_data, 
            long handle, 
            DDS.Time_t source_timestamp);

    int dispose(
            DDS.CMPublisherBuiltinTopicData instance_data, 
            long instance_handle);

    int dispose_w_timestamp(
            DDS.CMPublisherBuiltinTopicData instance_data, 
            long instance_handle, 
            DDS.Time_t source_timestamp);
    
    int writedispose(
            DDS.CMPublisherBuiltinTopicData instance_data, 
            long instance_handle);

    int writedispose_w_timestamp(
            DDS.CMPublisherBuiltinTopicData instance_data, 
            long instance_handle, 
            DDS.Time_t source_timestamp);

    int get_key_value(
            DDS.CMPublisherBuiltinTopicDataHolder key_holder, 
            long handle);
    
    long lookup_instance(
            DDS.CMPublisherBuiltinTopicData instance_data);

}
