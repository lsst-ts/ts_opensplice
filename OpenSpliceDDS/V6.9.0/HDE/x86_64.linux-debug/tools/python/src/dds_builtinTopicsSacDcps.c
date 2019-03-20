#if defined (__cplusplus)
extern "C" {
#endif

#include <dds_dcps.h>
#include <dds_dcps_private.h>

#include "dds_builtinTopicsSacDcps.h"
#include "dds_builtinTopicsSplDcps.h"

DDS_sequence_DDS_ParticipantBuiltinTopicData *DDS_sequence_DDS_ParticipantBuiltinTopicData__alloc (void)
{
    return (DDS_sequence_DDS_ParticipantBuiltinTopicData *)DDS_alloc(sizeof(DDS_sequence_DDS_ParticipantBuiltinTopicData), (DDS_deallocatorType)DDS_sequence_free);
}

DDS_ParticipantBuiltinTopicData *DDS_sequence_DDS_ParticipantBuiltinTopicData_allocbuf (DDS_unsigned_long len)
{
    DDS_ReturnCode_t DDS_sequence_DDS_ParticipantBuiltinTopicData_freebuf (void *buffer);

    return (DDS_ParticipantBuiltinTopicData *)DDS_sequence_allocbuf (DDS_sequence_DDS_ParticipantBuiltinTopicData_freebuf, sizeof (DDS_ParticipantBuiltinTopicData), len);
}

DDS_ReturnCode_t DDS_sequence_DDS_ParticipantBuiltinTopicData_freebuf (void *buffer);
DDS_ReturnCode_t DDS_sequence_DDS_ParticipantBuiltinTopicData_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    DDS_ParticipantBuiltinTopicData *b = (DDS_ParticipantBuiltinTopicData *)buffer;
    DDS_unsigned_long i;
    DDS_ReturnCode_t DDS_ParticipantBuiltinTopicData__free (void *object);

    for (i = 0; i < *count; i++) {
        (void) DDS_ParticipantBuiltinTopicData__free (&b[i]);
    }
    return DDS_RETCODE_OK;
}

extern v_copyin_result __DDS_ParticipantBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern void __DDS_ParticipantBuiltinTopicData__copyOut(const void *from, void *to);


