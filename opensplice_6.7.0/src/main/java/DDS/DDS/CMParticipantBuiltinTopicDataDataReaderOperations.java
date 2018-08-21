package DDS;

public interface CMParticipantBuiltinTopicDataDataReaderOperations extends
    DDS.DataReaderOperations
{

    int read(
            DDS.CMParticipantBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            int sample_states, 
            int view_states, 
            int instance_states);

    int take(
            DDS.CMParticipantBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            int sample_states, 
            int view_states, 
            int instance_states);

    int read_w_condition(
            DDS.CMParticipantBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            DDS.ReadCondition a_condition);

    int take_w_condition(
            DDS.CMParticipantBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            DDS.ReadCondition a_condition);

    int read_next_sample(
            DDS.CMParticipantBuiltinTopicDataHolder received_data, 
            DDS.SampleInfoHolder sample_info);

    int take_next_sample(
            DDS.CMParticipantBuiltinTopicDataHolder received_data, 
            DDS.SampleInfoHolder sample_info);

    int read_instance(
            DDS.CMParticipantBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples,
            long a_handle, 
            int sample_states, 
            int view_states, 
            int instance_states);

    int take_instance(
            DDS.CMParticipantBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            long a_handle, 
            int sample_states, 
            int view_states, 
            int instance_states);

    int read_next_instance(
            DDS.CMParticipantBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            long a_handle, 
            int sample_states, 
            int view_states, 
            int instance_states);

    int take_next_instance(
            DDS.CMParticipantBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            long a_handle, 
            int sample_states, 
            int view_states, 
            int instance_states);

    int read_next_instance_w_condition(
            DDS.CMParticipantBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            long a_handle, 
            DDS.ReadCondition a_condition);

    int take_next_instance_w_condition(
            DDS.CMParticipantBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq, 
            int max_samples, 
            long a_handle, 
            DDS.ReadCondition a_condition);

    int return_loan(
            DDS.CMParticipantBuiltinTopicDataSeqHolder received_data, 
            DDS.SampleInfoSeqHolder info_seq);

    int get_key_value(
            DDS.CMParticipantBuiltinTopicDataHolder key_holder, 
            long handle);
    
    long lookup_instance(
            DDS.CMParticipantBuiltinTopicData instance);

}
