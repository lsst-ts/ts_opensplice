#ifndef _dds_cdrBlobDCPS_H_
#define _dds_cdrBlobDCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "dds_cdrBlob.h"


namespace DDS
{
    class CDRSampleTypeSupportInterface;

    typedef CDRSampleTypeSupportInterface * CDRSampleTypeSupportInterface_ptr;
    typedef DDS_DCPSInterface_var < CDRSampleTypeSupportInterface> CDRSampleTypeSupportInterface_var;
    typedef DDS_DCPSInterface_out < CDRSampleTypeSupportInterface> CDRSampleTypeSupportInterface_out;


    class CDRSampleDataWriter;

    typedef CDRSampleDataWriter * CDRSampleDataWriter_ptr;
    typedef DDS_DCPSInterface_var < CDRSampleDataWriter> CDRSampleDataWriter_var;
    typedef DDS_DCPSInterface_out < CDRSampleDataWriter> CDRSampleDataWriter_out;


    class CDRSampleDataReader;

    typedef CDRSampleDataReader * CDRSampleDataReader_ptr;
    typedef DDS_DCPSInterface_var < CDRSampleDataReader> CDRSampleDataReader_var;
    typedef DDS_DCPSInterface_out < CDRSampleDataReader> CDRSampleDataReader_out;


    class CDRSampleDataReaderView;

    typedef CDRSampleDataReaderView * CDRSampleDataReaderView_ptr;
    typedef DDS_DCPSInterface_var < CDRSampleDataReaderView> CDRSampleDataReaderView_var;
    typedef DDS_DCPSInterface_out < CDRSampleDataReaderView> CDRSampleDataReaderView_out;

    struct CDRSampleSeq_uniq_ {};
    typedef DDS_DCPSUVLSeq < CDRSample, struct CDRSampleSeq_uniq_> CDRSampleSeq;
    typedef DDS_DCPSSequence_var < CDRSampleSeq> CDRSampleSeq_var;
    typedef DDS_DCPSSequence_out < CDRSampleSeq> CDRSampleSeq_out;

    class  CDRSampleTypeSupportInterface :
        virtual public DDS::TypeSupport
    { 
    public:
        typedef CDRSampleTypeSupportInterface_ptr _ptr_type;
        typedef CDRSampleTypeSupportInterface_var _var_type;

        static CDRSampleTypeSupportInterface_ptr _duplicate (CDRSampleTypeSupportInterface_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CDRSampleTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
        static CDRSampleTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CDRSampleTypeSupportInterface_ptr _nil () { return 0; }
        static const char * _local_id;
        CDRSampleTypeSupportInterface_ptr _this () { return this; }


    protected:
        CDRSampleTypeSupportInterface () {};
        ~CDRSampleTypeSupportInterface () {};
    private:
        CDRSampleTypeSupportInterface (const CDRSampleTypeSupportInterface &);
        CDRSampleTypeSupportInterface & operator = (const CDRSampleTypeSupportInterface &);
    };

    class  CDRSampleDataWriter :
        virtual public DDS::DataWriter
    { 
    public:
        typedef CDRSampleDataWriter_ptr _ptr_type;
        typedef CDRSampleDataWriter_var _var_type;

        static CDRSampleDataWriter_ptr _duplicate (CDRSampleDataWriter_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CDRSampleDataWriter_ptr _narrow (DDS::Object_ptr obj);
        static CDRSampleDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CDRSampleDataWriter_ptr _nil () { return 0; }
        static const char * _local_id;
        CDRSampleDataWriter_ptr _this () { return this; }

        virtual DDS::LongLong register_instance (const CDRSample& instance_data) = 0;
        virtual DDS::LongLong register_instance_w_timestamp (const CDRSample& instance_data, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long unregister_instance (const CDRSample& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long unregister_instance_w_timestamp (const CDRSample& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long write (const CDRSample& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long write_w_timestamp (const CDRSample& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long dispose (const CDRSample& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long dispose_w_timestamp (const CDRSample& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long writedispose (const CDRSample& instance_data, DDS::LongLong handle) = 0;
        virtual DDS::Long writedispose_w_timestamp (const CDRSample& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
        virtual DDS::Long get_key_value (CDRSample& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CDRSample& instance_data) = 0;

    protected:
        CDRSampleDataWriter () {};
        ~CDRSampleDataWriter () {};
    private:
        CDRSampleDataWriter (const CDRSampleDataWriter &);
        CDRSampleDataWriter & operator = (const CDRSampleDataWriter &);
    };

    class  CDRSampleDataReader :
        virtual public DDS::DataReader
    { 
    public:
        typedef CDRSampleDataReader_ptr _ptr_type;
        typedef CDRSampleDataReader_var _var_type;

        static CDRSampleDataReader_ptr _duplicate (CDRSampleDataReader_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CDRSampleDataReader_ptr _narrow (DDS::Object_ptr obj);
        static CDRSampleDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CDRSampleDataReader_ptr _nil () { return 0; }
        static const char * _local_id;
        CDRSampleDataReader_ptr _this () { return this; }

        virtual DDS::Long read (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (CDRSample& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (CDRSample& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (CDRSample& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CDRSample& instance) = 0;

    protected:
        CDRSampleDataReader () {};
        ~CDRSampleDataReader () {};
    private:
        CDRSampleDataReader (const CDRSampleDataReader &);
        CDRSampleDataReader & operator = (const CDRSampleDataReader &);
    };

    class  CDRSampleDataReaderView :
        virtual public DDS::DataReaderView
    { 
    public:
        typedef CDRSampleDataReaderView_ptr _ptr_type;
        typedef CDRSampleDataReaderView_var _var_type;

        static CDRSampleDataReaderView_ptr _duplicate (CDRSampleDataReaderView_ptr obj);
        DDS::Boolean _local_is_a (const char * id);

        static CDRSampleDataReaderView_ptr _narrow (DDS::Object_ptr obj);
        static CDRSampleDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
        static CDRSampleDataReaderView_ptr _nil () { return 0; }
        static const char * _local_id;
        CDRSampleDataReaderView_ptr _this () { return this; }

        virtual DDS::Long read (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_w_condition (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_w_condition (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long read_next_sample (CDRSample& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long take_next_sample (CDRSample& received_data, DDS::SampleInfo& sample_info) = 0;
        virtual DDS::Long read_instance (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_instance (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long take_next_instance (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
        virtual DDS::Long read_next_instance_w_condition (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long take_next_instance_w_condition (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
        virtual DDS::Long return_loan (CDRSampleSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
        virtual DDS::Long get_key_value (CDRSample& key_holder, DDS::LongLong handle) = 0;
        virtual DDS::LongLong lookup_instance (const CDRSample& instance) = 0;

    protected:
        CDRSampleDataReaderView () {};
        ~CDRSampleDataReaderView () {};
    private:
        CDRSampleDataReaderView (const CDRSampleDataReaderView &);
        CDRSampleDataReaderView & operator = (const CDRSampleDataReaderView &);
    };
}

#endif