DDS_ParticipantBuiltinTopicDataTypeSupport
DDS_ParticipantBuiltinTopicDataTypeSupport__alloc (
    void
    )
{
    DDS_ParticipantBuiltinTopicDataTypeSupport result;
    result = DDS_TypeSupportNew (
            "DDS::ParticipantBuiltinTopicData",
            "kernelModule::v_participantInfo",
            "key.localId,key.systemId",
            DDS_ParticipantBuiltinTopicData_metaDescriptor,
            DDS_ParticipantBuiltinTopicData_metaDescriptorArrLength,
            DDS_ParticipantBuiltinTopicData_metaDescriptorLength,
            (DDS_copyIn)__DDS_ParticipantBuiltinTopicData__copyIn,
            (DDS_copyOut)__DDS_ParticipantBuiltinTopicData__copyOut,
            (DDS_unsigned_long)(sizeof(DDS_ParticipantBuiltinTopicData)),
            (DDS_allocBuffer)DDS_sequence_DDS_ParticipantBuiltinTopicData_allocbuf
        );
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataTypeSupport_register_type (
    DDS_ParticipantBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_TypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
DDS_ParticipantBuiltinTopicDataTypeSupport_get_type_name (
    DDS_ParticipantBuiltinTopicDataTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS_TypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
DDS_ParticipantBuiltinTopicDataDataWriter_register_instance (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
DDS_ParticipantBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_unregister_instance (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_write (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_dispose (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_writedispose (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataWriter_get_key_value (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    DDS_ParticipantBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_ParticipantBuiltinTopicDataDataWriter_lookup_instance (
    DDS_ParticipantBuiltinTopicDataDataWriter _this,
    const DDS_ParticipantBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_Sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_read (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_take (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_read_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_take_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_read_next_sample (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_take_next_sample (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_read_instance (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_take_instance (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_read_next_instance (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_take_next_instance (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_return_loan (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_return_loan (
            (DDS_DataReader)_this,
            (_DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReader_get_key_value (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    DDS_ParticipantBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_ParticipantBuiltinTopicDataDataReader_lookup_instance (
    DDS_ParticipantBuiltinTopicDataDataReader _this,
    const DDS_ParticipantBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_read (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_take (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_read_instance (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_take_instance (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_return_loan (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (_DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS_free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;
        
        DDS_free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_ParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicDataDataReaderView_get_key_value (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_ParticipantBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
DDS_ParticipantBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_ParticipantBuiltinTopicDataDataReaderView _this,
    DDS_ParticipantBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_sequence_DDS_TopicBuiltinTopicData *DDS_sequence_DDS_TopicBuiltinTopicData__alloc (void)
{
    return (DDS_sequence_DDS_TopicBuiltinTopicData *)DDS_alloc(sizeof(DDS_sequence_DDS_TopicBuiltinTopicData), (DDS_deallocatorType)DDS_sequence_free);
}

DDS_TopicBuiltinTopicData *DDS_sequence_DDS_TopicBuiltinTopicData_allocbuf (DDS_unsigned_long len)
{
    DDS_ReturnCode_t DDS_sequence_DDS_TopicBuiltinTopicData_freebuf (void *buffer);

    return (DDS_TopicBuiltinTopicData *)DDS_sequence_allocbuf (DDS_sequence_DDS_TopicBuiltinTopicData_freebuf, sizeof (DDS_TopicBuiltinTopicData), len);
}

DDS_ReturnCode_t DDS_sequence_DDS_TopicBuiltinTopicData_freebuf (void *buffer);
DDS_ReturnCode_t DDS_sequence_DDS_TopicBuiltinTopicData_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    DDS_TopicBuiltinTopicData *b = (DDS_TopicBuiltinTopicData *)buffer;
    DDS_unsigned_long i;
    DDS_ReturnCode_t DDS_TopicBuiltinTopicData__free (void *object);

    for (i = 0; i < *count; i++) {
        (void) DDS_TopicBuiltinTopicData__free (&b[i]);
    }
    return DDS_RETCODE_OK;
}

extern v_copyin_result __DDS_TopicBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern void __DDS_TopicBuiltinTopicData__copyOut(const void *from, void *to);


DDS_TopicBuiltinTopicDataTypeSupport
DDS_TopicBuiltinTopicDataTypeSupport__alloc (
    void
    )
{
    DDS_TopicBuiltinTopicDataTypeSupport result;
    result = DDS_TypeSupportNew (
            "DDS::TopicBuiltinTopicData",
            "kernelModule::v_topicInfo",
            "key.localId,key.systemId",
            DDS_TopicBuiltinTopicData_metaDescriptor,
            DDS_TopicBuiltinTopicData_metaDescriptorArrLength,
            DDS_TopicBuiltinTopicData_metaDescriptorLength,
            (DDS_copyIn)__DDS_TopicBuiltinTopicData__copyIn,
            (DDS_copyOut)__DDS_TopicBuiltinTopicData__copyOut,
            (DDS_unsigned_long)(sizeof(DDS_TopicBuiltinTopicData)),
            (DDS_allocBuffer)DDS_sequence_DDS_TopicBuiltinTopicData_allocbuf
        );
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataTypeSupport_register_type (
    DDS_TopicBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_TypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
DDS_TopicBuiltinTopicDataTypeSupport_get_type_name (
    DDS_TopicBuiltinTopicDataTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS_TypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
DDS_TopicBuiltinTopicDataDataWriter_register_instance (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
DDS_TopicBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_unregister_instance (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_write (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_dispose (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_writedispose (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataWriter_get_key_value (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    DDS_TopicBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_TopicBuiltinTopicDataDataWriter_lookup_instance (
    DDS_TopicBuiltinTopicDataDataWriter _this,
    const DDS_TopicBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_Sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_read (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_take (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_read_w_condition (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_take_w_condition (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_read_next_sample (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_take_next_sample (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_read_instance (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_take_instance (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_read_next_instance (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_take_next_instance (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_return_loan (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_return_loan (
            (DDS_DataReader)_this,
            (_DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReader_get_key_value (
    DDS_TopicBuiltinTopicDataDataReader _this,
    DDS_TopicBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_TopicBuiltinTopicDataDataReader_lookup_instance (
    DDS_TopicBuiltinTopicDataDataReader _this,
    const DDS_TopicBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_read (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_take (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_read_instance (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_take_instance (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_return_loan (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (_DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS_free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;
        
        DDS_free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TopicBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_TopicBuiltinTopicDataDataReaderView_get_key_value (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_TopicBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
DDS_TopicBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_TopicBuiltinTopicDataDataReaderView _this,
    DDS_TopicBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_sequence_DDS_TypeBuiltinTopicData *DDS_sequence_DDS_TypeBuiltinTopicData__alloc (void)
{
    return (DDS_sequence_DDS_TypeBuiltinTopicData *)DDS_alloc(sizeof(DDS_sequence_DDS_TypeBuiltinTopicData), (DDS_deallocatorType)DDS_sequence_free);
}

DDS_TypeBuiltinTopicData *DDS_sequence_DDS_TypeBuiltinTopicData_allocbuf (DDS_unsigned_long len)
{
    DDS_ReturnCode_t DDS_sequence_DDS_TypeBuiltinTopicData_freebuf (void *buffer);

    return (DDS_TypeBuiltinTopicData *)DDS_sequence_allocbuf (DDS_sequence_DDS_TypeBuiltinTopicData_freebuf, sizeof (DDS_TypeBuiltinTopicData), len);
}

DDS_ReturnCode_t DDS_sequence_DDS_TypeBuiltinTopicData_freebuf (void *buffer);
DDS_ReturnCode_t DDS_sequence_DDS_TypeBuiltinTopicData_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    DDS_TypeBuiltinTopicData *b = (DDS_TypeBuiltinTopicData *)buffer;
    DDS_unsigned_long i;
    DDS_ReturnCode_t DDS_TypeBuiltinTopicData__free (void *object);

    for (i = 0; i < *count; i++) {
        (void) DDS_TypeBuiltinTopicData__free (&b[i]);
    }
    return DDS_RETCODE_OK;
}

extern v_copyin_result __DDS_TypeBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern void __DDS_TypeBuiltinTopicData__copyOut(const void *from, void *to);


DDS_TypeBuiltinTopicDataTypeSupport
DDS_TypeBuiltinTopicDataTypeSupport__alloc (
    void
    )
{
    DDS_TypeBuiltinTopicDataTypeSupport result;
    result = DDS_TypeSupportNew (
            "DDS::TypeBuiltinTopicData",
            "kernelModule::v_typeInfo",
            "name,data_representation_id,type_hash.msb,type_hash.lsb",
            DDS_TypeBuiltinTopicData_metaDescriptor,
            DDS_TypeBuiltinTopicData_metaDescriptorArrLength,
            DDS_TypeBuiltinTopicData_metaDescriptorLength,
            (DDS_copyIn)__DDS_TypeBuiltinTopicData__copyIn,
            (DDS_copyOut)__DDS_TypeBuiltinTopicData__copyOut,
            (DDS_unsigned_long)(sizeof(DDS_TypeBuiltinTopicData)),
            (DDS_allocBuffer)DDS_sequence_DDS_TypeBuiltinTopicData_allocbuf
        );
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataTypeSupport_register_type (
    DDS_TypeBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_TypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
DDS_TypeBuiltinTopicDataTypeSupport_get_type_name (
    DDS_TypeBuiltinTopicDataTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS_TypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
DDS_TypeBuiltinTopicDataDataWriter_register_instance (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
DDS_TypeBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_unregister_instance (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_write (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_dispose (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_writedispose (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataWriter_get_key_value (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    DDS_TypeBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_TypeBuiltinTopicDataDataWriter_lookup_instance (
    DDS_TypeBuiltinTopicDataDataWriter _this,
    const DDS_TypeBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_Sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_read (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_take (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_read_w_condition (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_take_w_condition (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_read_next_sample (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_take_next_sample (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_read_instance (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_take_instance (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_read_next_instance (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_take_next_instance (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_return_loan (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_return_loan (
            (DDS_DataReader)_this,
            (_DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReader_get_key_value (
    DDS_TypeBuiltinTopicDataDataReader _this,
    DDS_TypeBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_TypeBuiltinTopicDataDataReader_lookup_instance (
    DDS_TypeBuiltinTopicDataDataReader _this,
    const DDS_TypeBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_read (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_take (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_read_instance (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_take_instance (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_return_loan (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (_DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS_free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;
        
        DDS_free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_TypeBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_TypeBuiltinTopicDataDataReaderView_get_key_value (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_TypeBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
DDS_TypeBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_TypeBuiltinTopicDataDataReaderView _this,
    DDS_TypeBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_sequence_DDS_PublicationBuiltinTopicData *DDS_sequence_DDS_PublicationBuiltinTopicData__alloc (void)
{
    return (DDS_sequence_DDS_PublicationBuiltinTopicData *)DDS_alloc(sizeof(DDS_sequence_DDS_PublicationBuiltinTopicData), (DDS_deallocatorType)DDS_sequence_free);
}

DDS_PublicationBuiltinTopicData *DDS_sequence_DDS_PublicationBuiltinTopicData_allocbuf (DDS_unsigned_long len)
{
    DDS_ReturnCode_t DDS_sequence_DDS_PublicationBuiltinTopicData_freebuf (void *buffer);

    return (DDS_PublicationBuiltinTopicData *)DDS_sequence_allocbuf (DDS_sequence_DDS_PublicationBuiltinTopicData_freebuf, sizeof (DDS_PublicationBuiltinTopicData), len);
}

DDS_ReturnCode_t DDS_sequence_DDS_PublicationBuiltinTopicData_freebuf (void *buffer);
DDS_ReturnCode_t DDS_sequence_DDS_PublicationBuiltinTopicData_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    DDS_PublicationBuiltinTopicData *b = (DDS_PublicationBuiltinTopicData *)buffer;
    DDS_unsigned_long i;
    DDS_ReturnCode_t DDS_PublicationBuiltinTopicData__free (void *object);

    for (i = 0; i < *count; i++) {
        (void) DDS_PublicationBuiltinTopicData__free (&b[i]);
    }
    return DDS_RETCODE_OK;
}

extern v_copyin_result __DDS_PublicationBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern void __DDS_PublicationBuiltinTopicData__copyOut(const void *from, void *to);


DDS_PublicationBuiltinTopicDataTypeSupport
DDS_PublicationBuiltinTopicDataTypeSupport__alloc (
    void
    )
{
    DDS_PublicationBuiltinTopicDataTypeSupport result;
    result = DDS_TypeSupportNew (
            "DDS::PublicationBuiltinTopicData",
            "kernelModule::v_publicationInfo",
            "key.localId,key.systemId",
            DDS_PublicationBuiltinTopicData_metaDescriptor,
            DDS_PublicationBuiltinTopicData_metaDescriptorArrLength,
            DDS_PublicationBuiltinTopicData_metaDescriptorLength,
            (DDS_copyIn)__DDS_PublicationBuiltinTopicData__copyIn,
            (DDS_copyOut)__DDS_PublicationBuiltinTopicData__copyOut,
            (DDS_unsigned_long)(sizeof(DDS_PublicationBuiltinTopicData)),
            (DDS_allocBuffer)DDS_sequence_DDS_PublicationBuiltinTopicData_allocbuf
        );
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataTypeSupport_register_type (
    DDS_PublicationBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_TypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
DDS_PublicationBuiltinTopicDataTypeSupport_get_type_name (
    DDS_PublicationBuiltinTopicDataTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS_TypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
DDS_PublicationBuiltinTopicDataDataWriter_register_instance (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
DDS_PublicationBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_unregister_instance (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_write (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_dispose (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_writedispose (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataWriter_get_key_value (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    DDS_PublicationBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_PublicationBuiltinTopicDataDataWriter_lookup_instance (
    DDS_PublicationBuiltinTopicDataDataWriter _this,
    const DDS_PublicationBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_Sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_read (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_take (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_read_w_condition (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_take_w_condition (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_read_next_sample (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_take_next_sample (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_read_instance (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_take_instance (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_read_next_instance (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_take_next_instance (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_return_loan (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_return_loan (
            (DDS_DataReader)_this,
            (_DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReader_get_key_value (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    DDS_PublicationBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_PublicationBuiltinTopicDataDataReader_lookup_instance (
    DDS_PublicationBuiltinTopicDataDataReader _this,
    const DDS_PublicationBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_read (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_take (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_read_instance (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_take_instance (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_return_loan (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (_DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS_free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;
        
        DDS_free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_PublicationBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_PublicationBuiltinTopicDataDataReaderView_get_key_value (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_PublicationBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
DDS_PublicationBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_PublicationBuiltinTopicDataDataReaderView _this,
    DDS_PublicationBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_sequence_DDS_SubscriptionBuiltinTopicData *DDS_sequence_DDS_SubscriptionBuiltinTopicData__alloc (void)
{
    return (DDS_sequence_DDS_SubscriptionBuiltinTopicData *)DDS_alloc(sizeof(DDS_sequence_DDS_SubscriptionBuiltinTopicData), (DDS_deallocatorType)DDS_sequence_free);
}

DDS_SubscriptionBuiltinTopicData *DDS_sequence_DDS_SubscriptionBuiltinTopicData_allocbuf (DDS_unsigned_long len)
{
    DDS_ReturnCode_t DDS_sequence_DDS_SubscriptionBuiltinTopicData_freebuf (void *buffer);

    return (DDS_SubscriptionBuiltinTopicData *)DDS_sequence_allocbuf (DDS_sequence_DDS_SubscriptionBuiltinTopicData_freebuf, sizeof (DDS_SubscriptionBuiltinTopicData), len);
}

DDS_ReturnCode_t DDS_sequence_DDS_SubscriptionBuiltinTopicData_freebuf (void *buffer);
DDS_ReturnCode_t DDS_sequence_DDS_SubscriptionBuiltinTopicData_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    DDS_SubscriptionBuiltinTopicData *b = (DDS_SubscriptionBuiltinTopicData *)buffer;
    DDS_unsigned_long i;
    DDS_ReturnCode_t DDS_SubscriptionBuiltinTopicData__free (void *object);

    for (i = 0; i < *count; i++) {
        (void) DDS_SubscriptionBuiltinTopicData__free (&b[i]);
    }
    return DDS_RETCODE_OK;
}

extern v_copyin_result __DDS_SubscriptionBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern void __DDS_SubscriptionBuiltinTopicData__copyOut(const void *from, void *to);


DDS_SubscriptionBuiltinTopicDataTypeSupport
DDS_SubscriptionBuiltinTopicDataTypeSupport__alloc (
    void
    )
{
    DDS_SubscriptionBuiltinTopicDataTypeSupport result;
    result = DDS_TypeSupportNew (
            "DDS::SubscriptionBuiltinTopicData",
            "kernelModule::v_subscriptionInfo",
            "key.localId,key.systemId",
            DDS_SubscriptionBuiltinTopicData_metaDescriptor,
            DDS_SubscriptionBuiltinTopicData_metaDescriptorArrLength,
            DDS_SubscriptionBuiltinTopicData_metaDescriptorLength,
            (DDS_copyIn)__DDS_SubscriptionBuiltinTopicData__copyIn,
            (DDS_copyOut)__DDS_SubscriptionBuiltinTopicData__copyOut,
            (DDS_unsigned_long)(sizeof(DDS_SubscriptionBuiltinTopicData)),
            (DDS_allocBuffer)DDS_sequence_DDS_SubscriptionBuiltinTopicData_allocbuf
        );
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataTypeSupport_register_type (
    DDS_SubscriptionBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_TypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
DDS_SubscriptionBuiltinTopicDataTypeSupport_get_type_name (
    DDS_SubscriptionBuiltinTopicDataTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS_TypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
DDS_SubscriptionBuiltinTopicDataDataWriter_register_instance (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
DDS_SubscriptionBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_unregister_instance (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_write (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_dispose (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_writedispose (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataWriter_get_key_value (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    DDS_SubscriptionBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_SubscriptionBuiltinTopicDataDataWriter_lookup_instance (
    DDS_SubscriptionBuiltinTopicDataDataWriter _this,
    const DDS_SubscriptionBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_Sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_read (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_take (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_read_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_take_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_read_next_sample (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_take_next_sample (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_read_instance (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_take_instance (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_read_next_instance (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_take_next_instance (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_return_loan (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_return_loan (
            (DDS_DataReader)_this,
            (_DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReader_get_key_value (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    DDS_SubscriptionBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_SubscriptionBuiltinTopicDataDataReader_lookup_instance (
    DDS_SubscriptionBuiltinTopicDataDataReader _this,
    const DDS_SubscriptionBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_read (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_take (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_read_instance (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_take_instance (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_return_loan (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (_DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS_free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;
        
        DDS_free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_SubscriptionBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_get_key_value (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_SubscriptionBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
DDS_SubscriptionBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_SubscriptionBuiltinTopicDataDataReaderView _this,
    DDS_SubscriptionBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_sequence_DDS_CMParticipantBuiltinTopicData *DDS_sequence_DDS_CMParticipantBuiltinTopicData__alloc (void)
{
    return (DDS_sequence_DDS_CMParticipantBuiltinTopicData *)DDS_alloc(sizeof(DDS_sequence_DDS_CMParticipantBuiltinTopicData), (DDS_deallocatorType)DDS_sequence_free);
}

DDS_CMParticipantBuiltinTopicData *DDS_sequence_DDS_CMParticipantBuiltinTopicData_allocbuf (DDS_unsigned_long len)
{
    DDS_ReturnCode_t DDS_sequence_DDS_CMParticipantBuiltinTopicData_freebuf (void *buffer);

    return (DDS_CMParticipantBuiltinTopicData *)DDS_sequence_allocbuf (DDS_sequence_DDS_CMParticipantBuiltinTopicData_freebuf, sizeof (DDS_CMParticipantBuiltinTopicData), len);
}

DDS_ReturnCode_t DDS_sequence_DDS_CMParticipantBuiltinTopicData_freebuf (void *buffer);
DDS_ReturnCode_t DDS_sequence_DDS_CMParticipantBuiltinTopicData_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    DDS_CMParticipantBuiltinTopicData *b = (DDS_CMParticipantBuiltinTopicData *)buffer;
    DDS_unsigned_long i;
    DDS_ReturnCode_t DDS_CMParticipantBuiltinTopicData__free (void *object);

    for (i = 0; i < *count; i++) {
        (void) DDS_CMParticipantBuiltinTopicData__free (&b[i]);
    }
    return DDS_RETCODE_OK;
}

extern v_copyin_result __DDS_CMParticipantBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern void __DDS_CMParticipantBuiltinTopicData__copyOut(const void *from, void *to);


DDS_CMParticipantBuiltinTopicDataTypeSupport
DDS_CMParticipantBuiltinTopicDataTypeSupport__alloc (
    void
    )
{
    DDS_CMParticipantBuiltinTopicDataTypeSupport result;
    result = DDS_TypeSupportNew (
            "DDS::CMParticipantBuiltinTopicData",
            "kernelModule::v_participantCMInfo",
            "key.localId,key.systemId",
            DDS_CMParticipantBuiltinTopicData_metaDescriptor,
            DDS_CMParticipantBuiltinTopicData_metaDescriptorArrLength,
            DDS_CMParticipantBuiltinTopicData_metaDescriptorLength,
            (DDS_copyIn)__DDS_CMParticipantBuiltinTopicData__copyIn,
            (DDS_copyOut)__DDS_CMParticipantBuiltinTopicData__copyOut,
            (DDS_unsigned_long)(sizeof(DDS_CMParticipantBuiltinTopicData)),
            (DDS_allocBuffer)DDS_sequence_DDS_CMParticipantBuiltinTopicData_allocbuf
        );
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataTypeSupport_register_type (
    DDS_CMParticipantBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_TypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
DDS_CMParticipantBuiltinTopicDataTypeSupport_get_type_name (
    DDS_CMParticipantBuiltinTopicDataTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS_TypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMParticipantBuiltinTopicDataDataWriter_register_instance (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMParticipantBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_unregister_instance (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_write (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_dispose (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_writedispose (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataWriter_get_key_value (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    DDS_CMParticipantBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMParticipantBuiltinTopicDataDataWriter_lookup_instance (
    DDS_CMParticipantBuiltinTopicDataDataWriter _this,
    const DDS_CMParticipantBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_Sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_read (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_take (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_read_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_take_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_read_next_sample (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_take_next_sample (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_read_instance (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_take_instance (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_read_next_instance (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_take_next_instance (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_return_loan (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_return_loan (
            (DDS_DataReader)_this,
            (_DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReader_get_key_value (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    DDS_CMParticipantBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMParticipantBuiltinTopicDataDataReader_lookup_instance (
    DDS_CMParticipantBuiltinTopicDataDataReader _this,
    const DDS_CMParticipantBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_read (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_take (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_read_instance (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_take_instance (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_return_loan (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (_DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS_free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;
        
        DDS_free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMParticipantBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_get_key_value (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_CMParticipantBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
DDS_CMParticipantBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_CMParticipantBuiltinTopicDataDataReaderView _this,
    DDS_CMParticipantBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_sequence_DDS_CMPublisherBuiltinTopicData *DDS_sequence_DDS_CMPublisherBuiltinTopicData__alloc (void)
{
    return (DDS_sequence_DDS_CMPublisherBuiltinTopicData *)DDS_alloc(sizeof(DDS_sequence_DDS_CMPublisherBuiltinTopicData), (DDS_deallocatorType)DDS_sequence_free);
}

DDS_CMPublisherBuiltinTopicData *DDS_sequence_DDS_CMPublisherBuiltinTopicData_allocbuf (DDS_unsigned_long len)
{
    DDS_ReturnCode_t DDS_sequence_DDS_CMPublisherBuiltinTopicData_freebuf (void *buffer);

    return (DDS_CMPublisherBuiltinTopicData *)DDS_sequence_allocbuf (DDS_sequence_DDS_CMPublisherBuiltinTopicData_freebuf, sizeof (DDS_CMPublisherBuiltinTopicData), len);
}

DDS_ReturnCode_t DDS_sequence_DDS_CMPublisherBuiltinTopicData_freebuf (void *buffer);
DDS_ReturnCode_t DDS_sequence_DDS_CMPublisherBuiltinTopicData_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    DDS_CMPublisherBuiltinTopicData *b = (DDS_CMPublisherBuiltinTopicData *)buffer;
    DDS_unsigned_long i;
    DDS_ReturnCode_t DDS_CMPublisherBuiltinTopicData__free (void *object);

    for (i = 0; i < *count; i++) {
        (void) DDS_CMPublisherBuiltinTopicData__free (&b[i]);
    }
    return DDS_RETCODE_OK;
}

extern v_copyin_result __DDS_CMPublisherBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern void __DDS_CMPublisherBuiltinTopicData__copyOut(const void *from, void *to);


DDS_CMPublisherBuiltinTopicDataTypeSupport
DDS_CMPublisherBuiltinTopicDataTypeSupport__alloc (
    void
    )
{
    DDS_CMPublisherBuiltinTopicDataTypeSupport result;
    result = DDS_TypeSupportNew (
            "DDS::CMPublisherBuiltinTopicData",
            "kernelModule::v_publisherCMInfo",
            "key.localId,key.systemId",
            DDS_CMPublisherBuiltinTopicData_metaDescriptor,
            DDS_CMPublisherBuiltinTopicData_metaDescriptorArrLength,
            DDS_CMPublisherBuiltinTopicData_metaDescriptorLength,
            (DDS_copyIn)__DDS_CMPublisherBuiltinTopicData__copyIn,
            (DDS_copyOut)__DDS_CMPublisherBuiltinTopicData__copyOut,
            (DDS_unsigned_long)(sizeof(DDS_CMPublisherBuiltinTopicData)),
            (DDS_allocBuffer)DDS_sequence_DDS_CMPublisherBuiltinTopicData_allocbuf
        );
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataTypeSupport_register_type (
    DDS_CMPublisherBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_TypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
DDS_CMPublisherBuiltinTopicDataTypeSupport_get_type_name (
    DDS_CMPublisherBuiltinTopicDataTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS_TypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMPublisherBuiltinTopicDataDataWriter_register_instance (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMPublisherBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_unregister_instance (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_write (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_dispose (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_writedispose (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataWriter_get_key_value (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    DDS_CMPublisherBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMPublisherBuiltinTopicDataDataWriter_lookup_instance (
    DDS_CMPublisherBuiltinTopicDataDataWriter _this,
    const DDS_CMPublisherBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_Sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_read (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_take (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_read_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_take_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_read_next_sample (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_take_next_sample (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_read_instance (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_take_instance (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_read_next_instance (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_take_next_instance (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_return_loan (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_return_loan (
            (DDS_DataReader)_this,
            (_DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReader_get_key_value (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    DDS_CMPublisherBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMPublisherBuiltinTopicDataDataReader_lookup_instance (
    DDS_CMPublisherBuiltinTopicDataDataReader _this,
    const DDS_CMPublisherBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_read (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_take (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_read_instance (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_take_instance (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_return_loan (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (_DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS_free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;
        
        DDS_free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMPublisherBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_get_key_value (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_CMPublisherBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
DDS_CMPublisherBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_CMPublisherBuiltinTopicDataDataReaderView _this,
    DDS_CMPublisherBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_sequence_DDS_CMSubscriberBuiltinTopicData *DDS_sequence_DDS_CMSubscriberBuiltinTopicData__alloc (void)
{
    return (DDS_sequence_DDS_CMSubscriberBuiltinTopicData *)DDS_alloc(sizeof(DDS_sequence_DDS_CMSubscriberBuiltinTopicData), (DDS_deallocatorType)DDS_sequence_free);
}

DDS_CMSubscriberBuiltinTopicData *DDS_sequence_DDS_CMSubscriberBuiltinTopicData_allocbuf (DDS_unsigned_long len)
{
    DDS_ReturnCode_t DDS_sequence_DDS_CMSubscriberBuiltinTopicData_freebuf (void *buffer);

    return (DDS_CMSubscriberBuiltinTopicData *)DDS_sequence_allocbuf (DDS_sequence_DDS_CMSubscriberBuiltinTopicData_freebuf, sizeof (DDS_CMSubscriberBuiltinTopicData), len);
}

DDS_ReturnCode_t DDS_sequence_DDS_CMSubscriberBuiltinTopicData_freebuf (void *buffer);
DDS_ReturnCode_t DDS_sequence_DDS_CMSubscriberBuiltinTopicData_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    DDS_CMSubscriberBuiltinTopicData *b = (DDS_CMSubscriberBuiltinTopicData *)buffer;
    DDS_unsigned_long i;
    DDS_ReturnCode_t DDS_CMSubscriberBuiltinTopicData__free (void *object);

    for (i = 0; i < *count; i++) {
        (void) DDS_CMSubscriberBuiltinTopicData__free (&b[i]);
    }
    return DDS_RETCODE_OK;
}

extern v_copyin_result __DDS_CMSubscriberBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern void __DDS_CMSubscriberBuiltinTopicData__copyOut(const void *from, void *to);


DDS_CMSubscriberBuiltinTopicDataTypeSupport
DDS_CMSubscriberBuiltinTopicDataTypeSupport__alloc (
    void
    )
{
    DDS_CMSubscriberBuiltinTopicDataTypeSupport result;
    result = DDS_TypeSupportNew (
            "DDS::CMSubscriberBuiltinTopicData",
            "kernelModule::v_subscriberCMInfo",
            "key.localId,key.systemId",
            DDS_CMSubscriberBuiltinTopicData_metaDescriptor,
            DDS_CMSubscriberBuiltinTopicData_metaDescriptorArrLength,
            DDS_CMSubscriberBuiltinTopicData_metaDescriptorLength,
            (DDS_copyIn)__DDS_CMSubscriberBuiltinTopicData__copyIn,
            (DDS_copyOut)__DDS_CMSubscriberBuiltinTopicData__copyOut,
            (DDS_unsigned_long)(sizeof(DDS_CMSubscriberBuiltinTopicData)),
            (DDS_allocBuffer)DDS_sequence_DDS_CMSubscriberBuiltinTopicData_allocbuf
        );
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataTypeSupport_register_type (
    DDS_CMSubscriberBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_TypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
DDS_CMSubscriberBuiltinTopicDataTypeSupport_get_type_name (
    DDS_CMSubscriberBuiltinTopicDataTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS_TypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_register_instance (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_unregister_instance (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_write (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_dispose (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_writedispose (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_get_key_value (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    DDS_CMSubscriberBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMSubscriberBuiltinTopicDataDataWriter_lookup_instance (
    DDS_CMSubscriberBuiltinTopicDataDataWriter _this,
    const DDS_CMSubscriberBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_Sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_read (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_take (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_read_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_take_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_read_next_sample (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_take_next_sample (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_read_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_take_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_read_next_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_take_next_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_return_loan (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_return_loan (
            (DDS_DataReader)_this,
            (_DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReader_get_key_value (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    DDS_CMSubscriberBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMSubscriberBuiltinTopicDataDataReader_lookup_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReader _this,
    const DDS_CMSubscriberBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_read (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_take (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_read_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_take_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_return_loan (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (_DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS_free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;
        
        DDS_free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMSubscriberBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_get_key_value (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_CMSubscriberBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
DDS_CMSubscriberBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_CMSubscriberBuiltinTopicDataDataReaderView _this,
    DDS_CMSubscriberBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_sequence_DDS_CMDataWriterBuiltinTopicData *DDS_sequence_DDS_CMDataWriterBuiltinTopicData__alloc (void)
{
    return (DDS_sequence_DDS_CMDataWriterBuiltinTopicData *)DDS_alloc(sizeof(DDS_sequence_DDS_CMDataWriterBuiltinTopicData), (DDS_deallocatorType)DDS_sequence_free);
}

DDS_CMDataWriterBuiltinTopicData *DDS_sequence_DDS_CMDataWriterBuiltinTopicData_allocbuf (DDS_unsigned_long len)
{
    DDS_ReturnCode_t DDS_sequence_DDS_CMDataWriterBuiltinTopicData_freebuf (void *buffer);

    return (DDS_CMDataWriterBuiltinTopicData *)DDS_sequence_allocbuf (DDS_sequence_DDS_CMDataWriterBuiltinTopicData_freebuf, sizeof (DDS_CMDataWriterBuiltinTopicData), len);
}

DDS_ReturnCode_t DDS_sequence_DDS_CMDataWriterBuiltinTopicData_freebuf (void *buffer);
DDS_ReturnCode_t DDS_sequence_DDS_CMDataWriterBuiltinTopicData_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    DDS_CMDataWriterBuiltinTopicData *b = (DDS_CMDataWriterBuiltinTopicData *)buffer;
    DDS_unsigned_long i;
    DDS_ReturnCode_t DDS_CMDataWriterBuiltinTopicData__free (void *object);

    for (i = 0; i < *count; i++) {
        (void) DDS_CMDataWriterBuiltinTopicData__free (&b[i]);
    }
    return DDS_RETCODE_OK;
}

extern v_copyin_result __DDS_CMDataWriterBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern void __DDS_CMDataWriterBuiltinTopicData__copyOut(const void *from, void *to);


DDS_CMDataWriterBuiltinTopicDataTypeSupport
DDS_CMDataWriterBuiltinTopicDataTypeSupport__alloc (
    void
    )
{
    DDS_CMDataWriterBuiltinTopicDataTypeSupport result;
    result = DDS_TypeSupportNew (
            "DDS::CMDataWriterBuiltinTopicData",
            "kernelModule::v_dataWriterCMInfo",
            "key.localId,key.systemId",
            DDS_CMDataWriterBuiltinTopicData_metaDescriptor,
            DDS_CMDataWriterBuiltinTopicData_metaDescriptorArrLength,
            DDS_CMDataWriterBuiltinTopicData_metaDescriptorLength,
            (DDS_copyIn)__DDS_CMDataWriterBuiltinTopicData__copyIn,
            (DDS_copyOut)__DDS_CMDataWriterBuiltinTopicData__copyOut,
            (DDS_unsigned_long)(sizeof(DDS_CMDataWriterBuiltinTopicData)),
            (DDS_allocBuffer)DDS_sequence_DDS_CMDataWriterBuiltinTopicData_allocbuf
        );
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataTypeSupport_register_type (
    DDS_CMDataWriterBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_TypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
DDS_CMDataWriterBuiltinTopicDataTypeSupport_get_type_name (
    DDS_CMDataWriterBuiltinTopicDataTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS_TypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_register_instance (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_unregister_instance (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_write (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_dispose (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_writedispose (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_get_key_value (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    DDS_CMDataWriterBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMDataWriterBuiltinTopicDataDataWriter_lookup_instance (
    DDS_CMDataWriterBuiltinTopicDataDataWriter _this,
    const DDS_CMDataWriterBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_Sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_read (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_take (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_read_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_take_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_read_next_sample (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_take_next_sample (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_read_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_take_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_read_next_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_take_next_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_return_loan (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_return_loan (
            (DDS_DataReader)_this,
            (_DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReader_get_key_value (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    DDS_CMDataWriterBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMDataWriterBuiltinTopicDataDataReader_lookup_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReader _this,
    const DDS_CMDataWriterBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_read (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_take (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_read_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_take_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_return_loan (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (_DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS_free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;
        
        DDS_free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataWriterBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_get_key_value (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_CMDataWriterBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
DDS_CMDataWriterBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_CMDataWriterBuiltinTopicDataDataReaderView _this,
    DDS_CMDataWriterBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_sequence_DDS_CMDataReaderBuiltinTopicData *DDS_sequence_DDS_CMDataReaderBuiltinTopicData__alloc (void)
{
    return (DDS_sequence_DDS_CMDataReaderBuiltinTopicData *)DDS_alloc(sizeof(DDS_sequence_DDS_CMDataReaderBuiltinTopicData), (DDS_deallocatorType)DDS_sequence_free);
}

DDS_CMDataReaderBuiltinTopicData *DDS_sequence_DDS_CMDataReaderBuiltinTopicData_allocbuf (DDS_unsigned_long len)
{
    DDS_ReturnCode_t DDS_sequence_DDS_CMDataReaderBuiltinTopicData_freebuf (void *buffer);

    return (DDS_CMDataReaderBuiltinTopicData *)DDS_sequence_allocbuf (DDS_sequence_DDS_CMDataReaderBuiltinTopicData_freebuf, sizeof (DDS_CMDataReaderBuiltinTopicData), len);
}

DDS_ReturnCode_t DDS_sequence_DDS_CMDataReaderBuiltinTopicData_freebuf (void *buffer);
DDS_ReturnCode_t DDS_sequence_DDS_CMDataReaderBuiltinTopicData_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    DDS_CMDataReaderBuiltinTopicData *b = (DDS_CMDataReaderBuiltinTopicData *)buffer;
    DDS_unsigned_long i;
    DDS_ReturnCode_t DDS_CMDataReaderBuiltinTopicData__free (void *object);

    for (i = 0; i < *count; i++) {
        (void) DDS_CMDataReaderBuiltinTopicData__free (&b[i]);
    }
    return DDS_RETCODE_OK;
}

extern v_copyin_result __DDS_CMDataReaderBuiltinTopicData__copyIn(c_base base, const void *from, void *to);
extern void __DDS_CMDataReaderBuiltinTopicData__copyOut(const void *from, void *to);


DDS_CMDataReaderBuiltinTopicDataTypeSupport
DDS_CMDataReaderBuiltinTopicDataTypeSupport__alloc (
    void
    )
{
    DDS_CMDataReaderBuiltinTopicDataTypeSupport result;
    result = DDS_TypeSupportNew (
            "DDS::CMDataReaderBuiltinTopicData",
            "kernelModule::v_dataReaderCMInfo",
            "key.localId,key.systemId",
            DDS_CMDataReaderBuiltinTopicData_metaDescriptor,
            DDS_CMDataReaderBuiltinTopicData_metaDescriptorArrLength,
            DDS_CMDataReaderBuiltinTopicData_metaDescriptorLength,
            (DDS_copyIn)__DDS_CMDataReaderBuiltinTopicData__copyIn,
            (DDS_copyOut)__DDS_CMDataReaderBuiltinTopicData__copyOut,
            (DDS_unsigned_long)(sizeof(DDS_CMDataReaderBuiltinTopicData)),
            (DDS_allocBuffer)DDS_sequence_DDS_CMDataReaderBuiltinTopicData_allocbuf
        );
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataTypeSupport_register_type (
    DDS_CMDataReaderBuiltinTopicDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_TypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
DDS_CMDataReaderBuiltinTopicDataTypeSupport_get_type_name (
    DDS_CMDataReaderBuiltinTopicDataTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS_TypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_register_instance (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_register_instance_w_timestamp (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_unregister_instance (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_unregister_instance_w_timestamp (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_write (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_write_w_timestamp (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_dispose (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_dispose_w_timestamp (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_writedispose (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_writedispose_w_timestamp (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_get_key_value (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    DDS_CMDataReaderBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMDataReaderBuiltinTopicDataDataWriter_lookup_instance (
    DDS_CMDataReaderBuiltinTopicDataDataWriter _this,
    const DDS_CMDataReaderBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_Sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_read (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_take (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_read_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_take_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_read_next_sample (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_take_next_sample (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_read_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_take_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_read_next_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_take_next_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_read_next_instance_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_take_next_instance_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_return_loan (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_return_loan (
            (DDS_DataReader)_this,
            (_DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReader_get_key_value (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    DDS_CMDataReaderBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
DDS_CMDataReaderBuiltinTopicDataDataReader_lookup_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReader _this,
    const DDS_CMDataReaderBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_read (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_take (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_read_next_sample (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_take_next_sample (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_read_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_take_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_read_next_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_take_next_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_return_loan (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (_DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS_free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;
        
        DDS_free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_read_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_take_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_read_next_instance_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_take_next_instance_w_condition (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_sequence_DDS_CMDataReaderBuiltinTopicData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_get_key_value (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_CMDataReaderBuiltinTopicData *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
DDS_CMDataReaderBuiltinTopicDataDataReaderView_lookup_instance (
    DDS_CMDataReaderBuiltinTopicDataDataReaderView _this,
    DDS_CMDataReaderBuiltinTopicData *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

#if defined (__cplusplus)
}
#endif
