#ifndef dds_IoTDataSPLTYPES_H
#define dds_IoTDataSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "dds_IoTDataDcps.h"


extern c_metaObject __dds_IoTData_DDS__load (c_base base);

extern c_metaObject __dds_IoTData_DDS_IoT__load (c_base base);

typedef c_octet _DDS_IoT_IoTUI8;
extern c_metaObject __DDS_IoT_IoTUI8__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTUI8__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTUI8__copyOut(const void *_from, void *_to);

typedef c_ushort _DDS_IoT_IoTUI16;
extern c_metaObject __DDS_IoT_IoTUI16__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTUI16__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTUI16__copyOut(const void *_from, void *_to);

typedef c_ulong _DDS_IoT_IoTUI32;
extern c_metaObject __DDS_IoT_IoTUI32__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTUI32__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTUI32__copyOut(const void *_from, void *_to);

typedef c_ulonglong _DDS_IoT_IoTUI64;
extern c_metaObject __DDS_IoT_IoTUI64__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTUI64__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTUI64__copyOut(const void *_from, void *_to);

typedef c_char _DDS_IoT_IoTI8;
extern c_metaObject __DDS_IoT_IoTI8__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTI8__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTI8__copyOut(const void *_from, void *_to);

typedef c_short _DDS_IoT_IoTI16;
extern c_metaObject __DDS_IoT_IoTI16__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTI16__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTI16__copyOut(const void *_from, void *_to);

typedef c_long _DDS_IoT_IoTI32;
extern c_metaObject __DDS_IoT_IoTI32__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTI32__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTI32__copyOut(const void *_from, void *_to);

typedef c_longlong _DDS_IoT_IoTI64;
extern c_metaObject __DDS_IoT_IoTI64__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTI64__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTI64__copyOut(const void *_from, void *_to);

typedef c_float _DDS_IoT_IoTF32;
extern c_metaObject __DDS_IoT_IoTF32__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTF32__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTF32__copyOut(const void *_from, void *_to);

typedef c_double _DDS_IoT_IoTF64;
extern c_metaObject __DDS_IoT_IoTF64__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTF64__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTF64__copyOut(const void *_from, void *_to);

typedef c_bool _DDS_IoT_IoTB;
extern c_metaObject __DDS_IoT_IoTB__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTB__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTB__copyOut(const void *_from, void *_to);

typedef c_string _DDS_IoT_IoTStr;
extern c_metaObject __DDS_IoT_IoTStr__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTStr__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTStr__copyOut(const void *_from, void *_to);

typedef c_char _DDS_IoT_IoTCh;
extern c_metaObject __DDS_IoT_IoTCh__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTCh__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTCh__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTUI8Seq;
extern c_metaObject __DDS_IoT_IoTUI8Seq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTUI8Seq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTUI8Seq__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTUI16Seq;
extern c_metaObject __DDS_IoT_IoTUI16Seq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTUI16Seq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTUI16Seq__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTUI32Seq;
extern c_metaObject __DDS_IoT_IoTUI32Seq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTUI32Seq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTUI32Seq__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTUI64Seq;
extern c_metaObject __DDS_IoT_IoTUI64Seq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTUI64Seq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTUI64Seq__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTI8Seq;
extern c_metaObject __DDS_IoT_IoTI8Seq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTI8Seq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTI8Seq__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTI16Seq;
extern c_metaObject __DDS_IoT_IoTI16Seq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTI16Seq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTI16Seq__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTI32Seq;
extern c_metaObject __DDS_IoT_IoTI32Seq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTI32Seq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTI32Seq__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTI64Seq;
extern c_metaObject __DDS_IoT_IoTI64Seq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTI64Seq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTI64Seq__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTF32Seq;
extern c_metaObject __DDS_IoT_IoTF32Seq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTF32Seq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTF32Seq__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTF64Seq;
extern c_metaObject __DDS_IoT_IoTF64Seq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTF64Seq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTF64Seq__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTBSeq;
extern c_metaObject __DDS_IoT_IoTBSeq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTBSeq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTBSeq__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTStrSeq;
extern c_metaObject __DDS_IoT_IoTStrSeq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTStrSeq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTStrSeq__copyOut(const void *_from, void *_to);

typedef c_sequence _DDS_IoT_IoTChSeq;
extern c_metaObject __DDS_IoT_IoTChSeq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTChSeq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTChSeq__copyOut(const void *_from, void *_to);

