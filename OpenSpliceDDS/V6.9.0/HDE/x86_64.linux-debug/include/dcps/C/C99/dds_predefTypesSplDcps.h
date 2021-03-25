#ifndef dds_predefTypesSPLTYPES_H
#define dds_predefTypesSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "dds_predefTypesDcps.h"


extern c_metaObject __dds_predefTypes_DDS__load (c_base base);

typedef c_sequence _DDS_ByteSeq;
extern c_metaObject __DDS_ByteSeq__load (c_base base);
extern  v_copyin_result __DDS_ByteSeq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_ByteSeq__copyOut(const void *_from, void *_to);

extern const char *DDS_String_metaDescriptor[];
extern const int DDS_String_metaDescriptorArrLength;
extern const int DDS_String_metaDescriptorLength;
extern c_metaObject __DDS_String__load (c_base base);
struct _DDS_String ;
extern  v_copyin_result __DDS_String__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_String__copyOut(const void *_from, void *_to);
struct _DDS_String {
    c_string value;
};

extern const char *DDS_KeyedString_metaDescriptor[];
extern const int DDS_KeyedString_metaDescriptorArrLength;
extern const int DDS_KeyedString_metaDescriptorLength;
extern c_metaObject __DDS_KeyedString__load (c_base base);
struct _DDS_KeyedString ;
extern  v_copyin_result __DDS_KeyedString__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_KeyedString__copyOut(const void *_from, void *_to);
struct _DDS_KeyedString {
    c_string key;
    c_string value;
};

extern const char *DDS_Bytes_metaDescriptor[];
extern const int DDS_Bytes_metaDescriptorArrLength;
extern const int DDS_Bytes_metaDescriptorLength;
extern c_metaObject __DDS_Bytes__load (c_base base);
struct _DDS_Bytes ;
extern  v_copyin_result __DDS_Bytes__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_Bytes__copyOut(const void *_from, void *_to);
struct _DDS_Bytes {
    _DDS_ByteSeq value;
};

extern const char *DDS_KeyedBytes_metaDescriptor[];
extern const int DDS_KeyedBytes_metaDescriptorArrLength;
extern const int DDS_KeyedBytes_metaDescriptorLength;
extern c_metaObject __DDS_KeyedBytes__load (c_base base);
struct _DDS_KeyedBytes ;
extern  v_copyin_result __DDS_KeyedBytes__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_KeyedBytes__copyOut(const void *_from, void *_to);
struct _DDS_KeyedBytes {
    c_string key;
    _DDS_ByteSeq value;
};

#undef OS_API
#endif
