#ifndef dds_predefTypesSACDCPS_H
#define dds_predefTypesSACDCPS_H

#include "dds_dcps.h"
#include "dds_predefTypesDcps.h"

#ifndef DDS_API
#define DDS_API
#endif


#define DDS_StringTypeSupport DDS_TypeSupport

 DDS_StringTypeSupport
DDS_StringTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_StringTypeSupport_register_type (
    DDS_StringTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_StringTypeSupport_get_type_name (
    DDS_StringTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_String_defined
#define _DDS_sequence_DDS_String_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_String *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_String;

 DDS_sequence_DDS_String *DDS_sequence_DDS_String__alloc (void);
 DDS_String *DDS_sequence_DDS_String_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_String_defined */

#define DDS_StringDataWriter DDS_DataWriter

#define DDS_StringDataWriter_enable DDS_Entity_enable

#define DDS_StringDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_StringDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_StringDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_StringDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_StringDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_StringDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_StringDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_StringDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_StringDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_StringDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_StringDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_StringDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_StringDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_StringDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_StringDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_StringDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_StringDataWriter_register_instance (
    DDS_StringDataWriter _this,
    const DDS_String *instance_data
    );

 DDS_InstanceHandle_t
DDS_StringDataWriter_register_instance_w_timestamp (
    DDS_StringDataWriter _this,
    const DDS_String *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_StringDataWriter_unregister_instance (
    DDS_StringDataWriter _this,
    const DDS_String *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_StringDataWriter_unregister_instance_w_timestamp (
    DDS_StringDataWriter _this,
    const DDS_String *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_StringDataWriter_write (
    DDS_StringDataWriter _this,
    const DDS_String *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_StringDataWriter_write_w_timestamp (
    DDS_StringDataWriter _this,
    const DDS_String *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_StringDataWriter_dispose (
    DDS_StringDataWriter _this,
    const DDS_String *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_StringDataWriter_dispose_w_timestamp (
    DDS_StringDataWriter _this,
    const DDS_String *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_StringDataWriter_writedispose (
    DDS_StringDataWriter _this,
    const DDS_String *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_StringDataWriter_writedispose_w_timestamp (
    DDS_StringDataWriter _this,
    const DDS_String *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_StringDataWriter_get_key_value (
    DDS_StringDataWriter _this,
    DDS_String *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_StringDataWriter_lookup_instance (
    DDS_StringDataWriter _this,
    const DDS_String *key_holder
    );

#define DDS_StringDataReader DDS_DataReader

#define DDS_StringDataReader_enable DDS_Entity_enable

#define DDS_StringDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_StringDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_StringDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_StringDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_StringDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_StringDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_StringDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_StringDataReader_get_listener DDS_DataReader_get_listener

#define DDS_StringDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_StringDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_StringDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_StringDataReader_get_qos DDS_DataReader_get_qos

#define DDS_StringDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_StringDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_StringDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_StringDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_StringDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_StringDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_StringDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_StringDataReader_set_listener DDS_DataReader_set_listener

#define DDS_StringDataReader_set_qos DDS_DataReader_set_qos

#define DDS_StringDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_StringDataReader_read (
    DDS_StringDataReader _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_StringDataReader_take (
    DDS_StringDataReader _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_StringDataReader_read_w_condition (
    DDS_StringDataReader _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_StringDataReader_take_w_condition (
    DDS_StringDataReader _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_StringDataReader_read_next_sample (
    DDS_StringDataReader _this,
    DDS_String *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_StringDataReader_take_next_sample (
    DDS_StringDataReader _this,
    DDS_String *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_StringDataReader_read_instance (
    DDS_StringDataReader _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_StringDataReader_take_instance (
    DDS_StringDataReader _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_StringDataReader_read_next_instance (
    DDS_StringDataReader _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_StringDataReader_take_next_instance (
    DDS_StringDataReader _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_StringDataReader_read_next_instance_w_condition (
    DDS_StringDataReader _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_StringDataReader_take_next_instance_w_condition (
    DDS_StringDataReader _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_StringDataReader_return_loan (
    DDS_StringDataReader _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_StringDataReader_get_key_value (
    DDS_StringDataReader _this,
    DDS_String *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_StringDataReader_lookup_instance (
    DDS_StringDataReader _this,
    const DDS_String *key_holder
    );

#define DDS_StringDataReaderView DDS_DataReaderView

#define DDS_StringDataReaderView_enable DDS_Entity_enable

#define DDS_StringDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_StringDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_StringDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_StringDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_StringDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_StringDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_StringDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_StringDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_StringDataReaderView_read (
    DDS_StringDataReaderView _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_take (
    DDS_StringDataReaderView _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_read_next_sample (
    DDS_StringDataReaderView _this,
    DDS_String *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_take_next_sample (
    DDS_StringDataReaderView _this,
    DDS_String *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_read_instance (
    DDS_StringDataReaderView _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_take_instance (
    DDS_StringDataReaderView _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_read_next_instance (
    DDS_StringDataReaderView _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_take_next_instance (
    DDS_StringDataReaderView _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_return_loan (
    DDS_StringDataReaderView _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_read_w_condition (
    DDS_StringDataReaderView _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_take_w_condition (
    DDS_StringDataReaderView _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_read_next_instance_w_condition (
    DDS_StringDataReaderView _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_take_next_instance_w_condition (
    DDS_StringDataReaderView _this,
    DDS_sequence_DDS_String *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_StringDataReaderView_get_key_value (
    DDS_StringDataReaderView _this,
    DDS_String *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_StringDataReaderView_lookup_instance (
    DDS_StringDataReaderView _this,
    DDS_String *key_holder
    );


#define DDS_KeyedStringTypeSupport DDS_TypeSupport

 DDS_KeyedStringTypeSupport
DDS_KeyedStringTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_KeyedStringTypeSupport_register_type (
    DDS_KeyedStringTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_KeyedStringTypeSupport_get_type_name (
    DDS_KeyedStringTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_KeyedString_defined
#define _DDS_sequence_DDS_KeyedString_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_KeyedString *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_KeyedString;

 DDS_sequence_DDS_KeyedString *DDS_sequence_DDS_KeyedString__alloc (void);
 DDS_KeyedString *DDS_sequence_DDS_KeyedString_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_KeyedString_defined */

#define DDS_KeyedStringDataWriter DDS_DataWriter

#define DDS_KeyedStringDataWriter_enable DDS_Entity_enable

#define DDS_KeyedStringDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_KeyedStringDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_KeyedStringDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_KeyedStringDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_KeyedStringDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_KeyedStringDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_KeyedStringDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_KeyedStringDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_KeyedStringDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_KeyedStringDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_KeyedStringDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_KeyedStringDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_KeyedStringDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_KeyedStringDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_KeyedStringDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_KeyedStringDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_KeyedStringDataWriter_register_instance (
    DDS_KeyedStringDataWriter _this,
    const DDS_KeyedString *instance_data
    );

 DDS_InstanceHandle_t
DDS_KeyedStringDataWriter_register_instance_w_timestamp (
    DDS_KeyedStringDataWriter _this,
    const DDS_KeyedString *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataWriter_unregister_instance (
    DDS_KeyedStringDataWriter _this,
    const DDS_KeyedString *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataWriter_unregister_instance_w_timestamp (
    DDS_KeyedStringDataWriter _this,
    const DDS_KeyedString *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataWriter_write (
    DDS_KeyedStringDataWriter _this,
    const DDS_KeyedString *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataWriter_write_w_timestamp (
    DDS_KeyedStringDataWriter _this,
    const DDS_KeyedString *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataWriter_dispose (
    DDS_KeyedStringDataWriter _this,
    const DDS_KeyedString *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataWriter_dispose_w_timestamp (
    DDS_KeyedStringDataWriter _this,
    const DDS_KeyedString *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataWriter_writedispose (
    DDS_KeyedStringDataWriter _this,
    const DDS_KeyedString *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataWriter_writedispose_w_timestamp (
    DDS_KeyedStringDataWriter _this,
    const DDS_KeyedString *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataWriter_get_key_value (
    DDS_KeyedStringDataWriter _this,
    DDS_KeyedString *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_KeyedStringDataWriter_lookup_instance (
    DDS_KeyedStringDataWriter _this,
    const DDS_KeyedString *key_holder
    );

#define DDS_KeyedStringDataReader DDS_DataReader

#define DDS_KeyedStringDataReader_enable DDS_Entity_enable

#define DDS_KeyedStringDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_KeyedStringDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_KeyedStringDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_KeyedStringDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_KeyedStringDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_KeyedStringDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_KeyedStringDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_KeyedStringDataReader_get_listener DDS_DataReader_get_listener

#define DDS_KeyedStringDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_KeyedStringDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_KeyedStringDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_KeyedStringDataReader_get_qos DDS_DataReader_get_qos

#define DDS_KeyedStringDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_KeyedStringDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_KeyedStringDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_KeyedStringDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_KeyedStringDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_KeyedStringDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_KeyedStringDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_KeyedStringDataReader_set_listener DDS_DataReader_set_listener

#define DDS_KeyedStringDataReader_set_qos DDS_DataReader_set_qos

#define DDS_KeyedStringDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_read (
    DDS_KeyedStringDataReader _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_take (
    DDS_KeyedStringDataReader _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_read_w_condition (
    DDS_KeyedStringDataReader _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_take_w_condition (
    DDS_KeyedStringDataReader _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_read_next_sample (
    DDS_KeyedStringDataReader _this,
    DDS_KeyedString *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_take_next_sample (
    DDS_KeyedStringDataReader _this,
    DDS_KeyedString *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_read_instance (
    DDS_KeyedStringDataReader _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_take_instance (
    DDS_KeyedStringDataReader _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_read_next_instance (
    DDS_KeyedStringDataReader _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_take_next_instance (
    DDS_KeyedStringDataReader _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_read_next_instance_w_condition (
    DDS_KeyedStringDataReader _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_take_next_instance_w_condition (
    DDS_KeyedStringDataReader _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_return_loan (
    DDS_KeyedStringDataReader _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReader_get_key_value (
    DDS_KeyedStringDataReader _this,
    DDS_KeyedString *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_KeyedStringDataReader_lookup_instance (
    DDS_KeyedStringDataReader _this,
    const DDS_KeyedString *key_holder
    );

#define DDS_KeyedStringDataReaderView DDS_DataReaderView

#define DDS_KeyedStringDataReaderView_enable DDS_Entity_enable

#define DDS_KeyedStringDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_KeyedStringDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_KeyedStringDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_KeyedStringDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_KeyedStringDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_KeyedStringDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_KeyedStringDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_KeyedStringDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_read (
    DDS_KeyedStringDataReaderView _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_take (
    DDS_KeyedStringDataReaderView _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_read_next_sample (
    DDS_KeyedStringDataReaderView _this,
    DDS_KeyedString *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_take_next_sample (
    DDS_KeyedStringDataReaderView _this,
    DDS_KeyedString *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_read_instance (
    DDS_KeyedStringDataReaderView _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_take_instance (
    DDS_KeyedStringDataReaderView _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_read_next_instance (
    DDS_KeyedStringDataReaderView _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_take_next_instance (
    DDS_KeyedStringDataReaderView _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_return_loan (
    DDS_KeyedStringDataReaderView _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_read_w_condition (
    DDS_KeyedStringDataReaderView _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_take_w_condition (
    DDS_KeyedStringDataReaderView _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_read_next_instance_w_condition (
    DDS_KeyedStringDataReaderView _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_take_next_instance_w_condition (
    DDS_KeyedStringDataReaderView _this,
    DDS_sequence_DDS_KeyedString *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedStringDataReaderView_get_key_value (
    DDS_KeyedStringDataReaderView _this,
    DDS_KeyedString *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_KeyedStringDataReaderView_lookup_instance (
    DDS_KeyedStringDataReaderView _this,
    DDS_KeyedString *key_holder
    );


#define DDS_BytesTypeSupport DDS_TypeSupport

 DDS_BytesTypeSupport
DDS_BytesTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_BytesTypeSupport_register_type (
    DDS_BytesTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_BytesTypeSupport_get_type_name (
    DDS_BytesTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_Bytes_defined
#define _DDS_sequence_DDS_Bytes_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_Bytes *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_Bytes;

 DDS_sequence_DDS_Bytes *DDS_sequence_DDS_Bytes__alloc (void);
 DDS_Bytes *DDS_sequence_DDS_Bytes_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_Bytes_defined */

#define DDS_BytesDataWriter DDS_DataWriter

#define DDS_BytesDataWriter_enable DDS_Entity_enable

#define DDS_BytesDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_BytesDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_BytesDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_BytesDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_BytesDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_BytesDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_BytesDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_BytesDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_BytesDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_BytesDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_BytesDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_BytesDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_BytesDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_BytesDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_BytesDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_BytesDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_BytesDataWriter_register_instance (
    DDS_BytesDataWriter _this,
    const DDS_Bytes *instance_data
    );

 DDS_InstanceHandle_t
DDS_BytesDataWriter_register_instance_w_timestamp (
    DDS_BytesDataWriter _this,
    const DDS_Bytes *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_BytesDataWriter_unregister_instance (
    DDS_BytesDataWriter _this,
    const DDS_Bytes *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_BytesDataWriter_unregister_instance_w_timestamp (
    DDS_BytesDataWriter _this,
    const DDS_Bytes *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_BytesDataWriter_write (
    DDS_BytesDataWriter _this,
    const DDS_Bytes *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_BytesDataWriter_write_w_timestamp (
    DDS_BytesDataWriter _this,
    const DDS_Bytes *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_BytesDataWriter_dispose (
    DDS_BytesDataWriter _this,
    const DDS_Bytes *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_BytesDataWriter_dispose_w_timestamp (
    DDS_BytesDataWriter _this,
    const DDS_Bytes *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_BytesDataWriter_writedispose (
    DDS_BytesDataWriter _this,
    const DDS_Bytes *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_BytesDataWriter_writedispose_w_timestamp (
    DDS_BytesDataWriter _this,
    const DDS_Bytes *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_BytesDataWriter_get_key_value (
    DDS_BytesDataWriter _this,
    DDS_Bytes *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_BytesDataWriter_lookup_instance (
    DDS_BytesDataWriter _this,
    const DDS_Bytes *key_holder
    );

#define DDS_BytesDataReader DDS_DataReader

#define DDS_BytesDataReader_enable DDS_Entity_enable

#define DDS_BytesDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_BytesDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_BytesDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_BytesDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_BytesDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_BytesDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_BytesDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_BytesDataReader_get_listener DDS_DataReader_get_listener

#define DDS_BytesDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_BytesDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_BytesDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_BytesDataReader_get_qos DDS_DataReader_get_qos

#define DDS_BytesDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_BytesDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_BytesDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_BytesDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_BytesDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_BytesDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_BytesDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_BytesDataReader_set_listener DDS_DataReader_set_listener

#define DDS_BytesDataReader_set_qos DDS_DataReader_set_qos

#define DDS_BytesDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_BytesDataReader_read (
    DDS_BytesDataReader _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_take (
    DDS_BytesDataReader _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_read_w_condition (
    DDS_BytesDataReader _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_take_w_condition (
    DDS_BytesDataReader _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_read_next_sample (
    DDS_BytesDataReader _this,
    DDS_Bytes *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_take_next_sample (
    DDS_BytesDataReader _this,
    DDS_Bytes *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_read_instance (
    DDS_BytesDataReader _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_take_instance (
    DDS_BytesDataReader _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_read_next_instance (
    DDS_BytesDataReader _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_take_next_instance (
    DDS_BytesDataReader _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_read_next_instance_w_condition (
    DDS_BytesDataReader _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_take_next_instance_w_condition (
    DDS_BytesDataReader _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_return_loan (
    DDS_BytesDataReader _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_BytesDataReader_get_key_value (
    DDS_BytesDataReader _this,
    DDS_Bytes *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_BytesDataReader_lookup_instance (
    DDS_BytesDataReader _this,
    const DDS_Bytes *key_holder
    );

#define DDS_BytesDataReaderView DDS_DataReaderView

#define DDS_BytesDataReaderView_enable DDS_Entity_enable

#define DDS_BytesDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_BytesDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_BytesDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_BytesDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_BytesDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_BytesDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_BytesDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_BytesDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_BytesDataReaderView_read (
    DDS_BytesDataReaderView _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_take (
    DDS_BytesDataReaderView _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_read_next_sample (
    DDS_BytesDataReaderView _this,
    DDS_Bytes *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_take_next_sample (
    DDS_BytesDataReaderView _this,
    DDS_Bytes *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_read_instance (
    DDS_BytesDataReaderView _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_take_instance (
    DDS_BytesDataReaderView _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_read_next_instance (
    DDS_BytesDataReaderView _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_take_next_instance (
    DDS_BytesDataReaderView _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_return_loan (
    DDS_BytesDataReaderView _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_read_w_condition (
    DDS_BytesDataReaderView _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_take_w_condition (
    DDS_BytesDataReaderView _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_read_next_instance_w_condition (
    DDS_BytesDataReaderView _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_take_next_instance_w_condition (
    DDS_BytesDataReaderView _this,
    DDS_sequence_DDS_Bytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_BytesDataReaderView_get_key_value (
    DDS_BytesDataReaderView _this,
    DDS_Bytes *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_BytesDataReaderView_lookup_instance (
    DDS_BytesDataReaderView _this,
    DDS_Bytes *key_holder
    );


#define DDS_KeyedBytesTypeSupport DDS_TypeSupport

 DDS_KeyedBytesTypeSupport
DDS_KeyedBytesTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
DDS_KeyedBytesTypeSupport_register_type (
    DDS_KeyedBytesTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
DDS_KeyedBytesTypeSupport_get_type_name (
    DDS_KeyedBytesTypeSupport _this
    );

#ifndef _DDS_sequence_DDS_KeyedBytes_defined
#define _DDS_sequence_DDS_KeyedBytes_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_KeyedBytes *_buffer;
    DDS_boolean _release;
} DDS_sequence_DDS_KeyedBytes;

 DDS_sequence_DDS_KeyedBytes *DDS_sequence_DDS_KeyedBytes__alloc (void);
 DDS_KeyedBytes *DDS_sequence_DDS_KeyedBytes_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_DDS_KeyedBytes_defined */

#define DDS_KeyedBytesDataWriter DDS_DataWriter

#define DDS_KeyedBytesDataWriter_enable DDS_Entity_enable

#define DDS_KeyedBytesDataWriter_get_status_changes DDS_Entity_get_status_changes

#define DDS_KeyedBytesDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_KeyedBytesDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_KeyedBytesDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define DDS_KeyedBytesDataWriter_get_listener DDS_DataWriter_get_listener

#define DDS_KeyedBytesDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define DDS_KeyedBytesDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define DDS_KeyedBytesDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define DDS_KeyedBytesDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define DDS_KeyedBytesDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define DDS_KeyedBytesDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define DDS_KeyedBytesDataWriter_get_publisher DDS_DataWriter_get_publisher

#define DDS_KeyedBytesDataWriter_get_qos DDS_DataWriter_get_qos

#define DDS_KeyedBytesDataWriter_get_topic DDS_DataWriter_get_topic

#define DDS_KeyedBytesDataWriter_set_listener DDS_DataWriter_set_listener

#define DDS_KeyedBytesDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
DDS_KeyedBytesDataWriter_register_instance (
    DDS_KeyedBytesDataWriter _this,
    const DDS_KeyedBytes *instance_data
    );

 DDS_InstanceHandle_t
DDS_KeyedBytesDataWriter_register_instance_w_timestamp (
    DDS_KeyedBytesDataWriter _this,
    const DDS_KeyedBytes *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataWriter_unregister_instance (
    DDS_KeyedBytesDataWriter _this,
    const DDS_KeyedBytes *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataWriter_unregister_instance_w_timestamp (
    DDS_KeyedBytesDataWriter _this,
    const DDS_KeyedBytes *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataWriter_write (
    DDS_KeyedBytesDataWriter _this,
    const DDS_KeyedBytes *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataWriter_write_w_timestamp (
    DDS_KeyedBytesDataWriter _this,
    const DDS_KeyedBytes *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataWriter_dispose (
    DDS_KeyedBytesDataWriter _this,
    const DDS_KeyedBytes *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataWriter_dispose_w_timestamp (
    DDS_KeyedBytesDataWriter _this,
    const DDS_KeyedBytes *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataWriter_writedispose (
    DDS_KeyedBytesDataWriter _this,
    const DDS_KeyedBytes *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataWriter_writedispose_w_timestamp (
    DDS_KeyedBytesDataWriter _this,
    const DDS_KeyedBytes *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataWriter_get_key_value (
    DDS_KeyedBytesDataWriter _this,
    DDS_KeyedBytes *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_KeyedBytesDataWriter_lookup_instance (
    DDS_KeyedBytesDataWriter _this,
    const DDS_KeyedBytes *key_holder
    );

#define DDS_KeyedBytesDataReader DDS_DataReader

#define DDS_KeyedBytesDataReader_enable DDS_Entity_enable

#define DDS_KeyedBytesDataReader_get_status_changes DDS_Entity_get_status_changes

#define DDS_KeyedBytesDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define DDS_KeyedBytesDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_KeyedBytesDataReader_create_querycondition DDS_DataReader_create_querycondition

#define DDS_KeyedBytesDataReader_create_readcondition DDS_DataReader_create_readcondition

#define DDS_KeyedBytesDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define DDS_KeyedBytesDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define DDS_KeyedBytesDataReader_get_listener DDS_DataReader_get_listener

#define DDS_KeyedBytesDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define DDS_KeyedBytesDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define DDS_KeyedBytesDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define DDS_KeyedBytesDataReader_get_qos DDS_DataReader_get_qos

#define DDS_KeyedBytesDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define DDS_KeyedBytesDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define DDS_KeyedBytesDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define DDS_KeyedBytesDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define DDS_KeyedBytesDataReader_get_subscriber DDS_DataReader_get_subscriber

#define DDS_KeyedBytesDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define DDS_KeyedBytesDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define DDS_KeyedBytesDataReader_set_listener DDS_DataReader_set_listener

#define DDS_KeyedBytesDataReader_set_qos DDS_DataReader_set_qos

#define DDS_KeyedBytesDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_read (
    DDS_KeyedBytesDataReader _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_take (
    DDS_KeyedBytesDataReader _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_read_w_condition (
    DDS_KeyedBytesDataReader _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_take_w_condition (
    DDS_KeyedBytesDataReader _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_read_next_sample (
    DDS_KeyedBytesDataReader _this,
    DDS_KeyedBytes *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_take_next_sample (
    DDS_KeyedBytesDataReader _this,
    DDS_KeyedBytes *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_read_instance (
    DDS_KeyedBytesDataReader _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_take_instance (
    DDS_KeyedBytesDataReader _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_read_next_instance (
    DDS_KeyedBytesDataReader _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_take_next_instance (
    DDS_KeyedBytesDataReader _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_read_next_instance_w_condition (
    DDS_KeyedBytesDataReader _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_take_next_instance_w_condition (
    DDS_KeyedBytesDataReader _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_return_loan (
    DDS_KeyedBytesDataReader _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReader_get_key_value (
    DDS_KeyedBytesDataReader _this,
    DDS_KeyedBytes *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_KeyedBytesDataReader_lookup_instance (
    DDS_KeyedBytesDataReader _this,
    const DDS_KeyedBytes *key_holder
    );

#define DDS_KeyedBytesDataReaderView DDS_DataReaderView

#define DDS_KeyedBytesDataReaderView_enable DDS_Entity_enable

#define DDS_KeyedBytesDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define DDS_KeyedBytesDataReaderView_get_qos DDS_DataReaderView_get_qos

#define DDS_KeyedBytesDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define DDS_KeyedBytesDataReaderView_set_qos DDS_DataReaderView_set_qos

#define DDS_KeyedBytesDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define DDS_KeyedBytesDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define DDS_KeyedBytesDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define DDS_KeyedBytesDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_read (
    DDS_KeyedBytesDataReaderView _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_take (
    DDS_KeyedBytesDataReaderView _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_read_next_sample (
    DDS_KeyedBytesDataReaderView _this,
    DDS_KeyedBytes *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_take_next_sample (
    DDS_KeyedBytesDataReaderView _this,
    DDS_KeyedBytes *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_read_instance (
    DDS_KeyedBytesDataReaderView _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_take_instance (
    DDS_KeyedBytesDataReaderView _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_read_next_instance (
    DDS_KeyedBytesDataReaderView _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_take_next_instance (
    DDS_KeyedBytesDataReaderView _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_return_loan (
    DDS_KeyedBytesDataReaderView _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_read_w_condition (
    DDS_KeyedBytesDataReaderView _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_take_w_condition (
    DDS_KeyedBytesDataReaderView _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_read_next_instance_w_condition (
    DDS_KeyedBytesDataReaderView _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_take_next_instance_w_condition (
    DDS_KeyedBytesDataReaderView _this,
    DDS_sequence_DDS_KeyedBytes *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
DDS_KeyedBytesDataReaderView_get_key_value (
    DDS_KeyedBytesDataReaderView _this,
    DDS_KeyedBytes *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
DDS_KeyedBytesDataReaderView_lookup_instance (
    DDS_KeyedBytesDataReaderView _this,
    DDS_KeyedBytes *key_holder
    );

#endif