extern c_metaObject __DDS_IoT_IoTType__load (c_base base);
enum _DDS_IoT_IoTType {
    _DDS_IoT_TYPE_IoTUI8,
    _DDS_IoT_TYPE_IoTUI16,
    _DDS_IoT_TYPE_IoTUI32,
    _DDS_IoT_TYPE_IoTUI64,
    _DDS_IoT_TYPE_IoTI8,
    _DDS_IoT_TYPE_IoTI16,
    _DDS_IoT_TYPE_IoTI32,
    _DDS_IoT_TYPE_IoTI64,
    _DDS_IoT_TYPE_IoTF32,
    _DDS_IoT_TYPE_IoTF64,
    _DDS_IoT_TYPE_IoTB,
    _DDS_IoT_TYPE_IoTStr,
    _DDS_IoT_TYPE_IoTCh,
    _DDS_IoT_TYPE_IoTUI8Seq,
    _DDS_IoT_TYPE_IoTUI16Seq,
    _DDS_IoT_TYPE_IoTUI32Seq,
    _DDS_IoT_TYPE_IoTUI64Seq,
    _DDS_IoT_TYPE_IoTI8Seq,
    _DDS_IoT_TYPE_IoTI16Seq,
    _DDS_IoT_TYPE_IoTI32Seq,
    _DDS_IoT_TYPE_IoTI64Seq,
    _DDS_IoT_TYPE_IoTF32Seq,
    _DDS_IoT_TYPE_IoTF64Seq,
    _DDS_IoT_TYPE_IoTBSeq,
    _DDS_IoT_TYPE_IoTStrSeq,
    _DDS_IoT_TYPE_IoTChSeq
};

extern const char *DDS_IoT_IoTValue_metaDescriptor[];
extern const int DDS_IoT_IoTValue_metaDescriptorArrLength;
extern const int DDS_IoT_IoTValue_metaDescriptorLength;
extern c_metaObject __DDS_IoT_IoTValue__load (c_base base);
extern const char * __DDS_IoT_IoTValue__keys (void);
extern const char * __DDS_IoT_IoTValue__name (void);
struct _DDS_IoT_IoTValue {
    enum _DDS_IoT_IoTType _d;
    union {
        _DDS_IoT_IoTUI8 ui8;
        _DDS_IoT_IoTUI16 ui16;
        _DDS_IoT_IoTUI32 ui32;
        _DDS_IoT_IoTUI64 ui64;
        _DDS_IoT_IoTI8 i8;
        _DDS_IoT_IoTI16 i16;
        _DDS_IoT_IoTI32 i32;
        _DDS_IoT_IoTI64 i64;
        _DDS_IoT_IoTF32 f32;
        _DDS_IoT_IoTF64 f64;
        _DDS_IoT_IoTB b;
        _DDS_IoT_IoTStr str;
        _DDS_IoT_IoTCh ch;
        _DDS_IoT_IoTUI8Seq ui8Seq;
        _DDS_IoT_IoTUI16Seq ui16Seq;
        _DDS_IoT_IoTUI32Seq ui32Seq;
        _DDS_IoT_IoTUI64Seq ui64Seq;
        _DDS_IoT_IoTI8Seq i8Seq;
        _DDS_IoT_IoTI16Seq i16Seq;
        _DDS_IoT_IoTI32Seq i32Seq;
        _DDS_IoT_IoTI64Seq i64Seq;
        _DDS_IoT_IoTF32Seq f32Seq;
        _DDS_IoT_IoTF64Seq f64Seq;
        _DDS_IoT_IoTBSeq bSeq;
        _DDS_IoT_IoTStrSeq strSeq;
        _DDS_IoT_IoTChSeq chSeq;
    } _u;
};

extern const char *DDS_IoT_IoTNVP_metaDescriptor[];
extern const int DDS_IoT_IoTNVP_metaDescriptorArrLength;
extern const int DDS_IoT_IoTNVP_metaDescriptorLength;
extern c_metaObject __DDS_IoT_IoTNVP__load (c_base base);
struct _DDS_IoT_IoTNVP ;
extern  v_copyin_result __DDS_IoT_IoTNVP__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTNVP__copyOut(const void *_from, void *_to);
struct _DDS_IoT_IoTNVP {
    c_string name;
    struct _DDS_IoT_IoTValue value;
};

typedef c_sequence _DDS_IoT_IoTNVPSeq;
extern c_metaObject __DDS_IoT_IoTNVPSeq__load (c_base base);
extern  v_copyin_result __DDS_IoT_IoTNVPSeq__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTNVPSeq__copyOut(const void *_from, void *_to);

extern const char *DDS_IoT_IoTData_metaDescriptor[];
extern const int DDS_IoT_IoTData_metaDescriptorArrLength;
extern const int DDS_IoT_IoTData_metaDescriptorLength;
extern c_metaObject __DDS_IoT_IoTData__load (c_base base);
struct _DDS_IoT_IoTData ;
extern  v_copyin_result __DDS_IoT_IoTData__copyIn(c_base base, const void *from, void *to);
extern  void __DDS_IoT_IoTData__copyOut(const void *_from, void *_to);
struct _DDS_IoT_IoTData {
    c_string typeName;
    c_string instanceId;
    _DDS_IoT_IoTNVPSeq values;
};

#undef OS_API
#endif
