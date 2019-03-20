#ifndef DDS_CDRBLOBSPLTYPES_H
#define DDS_CDRBLOBSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_dds_cdrBlob.h"


extern c_metaObject __dds_cdrBlob_DDS__load (c_base base);

extern c_metaObject __DDS_CDRBlob__load (c_base base);
typedef c_sequence _DDS_CDRBlob;

extern const char *DDS_CDRSample_metaDescriptor[];
extern const int DDS_CDRSample_metaDescriptorArrLength;
extern const int DDS_CDRSample_metaDescriptorLength;
extern c_metaObject __DDS_CDRSample__load (c_base base);
struct _DDS_CDRSample ;
extern  v_copyin_result __DDS_CDRSample__copyIn(c_base base, const struct DDS::CDRSample *from, struct _DDS_CDRSample *to);
extern  void __DDS_CDRSample__copyOut(const void *_from, void *_to);
struct _DDS_CDRSample {
    _DDS_CDRBlob blob;
};

#undef OS_API
#endif
