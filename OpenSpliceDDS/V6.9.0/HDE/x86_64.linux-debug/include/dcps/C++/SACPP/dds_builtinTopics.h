#ifndef _dds_builtinTopics_H_
#define _dds_builtinTopics_H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace DDS
{
    struct octSeq_uniq_{};
    typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct octSeq_uniq_ > octSeq;
    typedef DDS_DCPSSequence_var< octSeq > octSeq_var;
    typedef DDS_DCPSSequence_out< octSeq > octSeq_out;

    struct BuiltinTopicKey_t_uniq_{};
    typedef ::DDS::Long BuiltinTopicKey_t_slice;
    typedef ::DDS::Long BuiltinTopicKey_t[3];
    typedef DDS_DCPS_FArray_var< BuiltinTopicKey_t, BuiltinTopicKey_t_slice, struct BuiltinTopicKey_t_uniq_ > BuiltinTopicKey_t_var;
    typedef BuiltinTopicKey_t BuiltinTopicKey_t_out;
    typedef DDS_DCPS_Array_forany< BuiltinTopicKey_t, BuiltinTopicKey_t_slice, struct BuiltinTopicKey_t_uniq_ > BuiltinTopicKey_t_forany;
    extern BuiltinTopicKey_t_slice *BuiltinTopicKey_t_alloc();
    extern void BuiltinTopicKey_t_free(BuiltinTopicKey_t_slice *);
    extern void BuiltinTopicKey_t_copy(BuiltinTopicKey_t_slice *to, const BuiltinTopicKey_t_slice *from);
    extern BuiltinTopicKey_t_slice *BuiltinTopicKey_t_dup(const BuiltinTopicKey_t_slice *from);

    struct StringSeq_uniq_{};
    typedef DDS_DCPSUStrSeqT< struct StringSeq_uniq_ > StringSeq;
    typedef DDS_DCPSUStrSeq_var< StringSeq > StringSeq_var;
    typedef DDS_DCPSUStrSeq_out< StringSeq > StringSeq_out;

    typedef ::DDS::Short DataRepresentationId_t;


    const ::DDS::DataRepresentationId_t XCDR_REPRESENTATION = 0;

    const ::DDS::DataRepresentationId_t XML_REPRESENTATION = 1;

    const ::DDS::DataRepresentationId_t OSPL_REPRESENTATION = 1024;

    const ::DDS::DataRepresentationId_t GPB_REPRESENTATION = 1025;

    const ::DDS::DataRepresentationId_t INVALID_REPRESENTATION = 32767;

    struct  Duration_t
    {
        ::DDS::Long sec;
        ::DDS::ULong nanosec;
    };

    typedef DDS_DCPSStruct_var<Duration_t> Duration_t_var;
    typedef Duration_t& Duration_t_out;

    struct  UserDataQosPolicy
    {
        ::DDS::octSeq value;
    };

    typedef DDS_DCPSStruct_var<UserDataQosPolicy> UserDataQosPolicy_var;
    typedef DDS_DCPSStruct_out < UserDataQosPolicy> UserDataQosPolicy_out;

    struct  TopicDataQosPolicy
    {
        ::DDS::octSeq value;
    };

    typedef DDS_DCPSStruct_var<TopicDataQosPolicy> TopicDataQosPolicy_var;
    typedef DDS_DCPSStruct_out < TopicDataQosPolicy> TopicDataQosPolicy_out;

    struct  GroupDataQosPolicy
    {
        ::DDS::octSeq value;
    };

    typedef DDS_DCPSStruct_var<GroupDataQosPolicy> GroupDataQosPolicy_var;
    typedef DDS_DCPSStruct_out < GroupDataQosPolicy> GroupDataQosPolicy_out;

    struct  TransportPriorityQosPolicy
    {
        ::DDS::Long value;
    };

    typedef DDS_DCPSStruct_var<TransportPriorityQosPolicy> TransportPriorityQosPolicy_var;
    typedef TransportPriorityQosPolicy& TransportPriorityQosPolicy_out;

    struct  LifespanQosPolicy
    {
        ::DDS::Duration_t duration;
    };

    typedef DDS_DCPSStruct_var<LifespanQosPolicy> LifespanQosPolicy_var;
    typedef LifespanQosPolicy& LifespanQosPolicy_out;

    enum DurabilityQosPolicyKind {
        VOLATILE_DURABILITY_QOS,
        TRANSIENT_LOCAL_DURABILITY_QOS,
        TRANSIENT_DURABILITY_QOS,
        PERSISTENT_DURABILITY_QOS
    };

    struct  DurabilityQosPolicy
    {
        ::DDS::DurabilityQosPolicyKind kind;
    };

    typedef DDS_DCPSStruct_var<DurabilityQosPolicy> DurabilityQosPolicy_var;
    typedef DurabilityQosPolicy& DurabilityQosPolicy_out;

    enum PresentationQosPolicyAccessScopeKind {
        INSTANCE_PRESENTATION_QOS,
        TOPIC_PRESENTATION_QOS,
        GROUP_PRESENTATION_QOS
    };

    struct  PresentationQosPolicy
    {
        ::DDS::PresentationQosPolicyAccessScopeKind access_scope;
        ::DDS::Boolean coherent_access;
        ::DDS::Boolean ordered_access;
    };

    typedef DDS_DCPSStruct_var<PresentationQosPolicy> PresentationQosPolicy_var;
    typedef PresentationQosPolicy& PresentationQosPolicy_out;

    struct  DeadlineQosPolicy
    {
        ::DDS::Duration_t period;
    };

    typedef DDS_DCPSStruct_var<DeadlineQosPolicy> DeadlineQosPolicy_var;
    typedef DeadlineQosPolicy& DeadlineQosPolicy_out;

    struct  LatencyBudgetQosPolicy
    {
        ::DDS::Duration_t duration;
    };

    typedef DDS_DCPSStruct_var<LatencyBudgetQosPolicy> LatencyBudgetQosPolicy_var;
    typedef LatencyBudgetQosPolicy& LatencyBudgetQosPolicy_out;

    enum OwnershipQosPolicyKind {
        SHARED_OWNERSHIP_QOS,
        EXCLUSIVE_OWNERSHIP_QOS
    };

    struct  OwnershipQosPolicy
    {
        ::DDS::OwnershipQosPolicyKind kind;
    };

    typedef DDS_DCPSStruct_var<OwnershipQosPolicy> OwnershipQosPolicy_var;
    typedef OwnershipQosPolicy& OwnershipQosPolicy_out;

    struct  OwnershipStrengthQosPolicy
    {
        ::DDS::Long value;
    };

    typedef DDS_DCPSStruct_var<OwnershipStrengthQosPolicy> OwnershipStrengthQosPolicy_var;
    typedef OwnershipStrengthQosPolicy& OwnershipStrengthQosPolicy_out;

    enum LivelinessQosPolicyKind {
        AUTOMATIC_LIVELINESS_QOS,
        MANUAL_BY_PARTICIPANT_LIVELINESS_QOS,
        MANUAL_BY_TOPIC_LIVELINESS_QOS
    };

    struct  LivelinessQosPolicy
    {
        ::DDS::LivelinessQosPolicyKind kind;
        ::DDS::Duration_t lease_duration;
    };

    typedef DDS_DCPSStruct_var<LivelinessQosPolicy> LivelinessQosPolicy_var;
    typedef LivelinessQosPolicy& LivelinessQosPolicy_out;

    struct  TimeBasedFilterQosPolicy
    {
        ::DDS::Duration_t minimum_separation;
    };

    typedef DDS_DCPSStruct_var<TimeBasedFilterQosPolicy> TimeBasedFilterQosPolicy_var;
    typedef TimeBasedFilterQosPolicy& TimeBasedFilterQosPolicy_out;

    struct  PartitionQosPolicy
    {
        ::DDS::StringSeq name;
    };

    typedef DDS_DCPSStruct_var<PartitionQosPolicy> PartitionQosPolicy_var;
    typedef DDS_DCPSStruct_out < PartitionQosPolicy> PartitionQosPolicy_out;

    enum ReliabilityQosPolicyKind {
        BEST_EFFORT_RELIABILITY_QOS,
        RELIABLE_RELIABILITY_QOS
    };

    struct  ReliabilityQosPolicy
    {
        ::DDS::ReliabilityQosPolicyKind kind;
        ::DDS::Duration_t max_blocking_time;
        ::DDS::Boolean synchronous;
    };

    typedef DDS_DCPSStruct_var<ReliabilityQosPolicy> ReliabilityQosPolicy_var;
    typedef ReliabilityQosPolicy& ReliabilityQosPolicy_out;

    enum DestinationOrderQosPolicyKind {
        BY_RECEPTION_TIMESTAMP_DESTINATIONORDER_QOS,
        BY_SOURCE_TIMESTAMP_DESTINATIONORDER_QOS
    };

    struct  DestinationOrderQosPolicy
    {
        ::DDS::DestinationOrderQosPolicyKind kind;
    };

    typedef DDS_DCPSStruct_var<DestinationOrderQosPolicy> DestinationOrderQosPolicy_var;
    typedef DestinationOrderQosPolicy& DestinationOrderQosPolicy_out;

    enum HistoryQosPolicyKind {
        KEEP_LAST_HISTORY_QOS,
        KEEP_ALL_HISTORY_QOS
    };

    struct  HistoryQosPolicy
    {
        ::DDS::HistoryQosPolicyKind kind;
        ::DDS::Long depth;
    };

    typedef DDS_DCPSStruct_var<HistoryQosPolicy> HistoryQosPolicy_var;
    typedef HistoryQosPolicy& HistoryQosPolicy_out;

    struct  ResourceLimitsQosPolicy
    {
        ::DDS::Long max_samples;
        ::DDS::Long max_instances;
        ::DDS::Long max_samples_per_instance;
    };

    typedef DDS_DCPSStruct_var<ResourceLimitsQosPolicy> ResourceLimitsQosPolicy_var;
    typedef ResourceLimitsQosPolicy& ResourceLimitsQosPolicy_out;

    struct  DurabilityServiceQosPolicy
    {
        ::DDS::Duration_t service_cleanup_delay;
        ::DDS::HistoryQosPolicyKind history_kind;
        ::DDS::Long history_depth;
        ::DDS::Long max_samples;
        ::DDS::Long max_instances;
        ::DDS::Long max_samples_per_instance;
    };

    typedef DDS_DCPSStruct_var<DurabilityServiceQosPolicy> DurabilityServiceQosPolicy_var;
    typedef DurabilityServiceQosPolicy& DurabilityServiceQosPolicy_out;

    struct  ProductDataQosPolicy
    {
        ::DDS::String_mgr value;
    };

    typedef DDS_DCPSStruct_var<ProductDataQosPolicy> ProductDataQosPolicy_var;
    typedef DDS_DCPSStruct_out < ProductDataQosPolicy> ProductDataQosPolicy_out;

    struct  EntityFactoryQosPolicy
    {
        ::DDS::Boolean autoenable_created_entities;
    };

    typedef DDS_DCPSStruct_var<EntityFactoryQosPolicy> EntityFactoryQosPolicy_var;
    typedef EntityFactoryQosPolicy& EntityFactoryQosPolicy_out;

    struct  ShareQosPolicy
    {
        ::DDS::String_mgr name;
        ::DDS::Boolean enable;
    };

    typedef DDS_DCPSStruct_var<ShareQosPolicy> ShareQosPolicy_var;
    typedef DDS_DCPSStruct_out < ShareQosPolicy> ShareQosPolicy_out;

    struct  WriterDataLifecycleQosPolicy
    {
        ::DDS::Boolean autodispose_unregistered_instances;
        ::DDS::Duration_t autopurge_suspended_samples_delay;
        ::DDS::Duration_t autounregister_instance_delay;
    };

    typedef DDS_DCPSStruct_var<WriterDataLifecycleQosPolicy> WriterDataLifecycleQosPolicy_var;
    typedef WriterDataLifecycleQosPolicy& WriterDataLifecycleQosPolicy_out;

    enum InvalidSampleVisibilityQosPolicyKind {
        NO_INVALID_SAMPLES,
        MINIMUM_INVALID_SAMPLES,
        ALL_INVALID_SAMPLES
    };

    struct  InvalidSampleVisibilityQosPolicy
    {
        ::DDS::InvalidSampleVisibilityQosPolicyKind kind;
    };

    typedef DDS_DCPSStruct_var<InvalidSampleVisibilityQosPolicy> InvalidSampleVisibilityQosPolicy_var;
    typedef InvalidSampleVisibilityQosPolicy& InvalidSampleVisibilityQosPolicy_out;

    struct  SubscriptionKeyQosPolicy
    {
        ::DDS::Boolean use_key_list;
        ::DDS::StringSeq key_list;
    };

    typedef DDS_DCPSStruct_var<SubscriptionKeyQosPolicy> SubscriptionKeyQosPolicy_var;
    typedef DDS_DCPSStruct_out < SubscriptionKeyQosPolicy> SubscriptionKeyQosPolicy_out;

    struct  ReaderDataLifecycleQosPolicy
    {
        ::DDS::Duration_t autopurge_nowriter_samples_delay;
        ::DDS::Duration_t autopurge_disposed_samples_delay;
        ::DDS::Boolean autopurge_dispose_all;
        ::DDS::Boolean enable_invalid_samples;
        ::DDS::InvalidSampleVisibilityQosPolicy invalid_sample_visibility;
    };

    typedef DDS_DCPSStruct_var<ReaderDataLifecycleQosPolicy> ReaderDataLifecycleQosPolicy_var;
    typedef ReaderDataLifecycleQosPolicy& ReaderDataLifecycleQosPolicy_out;

    struct  UserKeyQosPolicy
    {
        ::DDS::Boolean enable;
        ::DDS::String_mgr expression;
    };

    typedef DDS_DCPSStruct_var<UserKeyQosPolicy> UserKeyQosPolicy_var;
    typedef DDS_DCPSStruct_out < UserKeyQosPolicy> UserKeyQosPolicy_out;

    struct  ReaderLifespanQosPolicy
    {
        ::DDS::Boolean use_lifespan;
        ::DDS::Duration_t duration;
    };

    typedef DDS_DCPSStruct_var<ReaderLifespanQosPolicy> ReaderLifespanQosPolicy_var;
    typedef ReaderLifespanQosPolicy& ReaderLifespanQosPolicy_out;

    struct  TypeHash
    {
        ::DDS::ULongLong msb;
        ::DDS::ULongLong lsb;
    };

    typedef DDS_DCPSStruct_var<TypeHash> TypeHash_var;
    typedef TypeHash& TypeHash_out;

    struct  ParticipantBuiltinTopicData
    {
        ::DDS::BuiltinTopicKey_t key;
        ::DDS::UserDataQosPolicy user_data;
    };

    typedef DDS_DCPSStruct_var<ParticipantBuiltinTopicData> ParticipantBuiltinTopicData_var;
    typedef DDS_DCPSStruct_out < ParticipantBuiltinTopicData> ParticipantBuiltinTopicData_out;

    struct  TopicBuiltinTopicData
    {
        ::DDS::BuiltinTopicKey_t key;
        ::DDS::String_mgr name;
        ::DDS::String_mgr type_name;
        ::DDS::DurabilityQosPolicy durability;
        ::DDS::DurabilityServiceQosPolicy durability_service;
        ::DDS::DeadlineQosPolicy deadline;
        ::DDS::LatencyBudgetQosPolicy latency_budget;
        ::DDS::LivelinessQosPolicy liveliness;
        ::DDS::ReliabilityQosPolicy reliability;
        ::DDS::TransportPriorityQosPolicy transport_priority;
        ::DDS::LifespanQosPolicy lifespan;
        ::DDS::DestinationOrderQosPolicy destination_order;
        ::DDS::HistoryQosPolicy history;
        ::DDS::ResourceLimitsQosPolicy resource_limits;
        ::DDS::OwnershipQosPolicy ownership;
        ::DDS::TopicDataQosPolicy topic_data;
    };

    typedef DDS_DCPSStruct_var<TopicBuiltinTopicData> TopicBuiltinTopicData_var;
    typedef DDS_DCPSStruct_out < TopicBuiltinTopicData> TopicBuiltinTopicData_out;

    struct  TypeBuiltinTopicData
    {
        ::DDS::String_mgr name;
        ::DDS::DataRepresentationId_t data_representation_id;
        ::DDS::TypeHash type_hash;
        ::DDS::octSeq meta_data;
        ::DDS::octSeq extentions;
    };

    typedef DDS_DCPSStruct_var<TypeBuiltinTopicData> TypeBuiltinTopicData_var;
    typedef DDS_DCPSStruct_out < TypeBuiltinTopicData> TypeBuiltinTopicData_out;

    struct  PublicationBuiltinTopicData
    {
        ::DDS::BuiltinTopicKey_t key;
        ::DDS::BuiltinTopicKey_t participant_key;
        ::DDS::String_mgr topic_name;
        ::DDS::String_mgr type_name;
        ::DDS::DurabilityQosPolicy durability;
        ::DDS::DeadlineQosPolicy deadline;
        ::DDS::LatencyBudgetQosPolicy latency_budget;
        ::DDS::LivelinessQosPolicy liveliness;
        ::DDS::ReliabilityQosPolicy reliability;
        ::DDS::LifespanQosPolicy lifespan;
        ::DDS::DestinationOrderQosPolicy destination_order;
        ::DDS::UserDataQosPolicy user_data;
        ::DDS::OwnershipQosPolicy ownership;
        ::DDS::OwnershipStrengthQosPolicy ownership_strength;
        ::DDS::PresentationQosPolicy presentation;
        ::DDS::PartitionQosPolicy partition;
        ::DDS::TopicDataQosPolicy topic_data;
        ::DDS::GroupDataQosPolicy group_data;
    };

    typedef DDS_DCPSStruct_var<PublicationBuiltinTopicData> PublicationBuiltinTopicData_var;
    typedef DDS_DCPSStruct_out < PublicationBuiltinTopicData> PublicationBuiltinTopicData_out;

    struct  SubscriptionBuiltinTopicData
    {
        ::DDS::BuiltinTopicKey_t key;
        ::DDS::BuiltinTopicKey_t participant_key;
        ::DDS::String_mgr topic_name;
        ::DDS::String_mgr type_name;
        ::DDS::DurabilityQosPolicy durability;
        ::DDS::DeadlineQosPolicy deadline;
        ::DDS::LatencyBudgetQosPolicy latency_budget;
        ::DDS::LivelinessQosPolicy liveliness;
        ::DDS::ReliabilityQosPolicy reliability;
        ::DDS::OwnershipQosPolicy ownership;
        ::DDS::DestinationOrderQosPolicy destination_order;
        ::DDS::UserDataQosPolicy user_data;
        ::DDS::TimeBasedFilterQosPolicy time_based_filter;
        ::DDS::PresentationQosPolicy presentation;
        ::DDS::PartitionQosPolicy partition;
        ::DDS::TopicDataQosPolicy topic_data;
        ::DDS::GroupDataQosPolicy group_data;
    };

    typedef DDS_DCPSStruct_var<SubscriptionBuiltinTopicData> SubscriptionBuiltinTopicData_var;
    typedef DDS_DCPSStruct_out < SubscriptionBuiltinTopicData> SubscriptionBuiltinTopicData_out;

    struct  CMParticipantBuiltinTopicData
    {
        ::DDS::BuiltinTopicKey_t key;
        ::DDS::ProductDataQosPolicy product;
    };

    typedef DDS_DCPSStruct_var<CMParticipantBuiltinTopicData> CMParticipantBuiltinTopicData_var;
    typedef DDS_DCPSStruct_out < CMParticipantBuiltinTopicData> CMParticipantBuiltinTopicData_out;

    struct  CMPublisherBuiltinTopicData
    {
        ::DDS::BuiltinTopicKey_t key;
        ::DDS::ProductDataQosPolicy product;
        ::DDS::BuiltinTopicKey_t participant_key;
        ::DDS::String_mgr name;
        ::DDS::EntityFactoryQosPolicy entity_factory;
        ::DDS::PartitionQosPolicy partition;
    };

    typedef DDS_DCPSStruct_var<CMPublisherBuiltinTopicData> CMPublisherBuiltinTopicData_var;
    typedef DDS_DCPSStruct_out < CMPublisherBuiltinTopicData> CMPublisherBuiltinTopicData_out;

    struct  CMSubscriberBuiltinTopicData
    {
        ::DDS::BuiltinTopicKey_t key;
        ::DDS::ProductDataQosPolicy product;
        ::DDS::BuiltinTopicKey_t participant_key;
        ::DDS::String_mgr name;
        ::DDS::EntityFactoryQosPolicy entity_factory;
        ::DDS::ShareQosPolicy share;
        ::DDS::PartitionQosPolicy partition;
    };

    typedef DDS_DCPSStruct_var<CMSubscriberBuiltinTopicData> CMSubscriberBuiltinTopicData_var;
    typedef DDS_DCPSStruct_out < CMSubscriberBuiltinTopicData> CMSubscriberBuiltinTopicData_out;

    struct  CMDataWriterBuiltinTopicData
    {
        ::DDS::BuiltinTopicKey_t key;
        ::DDS::ProductDataQosPolicy product;
        ::DDS::BuiltinTopicKey_t publisher_key;
        ::DDS::String_mgr name;
        ::DDS::HistoryQosPolicy history;
        ::DDS::ResourceLimitsQosPolicy resource_limits;
        ::DDS::WriterDataLifecycleQosPolicy writer_data_lifecycle;
    };

    typedef DDS_DCPSStruct_var<CMDataWriterBuiltinTopicData> CMDataWriterBuiltinTopicData_var;
    typedef DDS_DCPSStruct_out < CMDataWriterBuiltinTopicData> CMDataWriterBuiltinTopicData_out;

    struct  CMDataReaderBuiltinTopicData
    {
        ::DDS::BuiltinTopicKey_t key;
        ::DDS::ProductDataQosPolicy product;
        ::DDS::BuiltinTopicKey_t subscriber_key;
        ::DDS::String_mgr name;
        ::DDS::HistoryQosPolicy history;
        ::DDS::ResourceLimitsQosPolicy resource_limits;
        ::DDS::ReaderDataLifecycleQosPolicy reader_data_lifecycle;
        ::DDS::UserKeyQosPolicy subscription_keys;
        ::DDS::ReaderLifespanQosPolicy reader_lifespan;
        ::DDS::ShareQosPolicy share;
    };

    typedef DDS_DCPSStruct_var<CMDataReaderBuiltinTopicData> CMDataReaderBuiltinTopicData_var;
    typedef DDS_DCPSStruct_out < CMDataReaderBuiltinTopicData> CMDataReaderBuiltinTopicData_out;

}

#endif /* _dds_builtinTopics_H_ */
