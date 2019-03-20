#include "dds_dcps.h"
#include "dds_builtinTopics.h"
#include "dds_builtinTopicsSacDcps.h"
#include "dds.h"

DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg);
DDS_ReturnCode_t
DDS_ParticipantBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg)
{
    DDS_ReturnCode_t result = DDS_RETCODE_OUT_OF_RESOURCES;
    DDS_ParticipantBuiltinTopicDataTypeSupport ts;

    (void)arg;

    ts = DDS_ParticipantBuiltinTopicDataTypeSupport__alloc();
    if (ts) {
        result = DDS_ParticipantBuiltinTopicDataTypeSupport_register_type(ts, pp, "DDS::ParticipantBuiltinTopicData");
        DDS_free(ts);
    }

    return result;
}

int DDS_ParticipantBuiltinTopicData__free(void*);

const dds_topic_descriptor_t DDS_ParticipantBuiltinTopicData_desc = {
    DDS_ParticipantBuiltinTopicData_type_registration,
    "DDS::ParticipantBuiltinTopicData",
    sizeof(DDS_ParticipantBuiltinTopicData),
    DDS_ParticipantBuiltinTopicData__free,
    NULL
};

DDS_ReturnCode_t
DDS_TopicBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg);
DDS_ReturnCode_t
DDS_TopicBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg)
{
    DDS_ReturnCode_t result = DDS_RETCODE_OUT_OF_RESOURCES;
    DDS_TopicBuiltinTopicDataTypeSupport ts;

    (void)arg;

    ts = DDS_TopicBuiltinTopicDataTypeSupport__alloc();
    if (ts) {
        result = DDS_TopicBuiltinTopicDataTypeSupport_register_type(ts, pp, "DDS::TopicBuiltinTopicData");
        DDS_free(ts);
    }

    return result;
}

int DDS_TopicBuiltinTopicData__free(void*);

const dds_topic_descriptor_t DDS_TopicBuiltinTopicData_desc = {
    DDS_TopicBuiltinTopicData_type_registration,
    "DDS::TopicBuiltinTopicData",
    sizeof(DDS_TopicBuiltinTopicData),
    DDS_TopicBuiltinTopicData__free,
    NULL
};

DDS_ReturnCode_t
DDS_TypeBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg);
DDS_ReturnCode_t
DDS_TypeBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg)
{
    DDS_ReturnCode_t result = DDS_RETCODE_OUT_OF_RESOURCES;
    DDS_TypeBuiltinTopicDataTypeSupport ts;

    (void)arg;

    ts = DDS_TypeBuiltinTopicDataTypeSupport__alloc();
    if (ts) {
        result = DDS_TypeBuiltinTopicDataTypeSupport_register_type(ts, pp, "DDS::TypeBuiltinTopicData");
        DDS_free(ts);
    }

    return result;
}

int DDS_TypeBuiltinTopicData__free(void*);

const dds_topic_descriptor_t DDS_TypeBuiltinTopicData_desc = {
    DDS_TypeBuiltinTopicData_type_registration,
    "DDS::TypeBuiltinTopicData",
    sizeof(DDS_TypeBuiltinTopicData),
    DDS_TypeBuiltinTopicData__free,
    NULL
};

DDS_ReturnCode_t
DDS_PublicationBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg);
DDS_ReturnCode_t
DDS_PublicationBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg)
{
    DDS_ReturnCode_t result = DDS_RETCODE_OUT_OF_RESOURCES;
    DDS_PublicationBuiltinTopicDataTypeSupport ts;

    (void)arg;

    ts = DDS_PublicationBuiltinTopicDataTypeSupport__alloc();
    if (ts) {
        result = DDS_PublicationBuiltinTopicDataTypeSupport_register_type(ts, pp, "DDS::PublicationBuiltinTopicData");
        DDS_free(ts);
    }

    return result;
}

int DDS_PublicationBuiltinTopicData__free(void*);

const dds_topic_descriptor_t DDS_PublicationBuiltinTopicData_desc = {
    DDS_PublicationBuiltinTopicData_type_registration,
    "DDS::PublicationBuiltinTopicData",
    sizeof(DDS_PublicationBuiltinTopicData),
    DDS_PublicationBuiltinTopicData__free,
    NULL
};

DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg);
DDS_ReturnCode_t
DDS_SubscriptionBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg)
{
    DDS_ReturnCode_t result = DDS_RETCODE_OUT_OF_RESOURCES;
    DDS_SubscriptionBuiltinTopicDataTypeSupport ts;

    (void)arg;

    ts = DDS_SubscriptionBuiltinTopicDataTypeSupport__alloc();
    if (ts) {
        result = DDS_SubscriptionBuiltinTopicDataTypeSupport_register_type(ts, pp, "DDS::SubscriptionBuiltinTopicData");
        DDS_free(ts);
    }

    return result;
}

int DDS_SubscriptionBuiltinTopicData__free(void*);

const dds_topic_descriptor_t DDS_SubscriptionBuiltinTopicData_desc = {
    DDS_SubscriptionBuiltinTopicData_type_registration,
    "DDS::SubscriptionBuiltinTopicData",
    sizeof(DDS_SubscriptionBuiltinTopicData),
    DDS_SubscriptionBuiltinTopicData__free,
    NULL
};

DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg);
DDS_ReturnCode_t
DDS_CMParticipantBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg)
{
    DDS_ReturnCode_t result = DDS_RETCODE_OUT_OF_RESOURCES;
    DDS_CMParticipantBuiltinTopicDataTypeSupport ts;

    (void)arg;

    ts = DDS_CMParticipantBuiltinTopicDataTypeSupport__alloc();
    if (ts) {
        result = DDS_CMParticipantBuiltinTopicDataTypeSupport_register_type(ts, pp, "DDS::CMParticipantBuiltinTopicData");
        DDS_free(ts);
    }

    return result;
}

int DDS_CMParticipantBuiltinTopicData__free(void*);

const dds_topic_descriptor_t DDS_CMParticipantBuiltinTopicData_desc = {
    DDS_CMParticipantBuiltinTopicData_type_registration,
    "DDS::CMParticipantBuiltinTopicData",
    sizeof(DDS_CMParticipantBuiltinTopicData),
    DDS_CMParticipantBuiltinTopicData__free,
    NULL
};

DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg);
DDS_ReturnCode_t
DDS_CMPublisherBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg)
{
    DDS_ReturnCode_t result = DDS_RETCODE_OUT_OF_RESOURCES;
    DDS_CMPublisherBuiltinTopicDataTypeSupport ts;

    (void)arg;

    ts = DDS_CMPublisherBuiltinTopicDataTypeSupport__alloc();
    if (ts) {
        result = DDS_CMPublisherBuiltinTopicDataTypeSupport_register_type(ts, pp, "DDS::CMPublisherBuiltinTopicData");
        DDS_free(ts);
    }

    return result;
}

int DDS_CMPublisherBuiltinTopicData__free(void*);

const dds_topic_descriptor_t DDS_CMPublisherBuiltinTopicData_desc = {
    DDS_CMPublisherBuiltinTopicData_type_registration,
    "DDS::CMPublisherBuiltinTopicData",
    sizeof(DDS_CMPublisherBuiltinTopicData),
    DDS_CMPublisherBuiltinTopicData__free,
    NULL
};

DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg);
DDS_ReturnCode_t
DDS_CMSubscriberBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg)
{
    DDS_ReturnCode_t result = DDS_RETCODE_OUT_OF_RESOURCES;
    DDS_CMSubscriberBuiltinTopicDataTypeSupport ts;

    (void)arg;

    ts = DDS_CMSubscriberBuiltinTopicDataTypeSupport__alloc();
    if (ts) {
        result = DDS_CMSubscriberBuiltinTopicDataTypeSupport_register_type(ts, pp, "DDS::CMSubscriberBuiltinTopicData");
        DDS_free(ts);
    }

    return result;
}

int DDS_CMSubscriberBuiltinTopicData__free(void*);

const dds_topic_descriptor_t DDS_CMSubscriberBuiltinTopicData_desc = {
    DDS_CMSubscriberBuiltinTopicData_type_registration,
    "DDS::CMSubscriberBuiltinTopicData",
    sizeof(DDS_CMSubscriberBuiltinTopicData),
    DDS_CMSubscriberBuiltinTopicData__free,
    NULL
};

DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg);
DDS_ReturnCode_t
DDS_CMDataWriterBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg)
{
    DDS_ReturnCode_t result = DDS_RETCODE_OUT_OF_RESOURCES;
    DDS_CMDataWriterBuiltinTopicDataTypeSupport ts;

    (void)arg;

    ts = DDS_CMDataWriterBuiltinTopicDataTypeSupport__alloc();
    if (ts) {
        result = DDS_CMDataWriterBuiltinTopicDataTypeSupport_register_type(ts, pp, "DDS::CMDataWriterBuiltinTopicData");
        DDS_free(ts);
    }

    return result;
}

int DDS_CMDataWriterBuiltinTopicData__free(void*);

const dds_topic_descriptor_t DDS_CMDataWriterBuiltinTopicData_desc = {
    DDS_CMDataWriterBuiltinTopicData_type_registration,
    "DDS::CMDataWriterBuiltinTopicData",
    sizeof(DDS_CMDataWriterBuiltinTopicData),
    DDS_CMDataWriterBuiltinTopicData__free,
    NULL
};

DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg);
DDS_ReturnCode_t
DDS_CMDataReaderBuiltinTopicData_type_registration(
    dds_entity_t pp,
    void *arg)
{
    DDS_ReturnCode_t result = DDS_RETCODE_OUT_OF_RESOURCES;
    DDS_CMDataReaderBuiltinTopicDataTypeSupport ts;

    (void)arg;

    ts = DDS_CMDataReaderBuiltinTopicDataTypeSupport__alloc();
    if (ts) {
        result = DDS_CMDataReaderBuiltinTopicDataTypeSupport_register_type(ts, pp, "DDS::CMDataReaderBuiltinTopicData");
        DDS_free(ts);
    }

    return result;
}

int DDS_CMDataReaderBuiltinTopicData__free(void*);

const dds_topic_descriptor_t DDS_CMDataReaderBuiltinTopicData_desc = {
    DDS_CMDataReaderBuiltinTopicData_type_registration,
    "DDS::CMDataReaderBuiltinTopicData",
    sizeof(DDS_CMDataReaderBuiltinTopicData),
    DDS_CMDataReaderBuiltinTopicData__free,
    NULL
};

