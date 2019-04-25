//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: dds_cdrBlobDcps.h
//  Source: dds_cdrBlobDcps.idl
//  Generated: Wed Nov 28 07:49:47 2018
//  OpenSplice 6.9.181127OSS
//  
//******************************************************************
#ifndef _DDS_CDRBLOBDCPS_H_
#define _DDS_CDRBLOBDCPS_H_

#include "sacpp_mapping.h"
#include "dds_cdrBlob.h"
#include "dds_dcps.h"


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
   class CDRSampleTypeSupportInterface
   :
      virtual public TypeSupport
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

   class CDRSampleDataWriter
   :
      virtual public DataWriter
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

      virtual LongLong register_instance (const CDRSample& instance_data) = 0;
      virtual LongLong register_instance_w_timestamp (const CDRSample& instance_data, const Time_t& source_timestamp) = 0;
      virtual Long unregister_instance (const CDRSample& instance_data, LongLong handle) = 0;
      virtual Long unregister_instance_w_timestamp (const CDRSample& instance_data, LongLong handle, const Time_t& source_timestamp) = 0;
      virtual Long write (const CDRSample& instance_data, LongLong handle) = 0;
      virtual Long write_w_timestamp (const CDRSample& instance_data, LongLong handle, const Time_t& source_timestamp) = 0;
      virtual Long dispose (const CDRSample& instance_data, LongLong handle) = 0;
      virtual Long dispose_w_timestamp (const CDRSample& instance_data, LongLong handle, const Time_t& source_timestamp) = 0;
      virtual Long writedispose (const CDRSample& instance_data, LongLong handle) = 0;
      virtual Long writedispose_w_timestamp (const CDRSample& instance_data, LongLong handle, const Time_t& source_timestamp) = 0;
      virtual Long get_key_value (CDRSample& key_holder, LongLong handle) = 0;
      virtual LongLong lookup_instance (const CDRSample& instance_data) = 0;

   protected:
      CDRSampleDataWriter () {};
      ~CDRSampleDataWriter () {};
   private:
      CDRSampleDataWriter (const CDRSampleDataWriter &);
      CDRSampleDataWriter & operator = (const CDRSampleDataWriter &);
   };

   class CDRSampleDataReader
   :
      virtual public DataReader
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

      virtual Long read (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ULong sample_states, ULong view_states, ULong instance_states) = 0;
      virtual Long take (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ULong sample_states, ULong view_states, ULong instance_states) = 0;
      virtual Long read_w_condition (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ReadCondition_ptr a_condition) = 0;
      virtual Long take_w_condition (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ReadCondition_ptr a_condition) = 0;
      virtual Long read_next_sample (CDRSample& received_data, SampleInfo& sample_info) = 0;
      virtual Long take_next_sample (CDRSample& received_data, SampleInfo& sample_info) = 0;
      virtual Long read_instance (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
      virtual Long take_instance (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
      virtual Long read_next_instance (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
      virtual Long take_next_instance (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
      virtual Long read_next_instance_w_condition (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ReadCondition_ptr a_condition) = 0;
      virtual Long take_next_instance_w_condition (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ReadCondition_ptr a_condition) = 0;
      virtual Long return_loan (CDRSampleSeq& received_data, SampleInfoSeq& info_seq) = 0;
      virtual Long get_key_value (CDRSample& key_holder, LongLong handle) = 0;
      virtual LongLong lookup_instance (const CDRSample& instance) = 0;

   protected:
      CDRSampleDataReader () {};
      ~CDRSampleDataReader () {};
   private:
      CDRSampleDataReader (const CDRSampleDataReader &);
      CDRSampleDataReader & operator = (const CDRSampleDataReader &);
   };

   class CDRSampleDataReaderView
   :
      virtual public DataReaderView
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

      virtual Long read (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ULong sample_states, ULong view_states, ULong instance_states) = 0;
      virtual Long take (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ULong sample_states, ULong view_states, ULong instance_states) = 0;
      virtual Long read_w_condition (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ReadCondition_ptr a_condition) = 0;
      virtual Long take_w_condition (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, ReadCondition_ptr a_condition) = 0;
      virtual Long read_next_sample (CDRSample& received_data, SampleInfo& sample_info) = 0;
      virtual Long take_next_sample (CDRSample& received_data, SampleInfo& sample_info) = 0;
      virtual Long read_instance (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
      virtual Long take_instance (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
      virtual Long read_next_instance (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
      virtual Long take_next_instance (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ULong sample_states, ULong view_states, ULong instance_states) = 0;
      virtual Long read_next_instance_w_condition (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ReadCondition_ptr a_condition) = 0;
      virtual Long take_next_instance_w_condition (CDRSampleSeq& received_data, SampleInfoSeq& info_seq, Long max_samples, LongLong a_handle, ReadCondition_ptr a_condition) = 0;
      virtual Long return_loan (CDRSampleSeq& received_data, SampleInfoSeq& info_seq) = 0;
      virtual Long get_key_value (CDRSample& key_holder, LongLong handle) = 0;
      virtual LongLong lookup_instance (const CDRSample& instance) = 0;

   protected:
      CDRSampleDataReaderView () {};
      ~CDRSampleDataReaderView () {};
   private:
      CDRSampleDataReaderView (const CDRSampleDataReaderView &);
      CDRSampleDataReaderView & operator = (const CDRSampleDataReaderView &);
   };

}




#endif
