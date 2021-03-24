#ifndef _dds_namedQosTypes_H_
#define _dds_namedQosTypes_H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "dds_dcps_builtintopics.h"


namespace DDS
{
    struct  NamedDomainParticipantQos
    {
        ::DDS::String_mgr name;
        ::DDS::DomainParticipantQos domainparticipant_qos;
    };

    typedef DDS_DCPSStruct_var<NamedDomainParticipantQos> NamedDomainParticipantQos_var;
    typedef DDS_DCPSStruct_out < NamedDomainParticipantQos> NamedDomainParticipantQos_out;

    struct  NamedPublisherQos
    {
        ::DDS::String_mgr name;
        ::DDS::PublisherQos publisher_qos;
    };

    typedef DDS_DCPSStruct_var<NamedPublisherQos> NamedPublisherQos_var;
    typedef DDS_DCPSStruct_out < NamedPublisherQos> NamedPublisherQos_out;

    struct  NamedSubscriberQos
    {
        ::DDS::String_mgr name;
        ::DDS::SubscriberQos subscriber_qos;
    };

    typedef DDS_DCPSStruct_var<NamedSubscriberQos> NamedSubscriberQos_var;
    typedef DDS_DCPSStruct_out < NamedSubscriberQos> NamedSubscriberQos_out;

    struct  NamedTopicQos
    {
        ::DDS::String_mgr name;
        ::DDS::TopicQos topic_qos;
    };

    typedef DDS_DCPSStruct_var<NamedTopicQos> NamedTopicQos_var;
    typedef DDS_DCPSStruct_out < NamedTopicQos> NamedTopicQos_out;

    struct  NamedDataWriterQos
    {
        ::DDS::String_mgr name;
        ::DDS::DataWriterQos datawriter_qos;
    };

    typedef DDS_DCPSStruct_var<NamedDataWriterQos> NamedDataWriterQos_var;
    typedef DDS_DCPSStruct_out < NamedDataWriterQos> NamedDataWriterQos_out;

    struct  NamedDataReaderQos
    {
        ::DDS::String_mgr name;
        ::DDS::DataReaderQos datareader_qos;
    };

    typedef DDS_DCPSStruct_var<NamedDataReaderQos> NamedDataReaderQos_var;
    typedef DDS_DCPSStruct_out < NamedDataReaderQos> NamedDataReaderQos_out;

}

#endif /* _dds_namedQosTypes_H_ */
