#ifndef _dds_dcps_builtintopics_H_
#define _dds_dcps_builtintopics_H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "dds_builtinTopics.h"


namespace DDS
{
    struct  Time_t
    {
        ::DDS::Long sec;
        ::DDS::ULong nanosec;
    };

    typedef DDS_DCPSStruct_var<Time_t> Time_t_var;
    typedef Time_t& Time_t_out;

    enum SchedulingClassQosPolicyKind {
        SCHEDULE_DEFAULT,
        SCHEDULE_TIMESHARING,
        SCHEDULE_REALTIME
    };

    struct  SchedulingClassQosPolicy
    {
        ::DDS::SchedulingClassQosPolicyKind kind;
    };

    typedef DDS_DCPSStruct_var<SchedulingClassQosPolicy> SchedulingClassQosPolicy_var;
    typedef SchedulingClassQosPolicy& SchedulingClassQosPolicy_out;

    enum SchedulingPriorityQosPolicyKind {
        PRIORITY_RELATIVE,
        PRIORITY_ABSOLUTE
    };

    struct  SchedulingPriorityQosPolicy
    {
        ::DDS::SchedulingPriorityQosPolicyKind kind;
    };

    typedef DDS_DCPSStruct_var<SchedulingPriorityQosPolicy> SchedulingPriorityQosPolicy_var;
    typedef SchedulingPriorityQosPolicy& SchedulingPriorityQosPolicy_out;

    struct  SchedulingQosPolicy
    {
        ::DDS::SchedulingClassQosPolicy scheduling_class;
        ::DDS::SchedulingPriorityQosPolicy scheduling_priority_kind;
        ::DDS::Long scheduling_priority;
    };

    typedef DDS_DCPSStruct_var<SchedulingQosPolicy> SchedulingQosPolicy_var;
    typedef SchedulingQosPolicy& SchedulingQosPolicy_out;

    struct  ViewKeyQosPolicy
    {
        ::DDS::Boolean use_key_list;
        ::DDS::StringSeq key_list;
    };

    typedef DDS_DCPSStruct_var<ViewKeyQosPolicy> ViewKeyQosPolicy_var;
    typedef DDS_DCPSStruct_out < ViewKeyQosPolicy> ViewKeyQosPolicy_out;

    struct  DataReaderViewQos
    {
        ::DDS::ViewKeyQosPolicy view_keys;
    };

    typedef DDS_DCPSStruct_var<DataReaderViewQos> DataReaderViewQos_var;
    typedef DDS_DCPSStruct_out < DataReaderViewQos> DataReaderViewQos_out;

    struct  DomainParticipantFactoryQos
    {
        ::DDS::EntityFactoryQosPolicy entity_factory;
    };

    typedef DDS_DCPSStruct_var<DomainParticipantFactoryQos> DomainParticipantFactoryQos_var;
    typedef DomainParticipantFactoryQos& DomainParticipantFactoryQos_out;

    struct  DomainParticipantQos
    {
        ::DDS::UserDataQosPolicy user_data;
        ::DDS::EntityFactoryQosPolicy entity_factory;
        ::DDS::SchedulingQosPolicy watchdog_scheduling;
        ::DDS::SchedulingQosPolicy listener_scheduling;
    };

    typedef DDS_DCPSStruct_var<DomainParticipantQos> DomainParticipantQos_var;
    typedef DDS_DCPSStruct_out < DomainParticipantQos> DomainParticipantQos_out;

    struct  TopicQos
    {
        ::DDS::TopicDataQosPolicy topic_data;
        ::DDS::DurabilityQosPolicy durability;
        ::DDS::DurabilityServiceQosPolicy durability_service;
        ::DDS::DeadlineQosPolicy deadline;
        ::DDS::LatencyBudgetQosPolicy latency_budget;
        ::DDS::LivelinessQosPolicy liveliness;
        ::DDS::ReliabilityQosPolicy reliability;
        ::DDS::DestinationOrderQosPolicy destination_order;
        ::DDS::HistoryQosPolicy history;
        ::DDS::ResourceLimitsQosPolicy resource_limits;
        ::DDS::TransportPriorityQosPolicy transport_priority;
        ::DDS::LifespanQosPolicy lifespan;
        ::DDS::OwnershipQosPolicy ownership;
    };

