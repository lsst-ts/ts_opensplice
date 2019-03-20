//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: dds_dcps_builtintopics.h
//  Source: /mnt/h/home/rfactory/opensplice-master/etc/idl/dds_dcps_builtintopics.idl
//  Generated: Fri Mar 15 14:33:56 2019
//  OpenSplice 6.9.190227OSS
//  
//******************************************************************
#ifndef _DDS_DCPS_BUILTINTOPICS_H_
#define _DDS_DCPS_BUILTINTOPICS_H_

#include "sacpp_mapping.h"
#include "dds_builtinTopics.h"


namespace DDS
{
   struct Time_t;
   struct SchedulingClassQosPolicy;
   struct SchedulingPriorityQosPolicy;
   struct SchedulingQosPolicy;
   struct ViewKeyQosPolicy;
   struct DataReaderViewQos;
   struct DomainParticipantFactoryQos;
   struct DomainParticipantQos;
   struct TopicQos;
   struct DataWriterQos;
   struct PublisherQos;
   struct DataReaderQos;
   struct SubscriberQos;

   struct Time_t
   {
         Long sec;
         ULong nanosec;
   };

   typedef DDS_DCPSStruct_var < Time_t> Time_t_var;
   typedef Time_t&Time_t_out;
   enum SchedulingClassQosPolicyKind
   {
      SCHEDULE_DEFAULT,
      SCHEDULE_TIMESHARING,
      SCHEDULE_REALTIME
   };

   struct SchedulingClassQosPolicy
   {
         SchedulingClassQosPolicyKind kind;
   };

   typedef DDS_DCPSStruct_var < SchedulingClassQosPolicy> SchedulingClassQosPolicy_var;
   typedef SchedulingClassQosPolicy&SchedulingClassQosPolicy_out;
   enum SchedulingPriorityQosPolicyKind
   {
      PRIORITY_RELATIVE,
      PRIORITY_ABSOLUTE
   };

   struct SchedulingPriorityQosPolicy
   {
         SchedulingPriorityQosPolicyKind kind;
   };

   typedef DDS_DCPSStruct_var < SchedulingPriorityQosPolicy> SchedulingPriorityQosPolicy_var;
   typedef SchedulingPriorityQosPolicy&SchedulingPriorityQosPolicy_out;

   struct SchedulingQosPolicy
   {
         SchedulingClassQosPolicy scheduling_class;
         SchedulingPriorityQosPolicy scheduling_priority_kind;
         Long scheduling_priority;
   };

   typedef DDS_DCPSStruct_var < SchedulingQosPolicy> SchedulingQosPolicy_var;
   typedef SchedulingQosPolicy&SchedulingQosPolicy_out;

   struct ViewKeyQosPolicy
   {
         Boolean use_key_list;
         StringSeq key_list;
   };

   typedef DDS_DCPSStruct_var < ViewKeyQosPolicy> ViewKeyQosPolicy_var;
   typedef DDS_DCPSStruct_out < ViewKeyQosPolicy> ViewKeyQosPolicy_out;

   struct DataReaderViewQos
   {
         ViewKeyQosPolicy view_keys;
   };

   typedef DDS_DCPSStruct_var < DataReaderViewQos> DataReaderViewQos_var;
   typedef DDS_DCPSStruct_out < DataReaderViewQos> DataReaderViewQos_out;

   struct DomainParticipantFactoryQos
   {
         EntityFactoryQosPolicy entity_factory;
   };

   typedef DDS_DCPSStruct_var < DomainParticipantFactoryQos> DomainParticipantFactoryQos_var;
   typedef DomainParticipantFactoryQos&DomainParticipantFactoryQos_out;

   struct DomainParticipantQos
   {
         UserDataQosPolicy user_data;
         EntityFactoryQosPolicy entity_factory;
         SchedulingQosPolicy watchdog_scheduling;
         SchedulingQosPolicy listener_scheduling;
   };

   typedef DDS_DCPSStruct_var < DomainParticipantQos> DomainParticipantQos_var;
   typedef DDS_DCPSStruct_out < DomainParticipantQos> DomainParticipantQos_out;

   struct TopicQos
   {
         TopicDataQosPolicy topic_data;
         DurabilityQosPolicy durability;
         DurabilityServiceQosPolicy durability_service;
         DeadlineQosPolicy deadline;
         LatencyBudgetQosPolicy latency_budget;
         LivelinessQosPolicy liveliness;
         ReliabilityQosPolicy reliability;
         DestinationOrderQosPolicy destination_order;
         HistoryQosPolicy history;
         ResourceLimitsQosPolicy resource_limits;
         TransportPriorityQosPolicy transport_priority;
         LifespanQosPolicy lifespan;
         OwnershipQosPolicy ownership;
   };

   typedef DDS_DCPSStruct_var < TopicQos> TopicQos_var;
   typedef DDS_DCPSStruct_out < TopicQos> TopicQos_out;

   struct DataWriterQos
   {
         DurabilityQosPolicy durability;
         DeadlineQosPolicy deadline;
         LatencyBudgetQosPolicy latency_budget;
         LivelinessQosPolicy liveliness;
         ReliabilityQosPolicy reliability;
         DestinationOrderQosPolicy destination_order;
         HistoryQosPolicy history;
         ResourceLimitsQosPolicy resource_limits;
         TransportPriorityQosPolicy transport_priority;
         LifespanQosPolicy lifespan;
         UserDataQosPolicy user_data;
         OwnershipQosPolicy ownership;
         OwnershipStrengthQosPolicy ownership_strength;
         WriterDataLifecycleQosPolicy writer_data_lifecycle;
   };

   typedef DDS_DCPSStruct_var < DataWriterQos> DataWriterQos_var;
   typedef DDS_DCPSStruct_out < DataWriterQos> DataWriterQos_out;

   struct PublisherQos
   {
         PresentationQosPolicy presentation;
         PartitionQosPolicy partition;
         GroupDataQosPolicy group_data;
         EntityFactoryQosPolicy entity_factory;
   };

   typedef DDS_DCPSStruct_var < PublisherQos> PublisherQos_var;
   typedef DDS_DCPSStruct_out < PublisherQos> PublisherQos_out;

   struct DataReaderQos
   {
         DurabilityQosPolicy durability;
         DeadlineQosPolicy deadline;
         LatencyBudgetQosPolicy latency_budget;
         LivelinessQosPolicy liveliness;
         ReliabilityQosPolicy reliability;
         DestinationOrderQosPolicy destination_order;
         HistoryQosPolicy history;
         ResourceLimitsQosPolicy resource_limits;
         UserDataQosPolicy user_data;
         OwnershipQosPolicy ownership;
         TimeBasedFilterQosPolicy time_based_filter;
         ReaderDataLifecycleQosPolicy reader_data_lifecycle;
         SubscriptionKeyQosPolicy subscription_keys;
         ReaderLifespanQosPolicy reader_lifespan;
         ShareQosPolicy share;
   };

   typedef DDS_DCPSStruct_var < DataReaderQos> DataReaderQos_var;
   typedef DDS_DCPSStruct_out < DataReaderQos> DataReaderQos_out;

   struct SubscriberQos
   {
         PresentationQosPolicy presentation;
         PartitionQosPolicy partition;
         GroupDataQosPolicy group_data;
         EntityFactoryQosPolicy entity_factory;
         ShareQosPolicy share;
   };

   typedef DDS_DCPSStruct_var < SubscriberQos> SubscriberQos_var;
   typedef DDS_DCPSStruct_out < SubscriberQos> SubscriberQos_out;
}




#endif
