#ifndef _dds_cdrBlob_H_
#define _dds_cdrBlob_H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace DDS
{
    struct CDRBlob_uniq_{};
    typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct CDRBlob_uniq_ > CDRBlob;
    typedef DDS_DCPSSequence_var< CDRBlob > CDRBlob_var;
    typedef DDS_DCPSSequence_out< CDRBlob > CDRBlob_out;

    struct  CDRSample
    {
        ::DDS::CDRBlob blob;
    };

    typedef DDS_DCPSStruct_var<CDRSample> CDRSample_var;
    typedef DDS_DCPSStruct_out < CDRSample> CDRSample_out;

}

#endif /* _dds_cdrBlob_H_ */
