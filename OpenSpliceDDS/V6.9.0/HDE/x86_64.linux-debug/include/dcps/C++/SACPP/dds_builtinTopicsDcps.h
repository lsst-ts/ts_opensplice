#ifndef _dds_builtinTopicsDCPS_H_
#define _dds_builtinTopicsDCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "dds_builtinTopics.h"


namespace DDS
{
    class ParticipantBuiltinTopicDataTypeSupportInterface;

    typedef ParticipantBuiltinTopicDataTypeSupportInterface * ParticipantBuiltinTopicDataTypeSupportInterface_ptr;
    typedef DDS_DCPSInterface_var < ParticipantBuiltinTopicDataTypeSupportInterface> ParticipantBuiltinTopicDataTypeSupportInterface_var;
    typedef DDS_DCPSInterface_out < ParticipantBuiltinTopicDataTypeSupportInterface> ParticipantBuiltinTopicDataTypeSupportInterface_out;


    class ParticipantBuiltinTopicDataDataWriter;

    typedef ParticipantBuiltinTopicDataDataWriter * ParticipantBuiltinTopicDataDataWriter_ptr;
    typedef DDS_DCPSInterface_var < ParticipantBuiltinTopicDataDataWriter> ParticipantBuiltinTopicDataDataWriter_var;
    typedef DDS_DCPSInterface_out < ParticipantBuiltinTopicDataDataWriter> ParticipantBuiltinTopicDataDataWriter_out;


    class ParticipantBuiltinTopicDataDataReader;

    typedef ParticipantBuiltinTopicDataDataReader * ParticipantBuiltinTopicDataDataReader_ptr;
    typedef DDS_DCPSInterface_var < ParticipantBuiltinTopicDataDataReader> ParticipantBuiltinTopicDataDataReader_var;
    typedef DDS_DCPSInterface_out < ParticipantBuiltinTopicDataDataReader> ParticipantBuiltinTopicDataDataReader_out;


    class ParticipantBuiltinTopicDataDataReaderView;

    typedef ParticipantBuiltinTopicDataDataReaderView * ParticipantBuiltinTopicDataDataReaderView_ptr;
    typedef DDS_DCPSInterface_var < ParticipantBuiltinTopicDataDataReaderView> ParticipantBuiltinTopicDataDataReaderView_var;
    typedef DDS_DCPSInterface_out < ParticipantBuiltinTopicDataDataReaderView> ParticipantBuiltinTopicDataDataReaderView_out;

    struct ParticipantBuiltinTopicDataSeq_uniq_ {};
    typedef DDS_DCPSUVLSeq < ParticipantBuiltinTopicData, struct ParticipantBuiltinTopicDataSeq_uniq_> ParticipantBuiltinTopicDataSeq;
    typedef DDS_DCPSSequence_var < ParticipantBuiltinTopicDataSeq> ParticipantBuiltinTopicDataSeq_var;
    typedef DDS_DCPSSequence_out < ParticipantBuiltinTopicDataSeq> ParticipantBuiltinTopicDataSeq_out;