    typedef DDS_DCPSStruct_var<TopicQos> TopicQos_var;
    typedef DDS_DCPSStruct_out < TopicQos> TopicQos_out;

    struct  DataWriterQos
    {
        ::DDS::DurabilityQosPolicy durability;
        ::DDS::DeadlineQosPolicy deadline;
        ::DDS::LatencyBudgetQosPolicy latency_budget;
        ::DDS::LivelinessQosPolicy liveliness;
        ::DDS::ReliabilityQosPolicy reliability;
        ::DDS::DestinationOrderQosPolicy destination_order;
        ::DDS::HistoryQosPolicy history;
        ::DDS::ResourceLimitsQosPolicy resource_limits;
        ::DDS::TransportPriorityQosPolicy transport_priority;
        ::DDS::LifespanQosPolicy lifespan;
        ::DDS::UserDataQosPolicy user_data;
        ::DDS::OwnershipQosPolicy ownership;
        ::DDS::OwnershipStrengthQosPolicy ownership_strength;
        ::DDS::WriterDataLifecycleQosPolicy writer_data_lifecycle;
    };

    typedef DDS_DCPSStruct_var<DataWriterQos> DataWriterQos_var;
    typedef DDS_DCPSStruct_out < DataWriterQos> DataWriterQos_out;

    struct  PublisherQos
    {
        ::DDS::PresentationQosPolicy presentation;
        ::DDS::PartitionQosPolicy partition;
        ::DDS::GroupDataQosPolicy group_data;
        ::DDS::EntityFactoryQosPolicy entity_factory;
    };

    typedef DDS_DCPSStruct_var<PublisherQos> PublisherQos_var;
    typedef DDS_DCPSStruct_out < PublisherQos> PublisherQos_out;

    struct  DataReaderQos
    {
        ::DDS::DurabilityQosPolicy durability;
        ::DDS::DeadlineQosPolicy deadline;
        ::DDS::LatencyBudgetQosPolicy latency_budget;
        ::DDS::LivelinessQosPolicy liveliness;
        ::DDS::ReliabilityQosPolicy reliability;
        ::DDS::DestinationOrderQosPolicy destination_order;
        ::DDS::HistoryQosPolicy history;
        ::DDS::ResourceLimitsQosPolicy resource_limits;
        ::DDS::UserDataQosPolicy user_data;
        ::DDS::OwnershipQosPolicy ownership;
        ::DDS::TimeBasedFilterQosPolicy time_based_filter;
        ::DDS::ReaderDataLifecycleQosPolicy reader_data_lifecycle;
        ::DDS::SubscriptionKeyQosPolicy subscription_keys;
        ::DDS::ReaderLifespanQosPolicy reader_lifespan;
        ::DDS::ShareQosPolicy share;
    };

    typedef DDS_DCPSStruct_var<DataReaderQos> DataReaderQos_var;
    typedef DDS_DCPSStruct_out < DataReaderQos> DataReaderQos_out;

    struct  SubscriberQos
    {
        ::DDS::PresentationQosPolicy presentation;
        ::DDS::PartitionQosPolicy partition;
        ::DDS::GroupDataQosPolicy group_data;
        ::DDS::EntityFactoryQosPolicy entity_factory;
        ::DDS::ShareQosPolicy share;
    };

    typedef DDS_DCPSStruct_var<SubscriberQos> SubscriberQos_var;
    typedef DDS_DCPSStruct_out < SubscriberQos> SubscriberQos_out;

}

#endif /* _dds_dcps_builtintopics_H_ */
