#ifndef dds_IoTDataSACDCPS_H
#define dds_IoTDataSACDCPS_H

#include "dds_dcps.h"
#include "dds_IoTDataDcps.h"

#ifndef DDS_API
#define DDS_API
#endif


#define DDS_IoT_IoTDataTypeSupport DDS_TypeSupport

 DDS_IoT_IoTDataTypeSupport
DDS_IoT_IoTDataTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataTypeSupport_register_type (
    DDS_IoT_IoTDataTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_IoT_IoTDataTypeSupport_get_type_name (
    DDS_IoT_IoTDataTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_IoT_IoTData_defined
#define _DDS_sequence_DDS_IoT_IoTData_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_IoT_IoTData *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_IoT_IoTData;

 DDS_sequence_DDS_IoT_IoTData *DDS_sequence_DDS_IoT_IoTData__alloc (void);
 DDS_IoT_IoTData *DDS_sequence_DDS_IoT_IoTData_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_IoT_IoTData_defined */

#define DDS_IoT_IoTDataDataWriter DDS_DataWriter

#define DDS_IoT_IoTDataDataWriter_enable DDS_Entity_enable

#define DDS_IoT_IoTDataDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_IoT_IoTDataDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_IoT_IoTDataDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_IoT_IoTDataDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_IoT_IoTDataDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_IoT_IoTDataDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_IoT_IoTDataDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_IoT_IoTDataDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_IoT_IoTDataDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_IoT_IoTDataDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_IoT_IoTDataDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_IoT_IoTDataDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_IoT_IoTDataDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_IoT_IoTDataDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_IoT_IoTDataDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_IoT_IoTDataDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_IoT_IoTDataDataWriter_register_instance (
    DDS_IoT_IoTDataDataWriter _this,
    const DDS_IoT_IoTData *instance_data
    );

 DDS_InstanceHandle_t
DDS_IoT_IoTDataDataWriter_register_instance_w_timestamp (
    DDS_IoT_IoTDataDataWriter _this,
    const DDS_IoT_IoTData *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataWriter_unregister_instance (
    DDS_IoT_IoTDataDataWriter _this,
    const DDS_IoT_IoTData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataWriter_unregister_instance_w_timestamp (
    DDS_IoT_IoTDataDataWriter _this,
    const DDS_IoT_IoTData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataWriter_write (
    DDS_IoT_IoTDataDataWriter _this,
    const DDS_IoT_IoTData *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataWriter_write_w_timestamp (
    DDS_IoT_IoTDataDataWriter _this,
    const DDS_IoT_IoTData *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataWriter_dispose (
    DDS_IoT_IoTDataDataWriter _this,
    const DDS_IoT_IoTData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataWriter_dispose_w_timestamp (
    DDS_IoT_IoTDataDataWriter _this,
    const DDS_IoT_IoTData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataWriter_writedispose (
    DDS_IoT_IoTDataDataWriter _this,
    const DDS_IoT_IoTData *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataWriter_writedispose_w_timestamp (
    DDS_IoT_IoTDataDataWriter _this,
    const DDS_IoT_IoTData *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataWriter_get_key_value (
    DDS_IoT_IoTDataDataWriter _this,
    DDS_IoT_IoTData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_IoT_IoTDataDataWriter_lookup_instance (
    DDS_IoT_IoTDataDataWriter _this,
    const DDS_IoT_IoTData *key_holder
    );

#define DDS_IoT_IoTDataDataReader DDS_DataReader

#define DDS_IoT_IoTDataDataReader_enable DDS_Entity_enable

#define DDS_IoT_IoTDataDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_IoT_IoTDataDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_IoT_IoTDataDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_IoT_IoTDataDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_IoT_IoTDataDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_IoT_IoTDataDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_IoT_IoTDataDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_IoT_IoTDataDataReader_get_listener DDS_DataReader_get_listener

#define DDS_IoT_IoTDataDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_IoT_IoTDataDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_IoT_IoTDataDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_IoT_IoTDataDataReader_get_qos DDS_DataReader_get_qos

#define DDS_IoT_IoTDataDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_IoT_IoTDataDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_IoT_IoTDataDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_IoT_IoTDataDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_IoT_IoTDataDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_IoT_IoTDataDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_IoT_IoTDataDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_IoT_IoTDataDataReader_set_listener DDS_DataReader_set_listener

#define DDS_IoT_IoTDataDataReader_set_qos DDS_DataReader_set_qos

#define DDS_IoT_IoTDataDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_read (
    DDS_IoT_IoTDataDataReader _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_take (
    DDS_IoT_IoTDataDataReader _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_read_w_condition (
    DDS_IoT_IoTDataDataReader _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_take_w_condition (
    DDS_IoT_IoTDataDataReader _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_read_next_sample (
    DDS_IoT_IoTDataDataReader _this,
    DDS_IoT_IoTData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_take_next_sample (
    DDS_IoT_IoTDataDataReader _this,
    DDS_IoT_IoTData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_read_instance (
    DDS_IoT_IoTDataDataReader _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_take_instance (
    DDS_IoT_IoTDataDataReader _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_read_next_instance (
    DDS_IoT_IoTDataDataReader _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_take_next_instance (
    DDS_IoT_IoTDataDataReader _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_read_next_instance_w_condition (
    DDS_IoT_IoTDataDataReader _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_take_next_instance_w_condition (
    DDS_IoT_IoTDataDataReader _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_return_loan (
    DDS_IoT_IoTDataDataReader _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReader_get_key_value (
    DDS_IoT_IoTDataDataReader _this,
    DDS_IoT_IoTData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_IoT_IoTDataDataReader_lookup_instance (
    DDS_IoT_IoTDataDataReader _this,
    const DDS_IoT_IoTData *key_holder
    );

#define DDS_IoT_IoTDataDataReaderView DDS_DataReaderView

#define DDS_IoT_IoTDataDataReaderView_enable DDS_Entity_enable

#define DDS_IoT_IoTDataDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_IoT_IoTDataDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_IoT_IoTDataDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_IoT_IoTDataDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_IoT_IoTDataDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_IoT_IoTDataDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_IoT_IoTDataDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_IoT_IoTDataDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_read (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_take (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_read_next_sample (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_IoT_IoTData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_take_next_sample (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_IoT_IoTData *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_read_instance (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_take_instance (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_read_next_instance (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_take_next_instance (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_return_loan (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_read_w_condition (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_take_w_condition (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_read_next_instance_w_condition (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_take_next_instance_w_condition (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_sequence_DDS_IoT_IoTData *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_IoT_IoTDataDataReaderView_get_key_value (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_IoT_IoTData *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_IoT_IoTDataDataReaderView_lookup_instance (
    DDS_IoT_IoTDataDataReaderView _this,
    DDS_IoT_IoTData *key_holder
    );

#endif