    class  ParticipantBuiltinTopicDataTypeSupportInterface :
        virtual public DDS::TypeSupport
    { 
    public:
        typedef ParticipantBuiltinTopicDataTypeSupportInterface_ptr _ptr_type;
        typedef ParticipantBuiltinTopicDataTypeSupportInterface_var _var_type;

        static ParticipantBuiltinTopicDataTypeSupportInterface_ptr _duplicate (ParticipantBuiltinTopicDataTypeSupportInterface_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static ParticipantBuiltinTopicDataTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
        static ParticipantBuiltinTopicDataTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static ParticipantBuiltinTopicDataTypeSupportInterface_ptr _nil () { return 0; }
        static const char * _local_id;
        ParticipantBuiltinTopicDataTypeSupportInterface_ptr _this () { return this; }


    protected:
        ParticipantBuiltinTopicDataTypeSupportInterface () {};
        ~ParticipantBuiltinTopicDataTypeSupportInterface () {};
    private:
        ParticipantBuiltinTopicDataTypeSupportInterface (const ParticipantBuiltinTopicDataTypeSupportInterface &);
        ParticipantBuiltinTopicDataTypeSupportInterface & operator = (const ParticipantBuiltinTopicDataTypeSupportInterface &);
    };

    class  ParticipantBuiltinTopicDataDataWriter :
        virtual public DDS::DataWriter
    { 
    public:
        typedef ParticipantBuiltinTopicDataDataWriter_ptr _ptr_type;
        typedef ParticipantBuiltinTopicDataDataWriter_var _var_type;

        static ParticipantBuiltinTopicDataDataWriter_ptr _duplicate (ParticipantBuiltinTopicDataDataWriter_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static ParticipantBuiltinTopicDataDataWriter_ptr _narrow (DDS::Object_ptr obj);
        static ParticipantBuiltinTopicDataDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static ParticipantBuiltinTopicDataDataWriter_ptr _nil () { return 0; }
        static const char * _local_id;
        ParticipantBuiltinTopicDataDataWriter_ptr _this () { return this; }

        virtual DDS::LongLong register_instance (const ParticipantBuiltinTopicData& instance_data) = 0;
        virtual DDS::LongLong register_instance_w_timestamp (const ParticipantBuiltinTopicData& instance_data, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long unregister_instance (const ParticipantBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long unregister_instance_w_timestamp (const ParticipantBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long write (const ParticipantBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long write_w_timestamp (const ParticipantBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long dispose (const ParticipantBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long dispose_w_timestamp (const ParticipantBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long writedispose (const ParticipantBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long writedispose_w_timestamp (const ParticipantBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long get_key_value (ParticipantBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const ParticipantBuiltinTopicData& instance_data) = 0;

    protected:
        ParticipantBuiltinTopicDataDataWriter () {};
        ~ParticipantBuiltinTopicDataDataWriter () {};
    private:
        ParticipantBuiltinTopicDataDataWriter (const ParticipantBuiltinTopicDataDataWriter &);
        ParticipantBuiltinTopicDataDataWriter & operator = (const ParticipantBuiltinTopicDataDataWriter &);
    };

    class  ParticipantBuiltinTopicDataDataReader :
        virtual public DDS::DataReader
    { 
    public:
        typedef ParticipantBuiltinTopicDataDataReader_ptr _ptr_type;
        typedef ParticipantBuiltinTopicDataDataReader_var _var_type;

        static ParticipantBuiltinTopicDataDataReader_ptr _duplicate (ParticipantBuiltinTopicDataDataReader_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static ParticipantBuiltinTopicDataDataReader_ptr _narrow (DDS::Object_ptr obj);
        static ParticipantBuiltinTopicDataDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static ParticipantBuiltinTopicDataDataReader_ptr _nil () { return 0; }
        static const char * _local_id;
        ParticipantBuiltinTopicDataDataReader_ptr _this () { return this; }

        virtual DDS::Long read (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (ParticipantBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (ParticipantBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (ParticipantBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const ParticipantBuiltinTopicData& instance) = 0;

    protected:
        ParticipantBuiltinTopicDataDataReader () {};
        ~ParticipantBuiltinTopicDataDataReader () {};
    private:
        ParticipantBuiltinTopicDataDataReader (const ParticipantBuiltinTopicDataDataReader &);
        ParticipantBuiltinTopicDataDataReader & operator = (const ParticipantBuiltinTopicDataDataReader &);
    };

    class  ParticipantBuiltinTopicDataDataReaderView :
        virtual public DDS::DataReaderView
    { 
    public:
        typedef ParticipantBuiltinTopicDataDataReaderView_ptr _ptr_type;
        typedef ParticipantBuiltinTopicDataDataReaderView_var _var_type;

        static ParticipantBuiltinTopicDataDataReaderView_ptr _duplicate (ParticipantBuiltinTopicDataDataReaderView_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static ParticipantBuiltinTopicDataDataReaderView_ptr _narrow (DDS::Object_ptr obj);
        static ParticipantBuiltinTopicDataDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static ParticipantBuiltinTopicDataDataReaderView_ptr _nil () { return 0; }
        static const char * _local_id;
        ParticipantBuiltinTopicDataDataReaderView_ptr _this () { return this; }

        virtual DDS::Long read (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (ParticipantBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (ParticipantBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (ParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (ParticipantBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const ParticipantBuiltinTopicData& instance) = 0;

    protected:
        ParticipantBuiltinTopicDataDataReaderView () {};
        ~ParticipantBuiltinTopicDataDataReaderView () {};
    private:
        ParticipantBuiltinTopicDataDataReaderView (const ParticipantBuiltinTopicDataDataReaderView &);
        ParticipantBuiltinTopicDataDataReaderView & operator = (const ParticipantBuiltinTopicDataDataReaderView &);
    };
    class TopicBuiltinTopicDataTypeSupportInterface;

    typedef TopicBuiltinTopicDataTypeSupportInterface * TopicBuiltinTopicDataTypeSupportInterface_ptr;
    typedef DDS_DCPSInterface_var < TopicBuiltinTopicDataTypeSupportInterface> TopicBuiltinTopicDataTypeSupportInterface_var;
    typedef DDS_DCPSInterface_out < TopicBuiltinTopicDataTypeSupportInterface> TopicBuiltinTopicDataTypeSupportInterface_out;


    class TopicBuiltinTopicDataDataWriter;

    typedef TopicBuiltinTopicDataDataWriter * TopicBuiltinTopicDataDataWriter_ptr;
    typedef DDS_DCPSInterface_var < TopicBuiltinTopicDataDataWriter> TopicBuiltinTopicDataDataWriter_var;
    typedef DDS_DCPSInterface_out < TopicBuiltinTopicDataDataWriter> TopicBuiltinTopicDataDataWriter_out;


    class TopicBuiltinTopicDataDataReader;

    typedef TopicBuiltinTopicDataDataReader * TopicBuiltinTopicDataDataReader_ptr;
    typedef DDS_DCPSInterface_var < TopicBuiltinTopicDataDataReader> TopicBuiltinTopicDataDataReader_var;
    typedef DDS_DCPSInterface_out < TopicBuiltinTopicDataDataReader> TopicBuiltinTopicDataDataReader_out;


    class TopicBuiltinTopicDataDataReaderView;

    typedef TopicBuiltinTopicDataDataReaderView * TopicBuiltinTopicDataDataReaderView_ptr;
    typedef DDS_DCPSInterface_var < TopicBuiltinTopicDataDataReaderView> TopicBuiltinTopicDataDataReaderView_var;
    typedef DDS_DCPSInterface_out < TopicBuiltinTopicDataDataReaderView> TopicBuiltinTopicDataDataReaderView_out;

    struct TopicBuiltinTopicDataSeq_uniq_ {};
    typedef DDS_DCPSUVLSeq < TopicBuiltinTopicData, struct TopicBuiltinTopicDataSeq_uniq_> TopicBuiltinTopicDataSeq;
    typedef DDS_DCPSSequence_var < TopicBuiltinTopicDataSeq> TopicBuiltinTopicDataSeq_var;
    typedef DDS_DCPSSequence_out < TopicBuiltinTopicDataSeq> TopicBuiltinTopicDataSeq_out;

    class  TopicBuiltinTopicDataTypeSupportInterface :
        virtual public DDS::TypeSupport
    { 
    public:
        typedef TopicBuiltinTopicDataTypeSupportInterface_ptr _ptr_type;
        typedef TopicBuiltinTopicDataTypeSupportInterface_var _var_type;

        static TopicBuiltinTopicDataTypeSupportInterface_ptr _duplicate (TopicBuiltinTopicDataTypeSupportInterface_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static TopicBuiltinTopicDataTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
        static TopicBuiltinTopicDataTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static TopicBuiltinTopicDataTypeSupportInterface_ptr _nil () { return 0; }
        static const char * _local_id;
        TopicBuiltinTopicDataTypeSupportInterface_ptr _this () { return this; }


    protected:
        TopicBuiltinTopicDataTypeSupportInterface () {};
        ~TopicBuiltinTopicDataTypeSupportInterface () {};
    private:
        TopicBuiltinTopicDataTypeSupportInterface (const TopicBuiltinTopicDataTypeSupportInterface &);
        TopicBuiltinTopicDataTypeSupportInterface & operator = (const TopicBuiltinTopicDataTypeSupportInterface &);
    };

    class  TopicBuiltinTopicDataDataWriter :
        virtual public DDS::DataWriter
    { 
    public:
        typedef TopicBuiltinTopicDataDataWriter_ptr _ptr_type;
        typedef TopicBuiltinTopicDataDataWriter_var _var_type;

        static TopicBuiltinTopicDataDataWriter_ptr _duplicate (TopicBuiltinTopicDataDataWriter_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static TopicBuiltinTopicDataDataWriter_ptr _narrow (DDS::Object_ptr obj);
        static TopicBuiltinTopicDataDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static TopicBuiltinTopicDataDataWriter_ptr _nil () { return 0; }
        static const char * _local_id;
        TopicBuiltinTopicDataDataWriter_ptr _this () { return this; }

        virtual DDS::LongLong register_instance (const TopicBuiltinTopicData& instance_data) = 0;
        virtual DDS::LongLong register_instance_w_timestamp (const TopicBuiltinTopicData& instance_data, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long unregister_instance (const TopicBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long unregister_instance_w_timestamp (const TopicBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long write (const TopicBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long write_w_timestamp (const TopicBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long dispose (const TopicBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long dispose_w_timestamp (const TopicBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long writedispose (const TopicBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long writedispose_w_timestamp (const TopicBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long get_key_value (TopicBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const TopicBuiltinTopicData& instance_data) = 0;

    protected:
        TopicBuiltinTopicDataDataWriter () {};
        ~TopicBuiltinTopicDataDataWriter () {};
    private:
        TopicBuiltinTopicDataDataWriter (const TopicBuiltinTopicDataDataWriter &);
        TopicBuiltinTopicDataDataWriter & operator = (const TopicBuiltinTopicDataDataWriter &);
    };

    class  TopicBuiltinTopicDataDataReader :
        virtual public DDS::DataReader
    { 
    public:
        typedef TopicBuiltinTopicDataDataReader_ptr _ptr_type;
        typedef TopicBuiltinTopicDataDataReader_var _var_type;

        static TopicBuiltinTopicDataDataReader_ptr _duplicate (TopicBuiltinTopicDataDataReader_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static TopicBuiltinTopicDataDataReader_ptr _narrow (DDS::Object_ptr obj);
        static TopicBuiltinTopicDataDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static TopicBuiltinTopicDataDataReader_ptr _nil () { return 0; }
        static const char * _local_id;
        TopicBuiltinTopicDataDataReader_ptr _this () { return this; }

        virtual DDS::Long read (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (TopicBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (TopicBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (TopicBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const TopicBuiltinTopicData& instance) = 0;

    protected:
        TopicBuiltinTopicDataDataReader () {};
        ~TopicBuiltinTopicDataDataReader () {};
    private:
        TopicBuiltinTopicDataDataReader (const TopicBuiltinTopicDataDataReader &);
        TopicBuiltinTopicDataDataReader & operator = (const TopicBuiltinTopicDataDataReader &);
    };

    class  TopicBuiltinTopicDataDataReaderView :
        virtual public DDS::DataReaderView
    { 
    public:
        typedef TopicBuiltinTopicDataDataReaderView_ptr _ptr_type;
        typedef TopicBuiltinTopicDataDataReaderView_var _var_type;

        static TopicBuiltinTopicDataDataReaderView_ptr _duplicate (TopicBuiltinTopicDataDataReaderView_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static TopicBuiltinTopicDataDataReaderView_ptr _narrow (DDS::Object_ptr obj);
        static TopicBuiltinTopicDataDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static TopicBuiltinTopicDataDataReaderView_ptr _nil () { return 0; }
        static const char * _local_id;
        TopicBuiltinTopicDataDataReaderView_ptr _this () { return this; }

        virtual DDS::Long read (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (TopicBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (TopicBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (TopicBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (TopicBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const TopicBuiltinTopicData& instance) = 0;

    protected:
        TopicBuiltinTopicDataDataReaderView () {};
        ~TopicBuiltinTopicDataDataReaderView () {};
    private:
        TopicBuiltinTopicDataDataReaderView (const TopicBuiltinTopicDataDataReaderView &);
        TopicBuiltinTopicDataDataReaderView & operator = (const TopicBuiltinTopicDataDataReaderView &);
    };
    class TypeBuiltinTopicDataTypeSupportInterface;

    typedef TypeBuiltinTopicDataTypeSupportInterface * TypeBuiltinTopicDataTypeSupportInterface_ptr;
    typedef DDS_DCPSInterface_var < TypeBuiltinTopicDataTypeSupportInterface> TypeBuiltinTopicDataTypeSupportInterface_var;
    typedef DDS_DCPSInterface_out < TypeBuiltinTopicDataTypeSupportInterface> TypeBuiltinTopicDataTypeSupportInterface_out;


    class TypeBuiltinTopicDataDataWriter;

    typedef TypeBuiltinTopicDataDataWriter * TypeBuiltinTopicDataDataWriter_ptr;
    typedef DDS_DCPSInterface_var < TypeBuiltinTopicDataDataWriter> TypeBuiltinTopicDataDataWriter_var;
    typedef DDS_DCPSInterface_out < TypeBuiltinTopicDataDataWriter> TypeBuiltinTopicDataDataWriter_out;


    class TypeBuiltinTopicDataDataReader;

    typedef TypeBuiltinTopicDataDataReader * TypeBuiltinTopicDataDataReader_ptr;
    typedef DDS_DCPSInterface_var < TypeBuiltinTopicDataDataReader> TypeBuiltinTopicDataDataReader_var;
    typedef DDS_DCPSInterface_out < TypeBuiltinTopicDataDataReader> TypeBuiltinTopicDataDataReader_out;


    class TypeBuiltinTopicDataDataReaderView;

    typedef TypeBuiltinTopicDataDataReaderView * TypeBuiltinTopicDataDataReaderView_ptr;
    typedef DDS_DCPSInterface_var < TypeBuiltinTopicDataDataReaderView> TypeBuiltinTopicDataDataReaderView_var;
    typedef DDS_DCPSInterface_out < TypeBuiltinTopicDataDataReaderView> TypeBuiltinTopicDataDataReaderView_out;

    struct TypeBuiltinTopicDataSeq_uniq_ {};
    typedef DDS_DCPSUVLSeq < TypeBuiltinTopicData, struct TypeBuiltinTopicDataSeq_uniq_> TypeBuiltinTopicDataSeq;
    typedef DDS_DCPSSequence_var < TypeBuiltinTopicDataSeq> TypeBuiltinTopicDataSeq_var;
    typedef DDS_DCPSSequence_out < TypeBuiltinTopicDataSeq> TypeBuiltinTopicDataSeq_out;

    class  TypeBuiltinTopicDataTypeSupportInterface :
        virtual public DDS::TypeSupport
    { 
    public:
        typedef TypeBuiltinTopicDataTypeSupportInterface_ptr _ptr_type;
        typedef TypeBuiltinTopicDataTypeSupportInterface_var _var_type;

        static TypeBuiltinTopicDataTypeSupportInterface_ptr _duplicate (TypeBuiltinTopicDataTypeSupportInterface_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static TypeBuiltinTopicDataTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
        static TypeBuiltinTopicDataTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static TypeBuiltinTopicDataTypeSupportInterface_ptr _nil () { return 0; }
        static const char * _local_id;
        TypeBuiltinTopicDataTypeSupportInterface_ptr _this () { return this; }


    protected:
        TypeBuiltinTopicDataTypeSupportInterface () {};
        ~TypeBuiltinTopicDataTypeSupportInterface () {};
    private:
        TypeBuiltinTopicDataTypeSupportInterface (const TypeBuiltinTopicDataTypeSupportInterface &);
        TypeBuiltinTopicDataTypeSupportInterface & operator = (const TypeBuiltinTopicDataTypeSupportInterface &);
    };

    class  TypeBuiltinTopicDataDataWriter :
        virtual public DDS::DataWriter
    { 
    public:
        typedef TypeBuiltinTopicDataDataWriter_ptr _ptr_type;
        typedef TypeBuiltinTopicDataDataWriter_var _var_type;

        static TypeBuiltinTopicDataDataWriter_ptr _duplicate (TypeBuiltinTopicDataDataWriter_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static TypeBuiltinTopicDataDataWriter_ptr _narrow (DDS::Object_ptr obj);
        static TypeBuiltinTopicDataDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static TypeBuiltinTopicDataDataWriter_ptr _nil () { return 0; }
        static const char * _local_id;
        TypeBuiltinTopicDataDataWriter_ptr _this () { return this; }

        virtual DDS::LongLong register_instance (const TypeBuiltinTopicData& instance_data) = 0;
        virtual DDS::LongLong register_instance_w_timestamp (const TypeBuiltinTopicData& instance_data, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long unregister_instance (const TypeBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long unregister_instance_w_timestamp (const TypeBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long write (const TypeBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long write_w_timestamp (const TypeBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long dispose (const TypeBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long dispose_w_timestamp (const TypeBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long writedispose (const TypeBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long writedispose_w_timestamp (const TypeBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long get_key_value (TypeBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const TypeBuiltinTopicData& instance_data) = 0;

    protected:
        TypeBuiltinTopicDataDataWriter () {};
        ~TypeBuiltinTopicDataDataWriter () {};
    private:
        TypeBuiltinTopicDataDataWriter (const TypeBuiltinTopicDataDataWriter &);
        TypeBuiltinTopicDataDataWriter & operator = (const TypeBuiltinTopicDataDataWriter &);
    };

    class  TypeBuiltinTopicDataDataReader :
        virtual public DDS::DataReader
    { 
    public:
        typedef TypeBuiltinTopicDataDataReader_ptr _ptr_type;
        typedef TypeBuiltinTopicDataDataReader_var _var_type;

        static TypeBuiltinTopicDataDataReader_ptr _duplicate (TypeBuiltinTopicDataDataReader_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static TypeBuiltinTopicDataDataReader_ptr _narrow (DDS::Object_ptr obj);
        static TypeBuiltinTopicDataDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static TypeBuiltinTopicDataDataReader_ptr _nil () { return 0; }
        static const char * _local_id;
        TypeBuiltinTopicDataDataReader_ptr _this () { return this; }

        virtual DDS::Long read (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (TypeBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (TypeBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (TypeBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const TypeBuiltinTopicData& instance) = 0;

    protected:
        TypeBuiltinTopicDataDataReader () {};
        ~TypeBuiltinTopicDataDataReader () {};
    private:
        TypeBuiltinTopicDataDataReader (const TypeBuiltinTopicDataDataReader &);
        TypeBuiltinTopicDataDataReader & operator = (const TypeBuiltinTopicDataDataReader &);
    };

    class  TypeBuiltinTopicDataDataReaderView :
        virtual public DDS::DataReaderView
    { 
    public:
        typedef TypeBuiltinTopicDataDataReaderView_ptr _ptr_type;
        typedef TypeBuiltinTopicDataDataReaderView_var _var_type;

        static TypeBuiltinTopicDataDataReaderView_ptr _duplicate (TypeBuiltinTopicDataDataReaderView_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static TypeBuiltinTopicDataDataReaderView_ptr _narrow (DDS::Object_ptr obj);
        static TypeBuiltinTopicDataDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static TypeBuiltinTopicDataDataReaderView_ptr _nil () { return 0; }
        static const char * _local_id;
        TypeBuiltinTopicDataDataReaderView_ptr _this () { return this; }

        virtual DDS::Long read (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (TypeBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (TypeBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (TypeBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (TypeBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const TypeBuiltinTopicData& instance) = 0;

    protected:
        TypeBuiltinTopicDataDataReaderView () {};
        ~TypeBuiltinTopicDataDataReaderView () {};
    private:
        TypeBuiltinTopicDataDataReaderView (const TypeBuiltinTopicDataDataReaderView &);
        TypeBuiltinTopicDataDataReaderView & operator = (const TypeBuiltinTopicDataDataReaderView &);
    };
    class PublicationBuiltinTopicDataTypeSupportInterface;

    typedef PublicationBuiltinTopicDataTypeSupportInterface * PublicationBuiltinTopicDataTypeSupportInterface_ptr;
    typedef DDS_DCPSInterface_var < PublicationBuiltinTopicDataTypeSupportInterface> PublicationBuiltinTopicDataTypeSupportInterface_var;
    typedef DDS_DCPSInterface_out < PublicationBuiltinTopicDataTypeSupportInterface> PublicationBuiltinTopicDataTypeSupportInterface_out;


    class PublicationBuiltinTopicDataDataWriter;

    typedef PublicationBuiltinTopicDataDataWriter * PublicationBuiltinTopicDataDataWriter_ptr;
    typedef DDS_DCPSInterface_var < PublicationBuiltinTopicDataDataWriter> PublicationBuiltinTopicDataDataWriter_var;
    typedef DDS_DCPSInterface_out < PublicationBuiltinTopicDataDataWriter> PublicationBuiltinTopicDataDataWriter_out;


    class PublicationBuiltinTopicDataDataReader;

    typedef PublicationBuiltinTopicDataDataReader * PublicationBuiltinTopicDataDataReader_ptr;
    typedef DDS_DCPSInterface_var < PublicationBuiltinTopicDataDataReader> PublicationBuiltinTopicDataDataReader_var;
    typedef DDS_DCPSInterface_out < PublicationBuiltinTopicDataDataReader> PublicationBuiltinTopicDataDataReader_out;


    class PublicationBuiltinTopicDataDataReaderView;

    typedef PublicationBuiltinTopicDataDataReaderView * PublicationBuiltinTopicDataDataReaderView_ptr;
    typedef DDS_DCPSInterface_var < PublicationBuiltinTopicDataDataReaderView> PublicationBuiltinTopicDataDataReaderView_var;
    typedef DDS_DCPSInterface_out < PublicationBuiltinTopicDataDataReaderView> PublicationBuiltinTopicDataDataReaderView_out;

    struct PublicationBuiltinTopicDataSeq_uniq_ {};
    typedef DDS_DCPSUVLSeq < PublicationBuiltinTopicData, struct PublicationBuiltinTopicDataSeq_uniq_> PublicationBuiltinTopicDataSeq;
    typedef DDS_DCPSSequence_var < PublicationBuiltinTopicDataSeq> PublicationBuiltinTopicDataSeq_var;
    typedef DDS_DCPSSequence_out < PublicationBuiltinTopicDataSeq> PublicationBuiltinTopicDataSeq_out;

    class  PublicationBuiltinTopicDataTypeSupportInterface :
        virtual public DDS::TypeSupport
    { 
    public:
        typedef PublicationBuiltinTopicDataTypeSupportInterface_ptr _ptr_type;
        typedef PublicationBuiltinTopicDataTypeSupportInterface_var _var_type;

        static PublicationBuiltinTopicDataTypeSupportInterface_ptr _duplicate (PublicationBuiltinTopicDataTypeSupportInterface_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static PublicationBuiltinTopicDataTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
        static PublicationBuiltinTopicDataTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static PublicationBuiltinTopicDataTypeSupportInterface_ptr _nil () { return 0; }
        static const char * _local_id;
        PublicationBuiltinTopicDataTypeSupportInterface_ptr _this () { return this; }


    protected:
        PublicationBuiltinTopicDataTypeSupportInterface () {};
        ~PublicationBuiltinTopicDataTypeSupportInterface () {};
    private:
        PublicationBuiltinTopicDataTypeSupportInterface (const PublicationBuiltinTopicDataTypeSupportInterface &);
        PublicationBuiltinTopicDataTypeSupportInterface & operator = (const PublicationBuiltinTopicDataTypeSupportInterface &);
    };

    class  PublicationBuiltinTopicDataDataWriter :
        virtual public DDS::DataWriter
    { 
    public:
        typedef PublicationBuiltinTopicDataDataWriter_ptr _ptr_type;
        typedef PublicationBuiltinTopicDataDataWriter_var _var_type;

        static PublicationBuiltinTopicDataDataWriter_ptr _duplicate (PublicationBuiltinTopicDataDataWriter_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static PublicationBuiltinTopicDataDataWriter_ptr _narrow (DDS::Object_ptr obj);
        static PublicationBuiltinTopicDataDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static PublicationBuiltinTopicDataDataWriter_ptr _nil () { return 0; }
        static const char * _local_id;
        PublicationBuiltinTopicDataDataWriter_ptr _this () { return this; }

        virtual DDS::LongLong register_instance (const PublicationBuiltinTopicData& instance_data) = 0;
        virtual DDS::LongLong register_instance_w_timestamp (const PublicationBuiltinTopicData& instance_data, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long unregister_instance (const PublicationBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long unregister_instance_w_timestamp (const PublicationBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long write (const PublicationBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long write_w_timestamp (const PublicationBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long dispose (const PublicationBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long dispose_w_timestamp (const PublicationBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long writedispose (const PublicationBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long writedispose_w_timestamp (const PublicationBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long get_key_value (PublicationBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const PublicationBuiltinTopicData& instance_data) = 0;

    protected:
        PublicationBuiltinTopicDataDataWriter () {};
        ~PublicationBuiltinTopicDataDataWriter () {};
    private:
        PublicationBuiltinTopicDataDataWriter (const PublicationBuiltinTopicDataDataWriter &);
        PublicationBuiltinTopicDataDataWriter & operator = (const PublicationBuiltinTopicDataDataWriter &);
    };

    class  PublicationBuiltinTopicDataDataReader :
        virtual public DDS::DataReader
    { 
    public:
        typedef PublicationBuiltinTopicDataDataReader_ptr _ptr_type;
        typedef PublicationBuiltinTopicDataDataReader_var _var_type;

        static PublicationBuiltinTopicDataDataReader_ptr _duplicate (PublicationBuiltinTopicDataDataReader_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static PublicationBuiltinTopicDataDataReader_ptr _narrow (DDS::Object_ptr obj);
        static PublicationBuiltinTopicDataDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static PublicationBuiltinTopicDataDataReader_ptr _nil () { return 0; }
        static const char * _local_id;
        PublicationBuiltinTopicDataDataReader_ptr _this () { return this; }

        virtual DDS::Long read (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (PublicationBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (PublicationBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (PublicationBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const PublicationBuiltinTopicData& instance) = 0;

    protected:
        PublicationBuiltinTopicDataDataReader () {};
        ~PublicationBuiltinTopicDataDataReader () {};
    private:
        PublicationBuiltinTopicDataDataReader (const PublicationBuiltinTopicDataDataReader &);
        PublicationBuiltinTopicDataDataReader & operator = (const PublicationBuiltinTopicDataDataReader &);
    };

    class  PublicationBuiltinTopicDataDataReaderView :
        virtual public DDS::DataReaderView
    { 
    public:
        typedef PublicationBuiltinTopicDataDataReaderView_ptr _ptr_type;
        typedef PublicationBuiltinTopicDataDataReaderView_var _var_type;

        static PublicationBuiltinTopicDataDataReaderView_ptr _duplicate (PublicationBuiltinTopicDataDataReaderView_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static PublicationBuiltinTopicDataDataReaderView_ptr _narrow (DDS::Object_ptr obj);
        static PublicationBuiltinTopicDataDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static PublicationBuiltinTopicDataDataReaderView_ptr _nil () { return 0; }
        static const char * _local_id;
        PublicationBuiltinTopicDataDataReaderView_ptr _this () { return this; }

        virtual DDS::Long read (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (PublicationBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (PublicationBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (PublicationBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (PublicationBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const PublicationBuiltinTopicData& instance) = 0;

    protected:
        PublicationBuiltinTopicDataDataReaderView () {};
        ~PublicationBuiltinTopicDataDataReaderView () {};
    private:
        PublicationBuiltinTopicDataDataReaderView (const PublicationBuiltinTopicDataDataReaderView &);
        PublicationBuiltinTopicDataDataReaderView & operator = (const PublicationBuiltinTopicDataDataReaderView &);
    };
    class SubscriptionBuiltinTopicDataTypeSupportInterface;

    typedef SubscriptionBuiltinTopicDataTypeSupportInterface * SubscriptionBuiltinTopicDataTypeSupportInterface_ptr;
    typedef DDS_DCPSInterface_var < SubscriptionBuiltinTopicDataTypeSupportInterface> SubscriptionBuiltinTopicDataTypeSupportInterface_var;
    typedef DDS_DCPSInterface_out < SubscriptionBuiltinTopicDataTypeSupportInterface> SubscriptionBuiltinTopicDataTypeSupportInterface_out;


    class SubscriptionBuiltinTopicDataDataWriter;

    typedef SubscriptionBuiltinTopicDataDataWriter * SubscriptionBuiltinTopicDataDataWriter_ptr;
    typedef DDS_DCPSInterface_var < SubscriptionBuiltinTopicDataDataWriter> SubscriptionBuiltinTopicDataDataWriter_var;
    typedef DDS_DCPSInterface_out < SubscriptionBuiltinTopicDataDataWriter> SubscriptionBuiltinTopicDataDataWriter_out;


    class SubscriptionBuiltinTopicDataDataReader;

    typedef SubscriptionBuiltinTopicDataDataReader * SubscriptionBuiltinTopicDataDataReader_ptr;
    typedef DDS_DCPSInterface_var < SubscriptionBuiltinTopicDataDataReader> SubscriptionBuiltinTopicDataDataReader_var;
    typedef DDS_DCPSInterface_out < SubscriptionBuiltinTopicDataDataReader> SubscriptionBuiltinTopicDataDataReader_out;


    class SubscriptionBuiltinTopicDataDataReaderView;

    typedef SubscriptionBuiltinTopicDataDataReaderView * SubscriptionBuiltinTopicDataDataReaderView_ptr;
    typedef DDS_DCPSInterface_var < SubscriptionBuiltinTopicDataDataReaderView> SubscriptionBuiltinTopicDataDataReaderView_var;
    typedef DDS_DCPSInterface_out < SubscriptionBuiltinTopicDataDataReaderView> SubscriptionBuiltinTopicDataDataReaderView_out;

    struct SubscriptionBuiltinTopicDataSeq_uniq_ {};
    typedef DDS_DCPSUVLSeq < SubscriptionBuiltinTopicData, struct SubscriptionBuiltinTopicDataSeq_uniq_> SubscriptionBuiltinTopicDataSeq;
    typedef DDS_DCPSSequence_var < SubscriptionBuiltinTopicDataSeq> SubscriptionBuiltinTopicDataSeq_var;
    typedef DDS_DCPSSequence_out < SubscriptionBuiltinTopicDataSeq> SubscriptionBuiltinTopicDataSeq_out;

    class  SubscriptionBuiltinTopicDataTypeSupportInterface :
        virtual public DDS::TypeSupport
    { 
    public:
        typedef SubscriptionBuiltinTopicDataTypeSupportInterface_ptr _ptr_type;
        typedef SubscriptionBuiltinTopicDataTypeSupportInterface_var _var_type;

        static SubscriptionBuiltinTopicDataTypeSupportInterface_ptr _duplicate (SubscriptionBuiltinTopicDataTypeSupportInterface_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static SubscriptionBuiltinTopicDataTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
        static SubscriptionBuiltinTopicDataTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static SubscriptionBuiltinTopicDataTypeSupportInterface_ptr _nil () { return 0; }
        static const char * _local_id;
        SubscriptionBuiltinTopicDataTypeSupportInterface_ptr _this () { return this; }


    protected:
        SubscriptionBuiltinTopicDataTypeSupportInterface () {};
        ~SubscriptionBuiltinTopicDataTypeSupportInterface () {};
    private:
        SubscriptionBuiltinTopicDataTypeSupportInterface (const SubscriptionBuiltinTopicDataTypeSupportInterface &);
        SubscriptionBuiltinTopicDataTypeSupportInterface & operator = (const SubscriptionBuiltinTopicDataTypeSupportInterface &);
    };

    class  SubscriptionBuiltinTopicDataDataWriter :
        virtual public DDS::DataWriter
    { 
    public:
        typedef SubscriptionBuiltinTopicDataDataWriter_ptr _ptr_type;
        typedef SubscriptionBuiltinTopicDataDataWriter_var _var_type;

        static SubscriptionBuiltinTopicDataDataWriter_ptr _duplicate (SubscriptionBuiltinTopicDataDataWriter_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static SubscriptionBuiltinTopicDataDataWriter_ptr _narrow (DDS::Object_ptr obj);
        static SubscriptionBuiltinTopicDataDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static SubscriptionBuiltinTopicDataDataWriter_ptr _nil () { return 0; }
        static const char * _local_id;
        SubscriptionBuiltinTopicDataDataWriter_ptr _this () { return this; }

        virtual DDS::LongLong register_instance (const SubscriptionBuiltinTopicData& instance_data) = 0;
        virtual DDS::LongLong register_instance_w_timestamp (const SubscriptionBuiltinTopicData& instance_data, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long unregister_instance (const SubscriptionBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long unregister_instance_w_timestamp (const SubscriptionBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long write (const SubscriptionBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long write_w_timestamp (const SubscriptionBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long dispose (const SubscriptionBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long dispose_w_timestamp (const SubscriptionBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long writedispose (const SubscriptionBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long writedispose_w_timestamp (const SubscriptionBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long get_key_value (SubscriptionBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const SubscriptionBuiltinTopicData& instance_data) = 0;

    protected:
        SubscriptionBuiltinTopicDataDataWriter () {};
        ~SubscriptionBuiltinTopicDataDataWriter () {};
    private:
        SubscriptionBuiltinTopicDataDataWriter (const SubscriptionBuiltinTopicDataDataWriter &);
        SubscriptionBuiltinTopicDataDataWriter & operator = (const SubscriptionBuiltinTopicDataDataWriter &);
    };

    class  SubscriptionBuiltinTopicDataDataReader :
        virtual public DDS::DataReader
    { 
    public:
        typedef SubscriptionBuiltinTopicDataDataReader_ptr _ptr_type;
        typedef SubscriptionBuiltinTopicDataDataReader_var _var_type;

        static SubscriptionBuiltinTopicDataDataReader_ptr _duplicate (SubscriptionBuiltinTopicDataDataReader_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static SubscriptionBuiltinTopicDataDataReader_ptr _narrow (DDS::Object_ptr obj);
        static SubscriptionBuiltinTopicDataDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static SubscriptionBuiltinTopicDataDataReader_ptr _nil () { return 0; }
        static const char * _local_id;
        SubscriptionBuiltinTopicDataDataReader_ptr _this () { return this; }

        virtual DDS::Long read (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (SubscriptionBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (SubscriptionBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (SubscriptionBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const SubscriptionBuiltinTopicData& instance) = 0;

    protected:
        SubscriptionBuiltinTopicDataDataReader () {};
        ~SubscriptionBuiltinTopicDataDataReader () {};
    private:
        SubscriptionBuiltinTopicDataDataReader (const SubscriptionBuiltinTopicDataDataReader &);
        SubscriptionBuiltinTopicDataDataReader & operator = (const SubscriptionBuiltinTopicDataDataReader &);
    };

    class  SubscriptionBuiltinTopicDataDataReaderView :
        virtual public DDS::DataReaderView
    { 
    public:
        typedef SubscriptionBuiltinTopicDataDataReaderView_ptr _ptr_type;
        typedef SubscriptionBuiltinTopicDataDataReaderView_var _var_type;

        static SubscriptionBuiltinTopicDataDataReaderView_ptr _duplicate (SubscriptionBuiltinTopicDataDataReaderView_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static SubscriptionBuiltinTopicDataDataReaderView_ptr _narrow (DDS::Object_ptr obj);
        static SubscriptionBuiltinTopicDataDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static SubscriptionBuiltinTopicDataDataReaderView_ptr _nil () { return 0; }
        static const char * _local_id;
        SubscriptionBuiltinTopicDataDataReaderView_ptr _this () { return this; }

        virtual DDS::Long read (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (SubscriptionBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (SubscriptionBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (SubscriptionBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (SubscriptionBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const SubscriptionBuiltinTopicData& instance) = 0;

    protected:
        SubscriptionBuiltinTopicDataDataReaderView () {};
        ~SubscriptionBuiltinTopicDataDataReaderView () {};
    private:
        SubscriptionBuiltinTopicDataDataReaderView (const SubscriptionBuiltinTopicDataDataReaderView &);
        SubscriptionBuiltinTopicDataDataReaderView & operator = (const SubscriptionBuiltinTopicDataDataReaderView &);
    };
    class CMParticipantBuiltinTopicDataTypeSupportInterface;

    typedef CMParticipantBuiltinTopicDataTypeSupportInterface * CMParticipantBuiltinTopicDataTypeSupportInterface_ptr;
    typedef DDS_DCPSInterface_var < CMParticipantBuiltinTopicDataTypeSupportInterface> CMParticipantBuiltinTopicDataTypeSupportInterface_var;
    typedef DDS_DCPSInterface_out < CMParticipantBuiltinTopicDataTypeSupportInterface> CMParticipantBuiltinTopicDataTypeSupportInterface_out;


    class CMParticipantBuiltinTopicDataDataWriter;

    typedef CMParticipantBuiltinTopicDataDataWriter * CMParticipantBuiltinTopicDataDataWriter_ptr;
    typedef DDS_DCPSInterface_var < CMParticipantBuiltinTopicDataDataWriter> CMParticipantBuiltinTopicDataDataWriter_var;
    typedef DDS_DCPSInterface_out < CMParticipantBuiltinTopicDataDataWriter> CMParticipantBuiltinTopicDataDataWriter_out;


    class CMParticipantBuiltinTopicDataDataReader;

    typedef CMParticipantBuiltinTopicDataDataReader * CMParticipantBuiltinTopicDataDataReader_ptr;
    typedef DDS_DCPSInterface_var < CMParticipantBuiltinTopicDataDataReader> CMParticipantBuiltinTopicDataDataReader_var;
    typedef DDS_DCPSInterface_out < CMParticipantBuiltinTopicDataDataReader> CMParticipantBuiltinTopicDataDataReader_out;


    class CMParticipantBuiltinTopicDataDataReaderView;

    typedef CMParticipantBuiltinTopicDataDataReaderView * CMParticipantBuiltinTopicDataDataReaderView_ptr;
    typedef DDS_DCPSInterface_var < CMParticipantBuiltinTopicDataDataReaderView> CMParticipantBuiltinTopicDataDataReaderView_var;
    typedef DDS_DCPSInterface_out < CMParticipantBuiltinTopicDataDataReaderView> CMParticipantBuiltinTopicDataDataReaderView_out;

    struct CMParticipantBuiltinTopicDataSeq_uniq_ {};
    typedef DDS_DCPSUVLSeq < CMParticipantBuiltinTopicData, struct CMParticipantBuiltinTopicDataSeq_uniq_> CMParticipantBuiltinTopicDataSeq;
    typedef DDS_DCPSSequence_var < CMParticipantBuiltinTopicDataSeq> CMParticipantBuiltinTopicDataSeq_var;
    typedef DDS_DCPSSequence_out < CMParticipantBuiltinTopicDataSeq> CMParticipantBuiltinTopicDataSeq_out;

    class  CMParticipantBuiltinTopicDataTypeSupportInterface :
        virtual public DDS::TypeSupport
    { 
    public:
        typedef CMParticipantBuiltinTopicDataTypeSupportInterface_ptr _ptr_type;
        typedef CMParticipantBuiltinTopicDataTypeSupportInterface_var _var_type;

        static CMParticipantBuiltinTopicDataTypeSupportInterface_ptr _duplicate (CMParticipantBuiltinTopicDataTypeSupportInterface_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMParticipantBuiltinTopicDataTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
        static CMParticipantBuiltinTopicDataTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMParticipantBuiltinTopicDataTypeSupportInterface_ptr _nil () { return 0; }
        static const char * _local_id;
        CMParticipantBuiltinTopicDataTypeSupportInterface_ptr _this () { return this; }


    protected:
        CMParticipantBuiltinTopicDataTypeSupportInterface () {};
        ~CMParticipantBuiltinTopicDataTypeSupportInterface () {};
    private:
        CMParticipantBuiltinTopicDataTypeSupportInterface (const CMParticipantBuiltinTopicDataTypeSupportInterface &);
        CMParticipantBuiltinTopicDataTypeSupportInterface & operator = (const CMParticipantBuiltinTopicDataTypeSupportInterface &);
    };

    class  CMParticipantBuiltinTopicDataDataWriter :
        virtual public DDS::DataWriter
    { 
    public:
        typedef CMParticipantBuiltinTopicDataDataWriter_ptr _ptr_type;
        typedef CMParticipantBuiltinTopicDataDataWriter_var _var_type;

        static CMParticipantBuiltinTopicDataDataWriter_ptr _duplicate (CMParticipantBuiltinTopicDataDataWriter_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMParticipantBuiltinTopicDataDataWriter_ptr _narrow (DDS::Object_ptr obj);
        static CMParticipantBuiltinTopicDataDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMParticipantBuiltinTopicDataDataWriter_ptr _nil () { return 0; }
        static const char * _local_id;
        CMParticipantBuiltinTopicDataDataWriter_ptr _this () { return this; }

        virtual DDS::LongLong register_instance (const CMParticipantBuiltinTopicData& instance_data) = 0;
        virtual DDS::LongLong register_instance_w_timestamp (const CMParticipantBuiltinTopicData& instance_data, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long unregister_instance (const CMParticipantBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long unregister_instance_w_timestamp (const CMParticipantBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long write (const CMParticipantBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long write_w_timestamp (const CMParticipantBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long dispose (const CMParticipantBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long dispose_w_timestamp (const CMParticipantBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long writedispose (const CMParticipantBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long writedispose_w_timestamp (const CMParticipantBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long get_key_value (CMParticipantBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMParticipantBuiltinTopicData& instance_data) = 0;

    protected:
        CMParticipantBuiltinTopicDataDataWriter () {};
        ~CMParticipantBuiltinTopicDataDataWriter () {};
    private:
        CMParticipantBuiltinTopicDataDataWriter (const CMParticipantBuiltinTopicDataDataWriter &);
        CMParticipantBuiltinTopicDataDataWriter & operator = (const CMParticipantBuiltinTopicDataDataWriter &);
    };

    class  CMParticipantBuiltinTopicDataDataReader :
        virtual public DDS::DataReader
    { 
    public:
        typedef CMParticipantBuiltinTopicDataDataReader_ptr _ptr_type;
        typedef CMParticipantBuiltinTopicDataDataReader_var _var_type;

        static CMParticipantBuiltinTopicDataDataReader_ptr _duplicate (CMParticipantBuiltinTopicDataDataReader_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMParticipantBuiltinTopicDataDataReader_ptr _narrow (DDS::Object_ptr obj);
        static CMParticipantBuiltinTopicDataDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMParticipantBuiltinTopicDataDataReader_ptr _nil () { return 0; }
        static const char * _local_id;
        CMParticipantBuiltinTopicDataDataReader_ptr _this () { return this; }

        virtual DDS::Long read (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (CMParticipantBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (CMParticipantBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (CMParticipantBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMParticipantBuiltinTopicData& instance) = 0;

    protected:
        CMParticipantBuiltinTopicDataDataReader () {};
        ~CMParticipantBuiltinTopicDataDataReader () {};
    private:
        CMParticipantBuiltinTopicDataDataReader (const CMParticipantBuiltinTopicDataDataReader &);
        CMParticipantBuiltinTopicDataDataReader & operator = (const CMParticipantBuiltinTopicDataDataReader &);
    };

    class  CMParticipantBuiltinTopicDataDataReaderView :
        virtual public DDS::DataReaderView
    { 
    public:
        typedef CMParticipantBuiltinTopicDataDataReaderView_ptr _ptr_type;
        typedef CMParticipantBuiltinTopicDataDataReaderView_var _var_type;

        static CMParticipantBuiltinTopicDataDataReaderView_ptr _duplicate (CMParticipantBuiltinTopicDataDataReaderView_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMParticipantBuiltinTopicDataDataReaderView_ptr _narrow (DDS::Object_ptr obj);
        static CMParticipantBuiltinTopicDataDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMParticipantBuiltinTopicDataDataReaderView_ptr _nil () { return 0; }
        static const char * _local_id;
        CMParticipantBuiltinTopicDataDataReaderView_ptr _this () { return this; }

        virtual DDS::Long read (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (CMParticipantBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (CMParticipantBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (CMParticipantBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (CMParticipantBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMParticipantBuiltinTopicData& instance) = 0;

    protected:
        CMParticipantBuiltinTopicDataDataReaderView () {};
        ~CMParticipantBuiltinTopicDataDataReaderView () {};
    private:
        CMParticipantBuiltinTopicDataDataReaderView (const CMParticipantBuiltinTopicDataDataReaderView &);
        CMParticipantBuiltinTopicDataDataReaderView & operator = (const CMParticipantBuiltinTopicDataDataReaderView &);
    };
    class CMPublisherBuiltinTopicDataTypeSupportInterface;

    typedef CMPublisherBuiltinTopicDataTypeSupportInterface * CMPublisherBuiltinTopicDataTypeSupportInterface_ptr;
    typedef DDS_DCPSInterface_var < CMPublisherBuiltinTopicDataTypeSupportInterface> CMPublisherBuiltinTopicDataTypeSupportInterface_var;
    typedef DDS_DCPSInterface_out < CMPublisherBuiltinTopicDataTypeSupportInterface> CMPublisherBuiltinTopicDataTypeSupportInterface_out;


    class CMPublisherBuiltinTopicDataDataWriter;

    typedef CMPublisherBuiltinTopicDataDataWriter * CMPublisherBuiltinTopicDataDataWriter_ptr;
    typedef DDS_DCPSInterface_var < CMPublisherBuiltinTopicDataDataWriter> CMPublisherBuiltinTopicDataDataWriter_var;
    typedef DDS_DCPSInterface_out < CMPublisherBuiltinTopicDataDataWriter> CMPublisherBuiltinTopicDataDataWriter_out;


    class CMPublisherBuiltinTopicDataDataReader;

    typedef CMPublisherBuiltinTopicDataDataReader * CMPublisherBuiltinTopicDataDataReader_ptr;
    typedef DDS_DCPSInterface_var < CMPublisherBuiltinTopicDataDataReader> CMPublisherBuiltinTopicDataDataReader_var;
    typedef DDS_DCPSInterface_out < CMPublisherBuiltinTopicDataDataReader> CMPublisherBuiltinTopicDataDataReader_out;


    class CMPublisherBuiltinTopicDataDataReaderView;

    typedef CMPublisherBuiltinTopicDataDataReaderView * CMPublisherBuiltinTopicDataDataReaderView_ptr;
    typedef DDS_DCPSInterface_var < CMPublisherBuiltinTopicDataDataReaderView> CMPublisherBuiltinTopicDataDataReaderView_var;
    typedef DDS_DCPSInterface_out < CMPublisherBuiltinTopicDataDataReaderView> CMPublisherBuiltinTopicDataDataReaderView_out;

    struct CMPublisherBuiltinTopicDataSeq_uniq_ {};
    typedef DDS_DCPSUVLSeq < CMPublisherBuiltinTopicData, struct CMPublisherBuiltinTopicDataSeq_uniq_> CMPublisherBuiltinTopicDataSeq;
    typedef DDS_DCPSSequence_var < CMPublisherBuiltinTopicDataSeq> CMPublisherBuiltinTopicDataSeq_var;
    typedef DDS_DCPSSequence_out < CMPublisherBuiltinTopicDataSeq> CMPublisherBuiltinTopicDataSeq_out;

    class  CMPublisherBuiltinTopicDataTypeSupportInterface :
        virtual public DDS::TypeSupport
    { 
    public:
        typedef CMPublisherBuiltinTopicDataTypeSupportInterface_ptr _ptr_type;
        typedef CMPublisherBuiltinTopicDataTypeSupportInterface_var _var_type;

        static CMPublisherBuiltinTopicDataTypeSupportInterface_ptr _duplicate (CMPublisherBuiltinTopicDataTypeSupportInterface_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMPublisherBuiltinTopicDataTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
        static CMPublisherBuiltinTopicDataTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMPublisherBuiltinTopicDataTypeSupportInterface_ptr _nil () { return 0; }
        static const char * _local_id;
        CMPublisherBuiltinTopicDataTypeSupportInterface_ptr _this () { return this; }


    protected:
        CMPublisherBuiltinTopicDataTypeSupportInterface () {};
        ~CMPublisherBuiltinTopicDataTypeSupportInterface () {};
    private:
        CMPublisherBuiltinTopicDataTypeSupportInterface (const CMPublisherBuiltinTopicDataTypeSupportInterface &);
        CMPublisherBuiltinTopicDataTypeSupportInterface & operator = (const CMPublisherBuiltinTopicDataTypeSupportInterface &);
    };

    class  CMPublisherBuiltinTopicDataDataWriter :
        virtual public DDS::DataWriter
    { 
    public:
        typedef CMPublisherBuiltinTopicDataDataWriter_ptr _ptr_type;
        typedef CMPublisherBuiltinTopicDataDataWriter_var _var_type;

        static CMPublisherBuiltinTopicDataDataWriter_ptr _duplicate (CMPublisherBuiltinTopicDataDataWriter_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMPublisherBuiltinTopicDataDataWriter_ptr _narrow (DDS::Object_ptr obj);
        static CMPublisherBuiltinTopicDataDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMPublisherBuiltinTopicDataDataWriter_ptr _nil () { return 0; }
        static const char * _local_id;
        CMPublisherBuiltinTopicDataDataWriter_ptr _this () { return this; }

        virtual DDS::LongLong register_instance (const CMPublisherBuiltinTopicData& instance_data) = 0;
        virtual DDS::LongLong register_instance_w_timestamp (const CMPublisherBuiltinTopicData& instance_data, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long unregister_instance (const CMPublisherBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long unregister_instance_w_timestamp (const CMPublisherBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long write (const CMPublisherBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long write_w_timestamp (const CMPublisherBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long dispose (const CMPublisherBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long dispose_w_timestamp (const CMPublisherBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long writedispose (const CMPublisherBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long writedispose_w_timestamp (const CMPublisherBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long get_key_value (CMPublisherBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMPublisherBuiltinTopicData& instance_data) = 0;

    protected:
        CMPublisherBuiltinTopicDataDataWriter () {};
        ~CMPublisherBuiltinTopicDataDataWriter () {};
    private:
        CMPublisherBuiltinTopicDataDataWriter (const CMPublisherBuiltinTopicDataDataWriter &);
        CMPublisherBuiltinTopicDataDataWriter & operator = (const CMPublisherBuiltinTopicDataDataWriter &);
    };

    class  CMPublisherBuiltinTopicDataDataReader :
        virtual public DDS::DataReader
    { 
    public:
        typedef CMPublisherBuiltinTopicDataDataReader_ptr _ptr_type;
        typedef CMPublisherBuiltinTopicDataDataReader_var _var_type;

        static CMPublisherBuiltinTopicDataDataReader_ptr _duplicate (CMPublisherBuiltinTopicDataDataReader_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMPublisherBuiltinTopicDataDataReader_ptr _narrow (DDS::Object_ptr obj);
        static CMPublisherBuiltinTopicDataDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMPublisherBuiltinTopicDataDataReader_ptr _nil () { return 0; }
        static const char * _local_id;
        CMPublisherBuiltinTopicDataDataReader_ptr _this () { return this; }

        virtual DDS::Long read (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (CMPublisherBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (CMPublisherBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (CMPublisherBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMPublisherBuiltinTopicData& instance) = 0;

    protected:
        CMPublisherBuiltinTopicDataDataReader () {};
        ~CMPublisherBuiltinTopicDataDataReader () {};
    private:
        CMPublisherBuiltinTopicDataDataReader (const CMPublisherBuiltinTopicDataDataReader &);
        CMPublisherBuiltinTopicDataDataReader & operator = (const CMPublisherBuiltinTopicDataDataReader &);
    };

    class  CMPublisherBuiltinTopicDataDataReaderView :
        virtual public DDS::DataReaderView
    { 
    public:
        typedef CMPublisherBuiltinTopicDataDataReaderView_ptr _ptr_type;
        typedef CMPublisherBuiltinTopicDataDataReaderView_var _var_type;

        static CMPublisherBuiltinTopicDataDataReaderView_ptr _duplicate (CMPublisherBuiltinTopicDataDataReaderView_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMPublisherBuiltinTopicDataDataReaderView_ptr _narrow (DDS::Object_ptr obj);
        static CMPublisherBuiltinTopicDataDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMPublisherBuiltinTopicDataDataReaderView_ptr _nil () { return 0; }
        static const char * _local_id;
        CMPublisherBuiltinTopicDataDataReaderView_ptr _this () { return this; }

        virtual DDS::Long read (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (CMPublisherBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (CMPublisherBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (CMPublisherBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (CMPublisherBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMPublisherBuiltinTopicData& instance) = 0;

    protected:
        CMPublisherBuiltinTopicDataDataReaderView () {};
        ~CMPublisherBuiltinTopicDataDataReaderView () {};
    private:
        CMPublisherBuiltinTopicDataDataReaderView (const CMPublisherBuiltinTopicDataDataReaderView &);
        CMPublisherBuiltinTopicDataDataReaderView & operator = (const CMPublisherBuiltinTopicDataDataReaderView &);
    };
    class CMSubscriberBuiltinTopicDataTypeSupportInterface;

    typedef CMSubscriberBuiltinTopicDataTypeSupportInterface * CMSubscriberBuiltinTopicDataTypeSupportInterface_ptr;
    typedef DDS_DCPSInterface_var < CMSubscriberBuiltinTopicDataTypeSupportInterface> CMSubscriberBuiltinTopicDataTypeSupportInterface_var;
    typedef DDS_DCPSInterface_out < CMSubscriberBuiltinTopicDataTypeSupportInterface> CMSubscriberBuiltinTopicDataTypeSupportInterface_out;


    class CMSubscriberBuiltinTopicDataDataWriter;

    typedef CMSubscriberBuiltinTopicDataDataWriter * CMSubscriberBuiltinTopicDataDataWriter_ptr;
    typedef DDS_DCPSInterface_var < CMSubscriberBuiltinTopicDataDataWriter> CMSubscriberBuiltinTopicDataDataWriter_var;
    typedef DDS_DCPSInterface_out < CMSubscriberBuiltinTopicDataDataWriter> CMSubscriberBuiltinTopicDataDataWriter_out;


    class CMSubscriberBuiltinTopicDataDataReader;

    typedef CMSubscriberBuiltinTopicDataDataReader * CMSubscriberBuiltinTopicDataDataReader_ptr;
    typedef DDS_DCPSInterface_var < CMSubscriberBuiltinTopicDataDataReader> CMSubscriberBuiltinTopicDataDataReader_var;
    typedef DDS_DCPSInterface_out < CMSubscriberBuiltinTopicDataDataReader> CMSubscriberBuiltinTopicDataDataReader_out;


    class CMSubscriberBuiltinTopicDataDataReaderView;

    typedef CMSubscriberBuiltinTopicDataDataReaderView * CMSubscriberBuiltinTopicDataDataReaderView_ptr;
    typedef DDS_DCPSInterface_var < CMSubscriberBuiltinTopicDataDataReaderView> CMSubscriberBuiltinTopicDataDataReaderView_var;
    typedef DDS_DCPSInterface_out < CMSubscriberBuiltinTopicDataDataReaderView> CMSubscriberBuiltinTopicDataDataReaderView_out;

    struct CMSubscriberBuiltinTopicDataSeq_uniq_ {};
    typedef DDS_DCPSUVLSeq < CMSubscriberBuiltinTopicData, struct CMSubscriberBuiltinTopicDataSeq_uniq_> CMSubscriberBuiltinTopicDataSeq;
    typedef DDS_DCPSSequence_var < CMSubscriberBuiltinTopicDataSeq> CMSubscriberBuiltinTopicDataSeq_var;
    typedef DDS_DCPSSequence_out < CMSubscriberBuiltinTopicDataSeq> CMSubscriberBuiltinTopicDataSeq_out;

    class  CMSubscriberBuiltinTopicDataTypeSupportInterface :
        virtual public DDS::TypeSupport
    { 
    public:
        typedef CMSubscriberBuiltinTopicDataTypeSupportInterface_ptr _ptr_type;
        typedef CMSubscriberBuiltinTopicDataTypeSupportInterface_var _var_type;

        static CMSubscriberBuiltinTopicDataTypeSupportInterface_ptr _duplicate (CMSubscriberBuiltinTopicDataTypeSupportInterface_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMSubscriberBuiltinTopicDataTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
        static CMSubscriberBuiltinTopicDataTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMSubscriberBuiltinTopicDataTypeSupportInterface_ptr _nil () { return 0; }
        static const char * _local_id;
        CMSubscriberBuiltinTopicDataTypeSupportInterface_ptr _this () { return this; }


    protected:
        CMSubscriberBuiltinTopicDataTypeSupportInterface () {};
        ~CMSubscriberBuiltinTopicDataTypeSupportInterface () {};
    private:
        CMSubscriberBuiltinTopicDataTypeSupportInterface (const CMSubscriberBuiltinTopicDataTypeSupportInterface &);
        CMSubscriberBuiltinTopicDataTypeSupportInterface & operator = (const CMSubscriberBuiltinTopicDataTypeSupportInterface &);
    };

    class  CMSubscriberBuiltinTopicDataDataWriter :
        virtual public DDS::DataWriter
    { 
    public:
        typedef CMSubscriberBuiltinTopicDataDataWriter_ptr _ptr_type;
        typedef CMSubscriberBuiltinTopicDataDataWriter_var _var_type;

        static CMSubscriberBuiltinTopicDataDataWriter_ptr _duplicate (CMSubscriberBuiltinTopicDataDataWriter_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMSubscriberBuiltinTopicDataDataWriter_ptr _narrow (DDS::Object_ptr obj);
        static CMSubscriberBuiltinTopicDataDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMSubscriberBuiltinTopicDataDataWriter_ptr _nil () { return 0; }
        static const char * _local_id;
        CMSubscriberBuiltinTopicDataDataWriter_ptr _this () { return this; }

        virtual DDS::LongLong register_instance (const CMSubscriberBuiltinTopicData& instance_data) = 0;
        virtual DDS::LongLong register_instance_w_timestamp (const CMSubscriberBuiltinTopicData& instance_data, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long unregister_instance (const CMSubscriberBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long unregister_instance_w_timestamp (const CMSubscriberBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long write (const CMSubscriberBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long write_w_timestamp (const CMSubscriberBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long dispose (const CMSubscriberBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long dispose_w_timestamp (const CMSubscriberBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long writedispose (const CMSubscriberBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long writedispose_w_timestamp (const CMSubscriberBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long get_key_value (CMSubscriberBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMSubscriberBuiltinTopicData& instance_data) = 0;

    protected:
        CMSubscriberBuiltinTopicDataDataWriter () {};
        ~CMSubscriberBuiltinTopicDataDataWriter () {};
    private:
        CMSubscriberBuiltinTopicDataDataWriter (const CMSubscriberBuiltinTopicDataDataWriter &);
        CMSubscriberBuiltinTopicDataDataWriter & operator = (const CMSubscriberBuiltinTopicDataDataWriter &);
    };

    class  CMSubscriberBuiltinTopicDataDataReader :
        virtual public DDS::DataReader
    { 
    public:
        typedef CMSubscriberBuiltinTopicDataDataReader_ptr _ptr_type;
        typedef CMSubscriberBuiltinTopicDataDataReader_var _var_type;

        static CMSubscriberBuiltinTopicDataDataReader_ptr _duplicate (CMSubscriberBuiltinTopicDataDataReader_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMSubscriberBuiltinTopicDataDataReader_ptr _narrow (DDS::Object_ptr obj);
        static CMSubscriberBuiltinTopicDataDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMSubscriberBuiltinTopicDataDataReader_ptr _nil () { return 0; }
        static const char * _local_id;
        CMSubscriberBuiltinTopicDataDataReader_ptr _this () { return this; }

        virtual DDS::Long read (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (CMSubscriberBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (CMSubscriberBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (CMSubscriberBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMSubscriberBuiltinTopicData& instance) = 0;

    protected:
        CMSubscriberBuiltinTopicDataDataReader () {};
        ~CMSubscriberBuiltinTopicDataDataReader () {};
    private:
        CMSubscriberBuiltinTopicDataDataReader (const CMSubscriberBuiltinTopicDataDataReader &);
        CMSubscriberBuiltinTopicDataDataReader & operator = (const CMSubscriberBuiltinTopicDataDataReader &);
    };

    class  CMSubscriberBuiltinTopicDataDataReaderView :
        virtual public DDS::DataReaderView
    { 
    public:
        typedef CMSubscriberBuiltinTopicDataDataReaderView_ptr _ptr_type;
        typedef CMSubscriberBuiltinTopicDataDataReaderView_var _var_type;

        static CMSubscriberBuiltinTopicDataDataReaderView_ptr _duplicate (CMSubscriberBuiltinTopicDataDataReaderView_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMSubscriberBuiltinTopicDataDataReaderView_ptr _narrow (DDS::Object_ptr obj);
        static CMSubscriberBuiltinTopicDataDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMSubscriberBuiltinTopicDataDataReaderView_ptr _nil () { return 0; }
        static const char * _local_id;
        CMSubscriberBuiltinTopicDataDataReaderView_ptr _this () { return this; }

        virtual DDS::Long read (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (CMSubscriberBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (CMSubscriberBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (CMSubscriberBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (CMSubscriberBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMSubscriberBuiltinTopicData& instance) = 0;

    protected:
        CMSubscriberBuiltinTopicDataDataReaderView () {};
        ~CMSubscriberBuiltinTopicDataDataReaderView () {};
    private:
        CMSubscriberBuiltinTopicDataDataReaderView (const CMSubscriberBuiltinTopicDataDataReaderView &);
        CMSubscriberBuiltinTopicDataDataReaderView & operator = (const CMSubscriberBuiltinTopicDataDataReaderView &);
    };
    class CMDataWriterBuiltinTopicDataTypeSupportInterface;

    typedef CMDataWriterBuiltinTopicDataTypeSupportInterface * CMDataWriterBuiltinTopicDataTypeSupportInterface_ptr;
    typedef DDS_DCPSInterface_var < CMDataWriterBuiltinTopicDataTypeSupportInterface> CMDataWriterBuiltinTopicDataTypeSupportInterface_var;
    typedef DDS_DCPSInterface_out < CMDataWriterBuiltinTopicDataTypeSupportInterface> CMDataWriterBuiltinTopicDataTypeSupportInterface_out;


    class CMDataWriterBuiltinTopicDataDataWriter;

    typedef CMDataWriterBuiltinTopicDataDataWriter * CMDataWriterBuiltinTopicDataDataWriter_ptr;
    typedef DDS_DCPSInterface_var < CMDataWriterBuiltinTopicDataDataWriter> CMDataWriterBuiltinTopicDataDataWriter_var;
    typedef DDS_DCPSInterface_out < CMDataWriterBuiltinTopicDataDataWriter> CMDataWriterBuiltinTopicDataDataWriter_out;


    class CMDataWriterBuiltinTopicDataDataReader;

    typedef CMDataWriterBuiltinTopicDataDataReader * CMDataWriterBuiltinTopicDataDataReader_ptr;
    typedef DDS_DCPSInterface_var < CMDataWriterBuiltinTopicDataDataReader> CMDataWriterBuiltinTopicDataDataReader_var;
    typedef DDS_DCPSInterface_out < CMDataWriterBuiltinTopicDataDataReader> CMDataWriterBuiltinTopicDataDataReader_out;


    class CMDataWriterBuiltinTopicDataDataReaderView;

    typedef CMDataWriterBuiltinTopicDataDataReaderView * CMDataWriterBuiltinTopicDataDataReaderView_ptr;
    typedef DDS_DCPSInterface_var < CMDataWriterBuiltinTopicDataDataReaderView> CMDataWriterBuiltinTopicDataDataReaderView_var;
    typedef DDS_DCPSInterface_out < CMDataWriterBuiltinTopicDataDataReaderView> CMDataWriterBuiltinTopicDataDataReaderView_out;

    struct CMDataWriterBuiltinTopicDataSeq_uniq_ {};
    typedef DDS_DCPSUVLSeq < CMDataWriterBuiltinTopicData, struct CMDataWriterBuiltinTopicDataSeq_uniq_> CMDataWriterBuiltinTopicDataSeq;
    typedef DDS_DCPSSequence_var < CMDataWriterBuiltinTopicDataSeq> CMDataWriterBuiltinTopicDataSeq_var;
    typedef DDS_DCPSSequence_out < CMDataWriterBuiltinTopicDataSeq> CMDataWriterBuiltinTopicDataSeq_out;

    class  CMDataWriterBuiltinTopicDataTypeSupportInterface :
        virtual public DDS::TypeSupport
    { 
    public:
        typedef CMDataWriterBuiltinTopicDataTypeSupportInterface_ptr _ptr_type;
        typedef CMDataWriterBuiltinTopicDataTypeSupportInterface_var _var_type;

        static CMDataWriterBuiltinTopicDataTypeSupportInterface_ptr _duplicate (CMDataWriterBuiltinTopicDataTypeSupportInterface_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMDataWriterBuiltinTopicDataTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
        static CMDataWriterBuiltinTopicDataTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMDataWriterBuiltinTopicDataTypeSupportInterface_ptr _nil () { return 0; }
        static const char * _local_id;
        CMDataWriterBuiltinTopicDataTypeSupportInterface_ptr _this () { return this; }


    protected:
        CMDataWriterBuiltinTopicDataTypeSupportInterface () {};
        ~CMDataWriterBuiltinTopicDataTypeSupportInterface () {};
    private:
        CMDataWriterBuiltinTopicDataTypeSupportInterface (const CMDataWriterBuiltinTopicDataTypeSupportInterface &);
        CMDataWriterBuiltinTopicDataTypeSupportInterface & operator = (const CMDataWriterBuiltinTopicDataTypeSupportInterface &);
    };

    class  CMDataWriterBuiltinTopicDataDataWriter :
        virtual public DDS::DataWriter
    { 
    public:
        typedef CMDataWriterBuiltinTopicDataDataWriter_ptr _ptr_type;
        typedef CMDataWriterBuiltinTopicDataDataWriter_var _var_type;

        static CMDataWriterBuiltinTopicDataDataWriter_ptr _duplicate (CMDataWriterBuiltinTopicDataDataWriter_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMDataWriterBuiltinTopicDataDataWriter_ptr _narrow (DDS::Object_ptr obj);
        static CMDataWriterBuiltinTopicDataDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMDataWriterBuiltinTopicDataDataWriter_ptr _nil () { return 0; }
        static const char * _local_id;
        CMDataWriterBuiltinTopicDataDataWriter_ptr _this () { return this; }

        virtual DDS::LongLong register_instance (const CMDataWriterBuiltinTopicData& instance_data) = 0;
        virtual DDS::LongLong register_instance_w_timestamp (const CMDataWriterBuiltinTopicData& instance_data, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long unregister_instance (const CMDataWriterBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long unregister_instance_w_timestamp (const CMDataWriterBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long write (const CMDataWriterBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long write_w_timestamp (const CMDataWriterBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long dispose (const CMDataWriterBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long dispose_w_timestamp (const CMDataWriterBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long writedispose (const CMDataWriterBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long writedispose_w_timestamp (const CMDataWriterBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long get_key_value (CMDataWriterBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMDataWriterBuiltinTopicData& instance_data) = 0;

    protected:
        CMDataWriterBuiltinTopicDataDataWriter () {};
        ~CMDataWriterBuiltinTopicDataDataWriter () {};
    private:
        CMDataWriterBuiltinTopicDataDataWriter (const CMDataWriterBuiltinTopicDataDataWriter &);
        CMDataWriterBuiltinTopicDataDataWriter & operator = (const CMDataWriterBuiltinTopicDataDataWriter &);
    };

    class  CMDataWriterBuiltinTopicDataDataReader :
        virtual public DDS::DataReader
    { 
    public:
        typedef CMDataWriterBuiltinTopicDataDataReader_ptr _ptr_type;
        typedef CMDataWriterBuiltinTopicDataDataReader_var _var_type;

        static CMDataWriterBuiltinTopicDataDataReader_ptr _duplicate (CMDataWriterBuiltinTopicDataDataReader_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMDataWriterBuiltinTopicDataDataReader_ptr _narrow (DDS::Object_ptr obj);
        static CMDataWriterBuiltinTopicDataDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMDataWriterBuiltinTopicDataDataReader_ptr _nil () { return 0; }
        static const char * _local_id;
        CMDataWriterBuiltinTopicDataDataReader_ptr _this () { return this; }

        virtual DDS::Long read (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (CMDataWriterBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (CMDataWriterBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (CMDataWriterBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMDataWriterBuiltinTopicData& instance) = 0;

    protected:
        CMDataWriterBuiltinTopicDataDataReader () {};
        ~CMDataWriterBuiltinTopicDataDataReader () {};
    private:
        CMDataWriterBuiltinTopicDataDataReader (const CMDataWriterBuiltinTopicDataDataReader &);
        CMDataWriterBuiltinTopicDataDataReader & operator = (const CMDataWriterBuiltinTopicDataDataReader &);
    };

    class  CMDataWriterBuiltinTopicDataDataReaderView :
        virtual public DDS::DataReaderView
    { 
    public:
        typedef CMDataWriterBuiltinTopicDataDataReaderView_ptr _ptr_type;
        typedef CMDataWriterBuiltinTopicDataDataReaderView_var _var_type;

        static CMDataWriterBuiltinTopicDataDataReaderView_ptr _duplicate (CMDataWriterBuiltinTopicDataDataReaderView_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMDataWriterBuiltinTopicDataDataReaderView_ptr _narrow (DDS::Object_ptr obj);
        static CMDataWriterBuiltinTopicDataDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMDataWriterBuiltinTopicDataDataReaderView_ptr _nil () { return 0; }
        static const char * _local_id;
        CMDataWriterBuiltinTopicDataDataReaderView_ptr _this () { return this; }

        virtual DDS::Long read (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (CMDataWriterBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (CMDataWriterBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (CMDataWriterBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (CMDataWriterBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMDataWriterBuiltinTopicData& instance) = 0;

    protected:
        CMDataWriterBuiltinTopicDataDataReaderView () {};
        ~CMDataWriterBuiltinTopicDataDataReaderView () {};
    private:
        CMDataWriterBuiltinTopicDataDataReaderView (const CMDataWriterBuiltinTopicDataDataReaderView &);
        CMDataWriterBuiltinTopicDataDataReaderView & operator = (const CMDataWriterBuiltinTopicDataDataReaderView &);
    };
    class CMDataReaderBuiltinTopicDataTypeSupportInterface;

    typedef CMDataReaderBuiltinTopicDataTypeSupportInterface * CMDataReaderBuiltinTopicDataTypeSupportInterface_ptr;
    typedef DDS_DCPSInterface_var < CMDataReaderBuiltinTopicDataTypeSupportInterface> CMDataReaderBuiltinTopicDataTypeSupportInterface_var;
    typedef DDS_DCPSInterface_out < CMDataReaderBuiltinTopicDataTypeSupportInterface> CMDataReaderBuiltinTopicDataTypeSupportInterface_out;


    class CMDataReaderBuiltinTopicDataDataWriter;

    typedef CMDataReaderBuiltinTopicDataDataWriter * CMDataReaderBuiltinTopicDataDataWriter_ptr;
    typedef DDS_DCPSInterface_var < CMDataReaderBuiltinTopicDataDataWriter> CMDataReaderBuiltinTopicDataDataWriter_var;
    typedef DDS_DCPSInterface_out < CMDataReaderBuiltinTopicDataDataWriter> CMDataReaderBuiltinTopicDataDataWriter_out;


    class CMDataReaderBuiltinTopicDataDataReader;

    typedef CMDataReaderBuiltinTopicDataDataReader * CMDataReaderBuiltinTopicDataDataReader_ptr;
    typedef DDS_DCPSInterface_var < CMDataReaderBuiltinTopicDataDataReader> CMDataReaderBuiltinTopicDataDataReader_var;
    typedef DDS_DCPSInterface_out < CMDataReaderBuiltinTopicDataDataReader> CMDataReaderBuiltinTopicDataDataReader_out;


    class CMDataReaderBuiltinTopicDataDataReaderView;

    typedef CMDataReaderBuiltinTopicDataDataReaderView * CMDataReaderBuiltinTopicDataDataReaderView_ptr;
    typedef DDS_DCPSInterface_var < CMDataReaderBuiltinTopicDataDataReaderView> CMDataReaderBuiltinTopicDataDataReaderView_var;
    typedef DDS_DCPSInterface_out < CMDataReaderBuiltinTopicDataDataReaderView> CMDataReaderBuiltinTopicDataDataReaderView_out;

    struct CMDataReaderBuiltinTopicDataSeq_uniq_ {};
    typedef DDS_DCPSUVLSeq < CMDataReaderBuiltinTopicData, struct CMDataReaderBuiltinTopicDataSeq_uniq_> CMDataReaderBuiltinTopicDataSeq;
    typedef DDS_DCPSSequence_var < CMDataReaderBuiltinTopicDataSeq> CMDataReaderBuiltinTopicDataSeq_var;
    typedef DDS_DCPSSequence_out < CMDataReaderBuiltinTopicDataSeq> CMDataReaderBuiltinTopicDataSeq_out;

    class  CMDataReaderBuiltinTopicDataTypeSupportInterface :
        virtual public DDS::TypeSupport
    { 
    public:
        typedef CMDataReaderBuiltinTopicDataTypeSupportInterface_ptr _ptr_type;
        typedef CMDataReaderBuiltinTopicDataTypeSupportInterface_var _var_type;

        static CMDataReaderBuiltinTopicDataTypeSupportInterface_ptr _duplicate (CMDataReaderBuiltinTopicDataTypeSupportInterface_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMDataReaderBuiltinTopicDataTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
        static CMDataReaderBuiltinTopicDataTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMDataReaderBuiltinTopicDataTypeSupportInterface_ptr _nil () { return 0; }
        static const char * _local_id;
        CMDataReaderBuiltinTopicDataTypeSupportInterface_ptr _this () { return this; }


    protected:
        CMDataReaderBuiltinTopicDataTypeSupportInterface () {};
        ~CMDataReaderBuiltinTopicDataTypeSupportInterface () {};
    private:
        CMDataReaderBuiltinTopicDataTypeSupportInterface (const CMDataReaderBuiltinTopicDataTypeSupportInterface &);
        CMDataReaderBuiltinTopicDataTypeSupportInterface & operator = (const CMDataReaderBuiltinTopicDataTypeSupportInterface &);
    };

    class  CMDataReaderBuiltinTopicDataDataWriter :
        virtual public DDS::DataWriter
    { 
    public:
        typedef CMDataReaderBuiltinTopicDataDataWriter_ptr _ptr_type;
        typedef CMDataReaderBuiltinTopicDataDataWriter_var _var_type;

        static CMDataReaderBuiltinTopicDataDataWriter_ptr _duplicate (CMDataReaderBuiltinTopicDataDataWriter_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMDataReaderBuiltinTopicDataDataWriter_ptr _narrow (DDS::Object_ptr obj);
        static CMDataReaderBuiltinTopicDataDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMDataReaderBuiltinTopicDataDataWriter_ptr _nil () { return 0; }
        static const char * _local_id;
        CMDataReaderBuiltinTopicDataDataWriter_ptr _this () { return this; }

        virtual DDS::LongLong register_instance (const CMDataReaderBuiltinTopicData& instance_data) = 0;
        virtual DDS::LongLong register_instance_w_timestamp (const CMDataReaderBuiltinTopicData& instance_data, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long unregister_instance (const CMDataReaderBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long unregister_instance_w_timestamp (const CMDataReaderBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long write (const CMDataReaderBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long write_w_timestamp (const CMDataReaderBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long dispose (const CMDataReaderBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long dispose_w_timestamp (const CMDataReaderBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long writedispose (const CMDataReaderBuiltinTopicData& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long writedispose_w_timestamp (const CMDataReaderBuiltinTopicData& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long get_key_value (CMDataReaderBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMDataReaderBuiltinTopicData& instance_data) = 0;

    protected:
        CMDataReaderBuiltinTopicDataDataWriter () {};
        ~CMDataReaderBuiltinTopicDataDataWriter () {};
    private:
        CMDataReaderBuiltinTopicDataDataWriter (const CMDataReaderBuiltinTopicDataDataWriter &);
        CMDataReaderBuiltinTopicDataDataWriter & operator = (const CMDataReaderBuiltinTopicDataDataWriter &);
    };

    class  CMDataReaderBuiltinTopicDataDataReader :
        virtual public DDS::DataReader
    { 
    public:
        typedef CMDataReaderBuiltinTopicDataDataReader_ptr _ptr_type;
        typedef CMDataReaderBuiltinTopicDataDataReader_var _var_type;

        static CMDataReaderBuiltinTopicDataDataReader_ptr _duplicate (CMDataReaderBuiltinTopicDataDataReader_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMDataReaderBuiltinTopicDataDataReader_ptr _narrow (DDS::Object_ptr obj);
        static CMDataReaderBuiltinTopicDataDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMDataReaderBuiltinTopicDataDataReader_ptr _nil () { return 0; }
        static const char * _local_id;
        CMDataReaderBuiltinTopicDataDataReader_ptr _this () { return this; }

        virtual DDS::Long read (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (CMDataReaderBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (CMDataReaderBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (CMDataReaderBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMDataReaderBuiltinTopicData& instance) = 0;

    protected:
        CMDataReaderBuiltinTopicDataDataReader () {};
        ~CMDataReaderBuiltinTopicDataDataReader () {};
    private:
        CMDataReaderBuiltinTopicDataDataReader (const CMDataReaderBuiltinTopicDataDataReader &);
        CMDataReaderBuiltinTopicDataDataReader & operator = (const CMDataReaderBuiltinTopicDataDataReader &);
    };

    class  CMDataReaderBuiltinTopicDataDataReaderView :
        virtual public DDS::DataReaderView
    { 
    public:
        typedef CMDataReaderBuiltinTopicDataDataReaderView_ptr _ptr_type;
        typedef CMDataReaderBuiltinTopicDataDataReaderView_var _var_type;

        static CMDataReaderBuiltinTopicDataDataReaderView_ptr _duplicate (CMDataReaderBuiltinTopicDataDataReaderView_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CMDataReaderBuiltinTopicDataDataReaderView_ptr _narrow (DDS::Object_ptr obj);
        static CMDataReaderBuiltinTopicDataDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CMDataReaderBuiltinTopicDataDataReaderView_ptr _nil () { return 0; }
        static const char * _local_id;
        CMDataReaderBuiltinTopicDataDataReaderView_ptr _this () { return this; }

        virtual DDS::Long read (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (CMDataReaderBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (CMDataReaderBuiltinTopicData& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (CMDataReaderBuiltinTopicDataSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (CMDataReaderBuiltinTopicData& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CMDataReaderBuiltinTopicData& instance) = 0;

    protected:
        CMDataReaderBuiltinTopicDataDataReaderView () {};
        ~CMDataReaderBuiltinTopicDataDataReaderView () {};
    private:
        CMDataReaderBuiltinTopicDataDataReaderView (const CMDataReaderBuiltinTopicDataDataReaderView &);
        CMDataReaderBuiltinTopicDataDataReaderView & operator = (const CMDataReaderBuiltinTopicDataDataReaderView &);
    };
}

#endif
