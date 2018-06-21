package DDS;

public interface CMDataReaderBuiltinTopicDataDataReaderOperations extends
    DDS.DataReaderOperations
{

    int read(
            DDS.CMDataReaderBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            int sample_states, 
            int view_states, 
            int instance_states);

    int take(
            DDS.CMDataReaderBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            int sample_states, 
            int view_states, 
            int instance_states);

    int read_w_condition(
            DDS.CMDataReaderBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            DDS.ReadCondition a_condition);

    int take_w_condition(
            DDS.CMDataReaderBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            DDS.ReadCondition a_condition);

    int read_next_sample(
            DDS.CMDataReaderBuiltinTopicDataHolder received_data, 
            DDS.SampleInfoHolder sample_info);

    int take_next_sample(
            DDS.CMDataReaderBuiltinTopicDataHolder received_data, 
            DDS.SampleInfoHolder sample_info);

    int read_instance(
            DDS.CMDataReaderBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples,
            long a_handle, 
            int sample_states, 
            int view_states, 
            int instance_states);

    int take_instance(
            DDS.CMDataReaderBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            long a_handle, 
            int sample_states, 
            int view_states, 
            int instance_states);

    int read_next_instance(
            DDS.CMDataReaderBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            long a_handle, 
            int sample_states, 
            int view_states, 
            int instance_states);

    int take_next_instance(
            DDS.CMDataReaderBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            long a_handle, 
            int sample_states, 
            int view_states, 
            int instance_states);

    int read_next_instance_w_condition(
            DDS.CMDataReaderBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            long a_handle, 
            DDS.ReadCondition a_condition);

    int take_next_instance_w_condition(
            DDS.CMDataReaderBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            long a_handle, 
            DDS.ReadCondition a_condition);

    int return_loan(
            DDS.CMDataReaderBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq);

    int get_key_value(
            DDS.CMDataReaderBuiltinTopicDataHolder key_holder, 
            long handle);
    
    long lookup_instance(
            DDS.CMDataReaderBuiltinTopicData instance);

}
