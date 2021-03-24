#ifndef dds_IoTDataDCPS_H
#define dds_IoTDataDCPS_H

#include <dds_primitive_types.h>
#include <stdint.h>
#include <stdbool.h>

#if defined (__cplusplus)
extern "C" {
#endif

typedef uint8_t DDS_IoT_IoTUI8;
 DDS_IoT_IoTUI8 *DDS_IoT_IoTUI8__alloc (void);

typedef uint16_t DDS_IoT_IoTUI16;
 DDS_IoT_IoTUI16 *DDS_IoT_IoTUI16__alloc (void);

typedef uint32_t DDS_IoT_IoTUI32;
 DDS_IoT_IoTUI32 *DDS_IoT_IoTUI32__alloc (void);

typedef uint64_t DDS_IoT_IoTUI64;
 DDS_IoT_IoTUI64 *DDS_IoT_IoTUI64__alloc (void);

typedef char DDS_IoT_IoTI8;
 DDS_IoT_IoTI8 *DDS_IoT_IoTI8__alloc (void);

typedef int16_t DDS_IoT_IoTI16;
 DDS_IoT_IoTI16 *DDS_IoT_IoTI16__alloc (void);

typedef int32_t DDS_IoT_IoTI32;
 DDS_IoT_IoTI32 *DDS_IoT_IoTI32__alloc (void);

typedef int64_t DDS_IoT_IoTI64;
 DDS_IoT_IoTI64 *DDS_IoT_IoTI64__alloc (void);

typedef float DDS_IoT_IoTF32;
 DDS_IoT_IoTF32 *DDS_IoT_IoTF32__alloc (void);

typedef double DDS_IoT_IoTF64;
 DDS_IoT_IoTF64 *DDS_IoT_IoTF64__alloc (void);

typedef bool DDS_IoT_IoTB;
 DDS_IoT_IoTB *DDS_IoT_IoTB__alloc (void);

typedef char * DDS_IoT_IoTStr;
 DDS_IoT_IoTStr *DDS_IoT_IoTStr__alloc (uint32_t len);

typedef char DDS_IoT_IoTCh;
 DDS_IoT_IoTCh *DDS_IoT_IoTCh__alloc (void);

/* Definition for sequence of DDS_IoT_IoTUI8 */
#ifndef _DDS_sequence_DDS_IoT_IoTUI8_defined
#define _DDS_sequence_DDS_IoT_IoTUI8_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTUI8 *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTUI8;
 DDS_sequence_DDS_IoT_IoTUI8 *DDS_sequence_DDS_IoT_IoTUI8__alloc (void);
 DDS_IoT_IoTUI8 *DDS_sequence_DDS_IoT_IoTUI8_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTUI8_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTUI8__alloc DDS_sequence_DDS_IoT_IoTUI8__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTUI8_allocbuf DDS_sequence_DDS_IoT_IoTUI8_allocbuf

typedef DDS_sequence_DDS_IoT_IoTUI8 DDS_IoT_IoTUI8Seq;
 DDS_IoT_IoTUI8Seq *DDS_IoT_IoTUI8Seq__alloc (void);
 DDS_IoT_IoTUI8 *DDS_IoT_IoTUI8Seq_allocbuf (uint32_t len);

/* Definition for sequence of DDS_IoT_IoTUI16 */
#ifndef _DDS_sequence_DDS_IoT_IoTUI16_defined
#define _DDS_sequence_DDS_IoT_IoTUI16_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTUI16 *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTUI16;
 DDS_sequence_DDS_IoT_IoTUI16 *DDS_sequence_DDS_IoT_IoTUI16__alloc (void);
 DDS_IoT_IoTUI16 *DDS_sequence_DDS_IoT_IoTUI16_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTUI16_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTUI16__alloc DDS_sequence_DDS_IoT_IoTUI16__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTUI16_allocbuf DDS_sequence_DDS_IoT_IoTUI16_allocbuf

typedef DDS_sequence_DDS_IoT_IoTUI16 DDS_IoT_IoTUI16Seq;
 DDS_IoT_IoTUI16Seq *DDS_IoT_IoTUI16Seq__alloc (void);
 DDS_IoT_IoTUI16 *DDS_IoT_IoTUI16Seq_allocbuf (uint32_t len);

/* Definition for sequence of DDS_IoT_IoTUI32 */
#ifndef _DDS_sequence_DDS_IoT_IoTUI32_defined
#define _DDS_sequence_DDS_IoT_IoTUI32_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTUI32 *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTUI32;
 DDS_sequence_DDS_IoT_IoTUI32 *DDS_sequence_DDS_IoT_IoTUI32__alloc (void);
 DDS_IoT_IoTUI32 *DDS_sequence_DDS_IoT_IoTUI32_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTUI32_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTUI32__alloc DDS_sequence_DDS_IoT_IoTUI32__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTUI32_allocbuf DDS_sequence_DDS_IoT_IoTUI32_allocbuf

typedef DDS_sequence_DDS_IoT_IoTUI32 DDS_IoT_IoTUI32Seq;
 DDS_IoT_IoTUI32Seq *DDS_IoT_IoTUI32Seq__alloc (void);
 DDS_IoT_IoTUI32 *DDS_IoT_IoTUI32Seq_allocbuf (uint32_t len);

/* Definition for sequence of DDS_IoT_IoTUI64 */
#ifndef _DDS_sequence_DDS_IoT_IoTUI64_defined
#define _DDS_sequence_DDS_IoT_IoTUI64_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTUI64 *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTUI64;
 DDS_sequence_DDS_IoT_IoTUI64 *DDS_sequence_DDS_IoT_IoTUI64__alloc (void);
 DDS_IoT_IoTUI64 *DDS_sequence_DDS_IoT_IoTUI64_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTUI64_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTUI64__alloc DDS_sequence_DDS_IoT_IoTUI64__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTUI64_allocbuf DDS_sequence_DDS_IoT_IoTUI64_allocbuf

typedef DDS_sequence_DDS_IoT_IoTUI64 DDS_IoT_IoTUI64Seq;
 DDS_IoT_IoTUI64Seq *DDS_IoT_IoTUI64Seq__alloc (void);
 DDS_IoT_IoTUI64 *DDS_IoT_IoTUI64Seq_allocbuf (uint32_t len);

/* Definition for sequence of DDS_IoT_IoTI8 */
#ifndef _DDS_sequence_DDS_IoT_IoTI8_defined
#define _DDS_sequence_DDS_IoT_IoTI8_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTI8 *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTI8;
 DDS_sequence_DDS_IoT_IoTI8 *DDS_sequence_DDS_IoT_IoTI8__alloc (void);
 DDS_IoT_IoTI8 *DDS_sequence_DDS_IoT_IoTI8_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTI8_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTI8__alloc DDS_sequence_DDS_IoT_IoTI8__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTI8_allocbuf DDS_sequence_DDS_IoT_IoTI8_allocbuf

typedef DDS_sequence_DDS_IoT_IoTI8 DDS_IoT_IoTI8Seq;
 DDS_IoT_IoTI8Seq *DDS_IoT_IoTI8Seq__alloc (void);
 DDS_IoT_IoTI8 *DDS_IoT_IoTI8Seq_allocbuf (uint32_t len);

/* Definition for sequence of DDS_IoT_IoTI16 */
#ifndef _DDS_sequence_DDS_IoT_IoTI16_defined
#define _DDS_sequence_DDS_IoT_IoTI16_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTI16 *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTI16;
 DDS_sequence_DDS_IoT_IoTI16 *DDS_sequence_DDS_IoT_IoTI16__alloc (void);
 DDS_IoT_IoTI16 *DDS_sequence_DDS_IoT_IoTI16_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTI16_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTI16__alloc DDS_sequence_DDS_IoT_IoTI16__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTI16_allocbuf DDS_sequence_DDS_IoT_IoTI16_allocbuf

typedef DDS_sequence_DDS_IoT_IoTI16 DDS_IoT_IoTI16Seq;
 DDS_IoT_IoTI16Seq *DDS_IoT_IoTI16Seq__alloc (void);
 DDS_IoT_IoTI16 *DDS_IoT_IoTI16Seq_allocbuf (uint32_t len);

/* Definition for sequence of DDS_IoT_IoTI32 */
#ifndef _DDS_sequence_DDS_IoT_IoTI32_defined
#define _DDS_sequence_DDS_IoT_IoTI32_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTI32 *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTI32;
 DDS_sequence_DDS_IoT_IoTI32 *DDS_sequence_DDS_IoT_IoTI32__alloc (void);
 DDS_IoT_IoTI32 *DDS_sequence_DDS_IoT_IoTI32_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTI32_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTI32__alloc DDS_sequence_DDS_IoT_IoTI32__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTI32_allocbuf DDS_sequence_DDS_IoT_IoTI32_allocbuf

typedef DDS_sequence_DDS_IoT_IoTI32 DDS_IoT_IoTI32Seq;
 DDS_IoT_IoTI32Seq *DDS_IoT_IoTI32Seq__alloc (void);
 DDS_IoT_IoTI32 *DDS_IoT_IoTI32Seq_allocbuf (uint32_t len);

/* Definition for sequence of DDS_IoT_IoTI64 */
#ifndef _DDS_sequence_DDS_IoT_IoTI64_defined
#define _DDS_sequence_DDS_IoT_IoTI64_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTI64 *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTI64;
 DDS_sequence_DDS_IoT_IoTI64 *DDS_sequence_DDS_IoT_IoTI64__alloc (void);
 DDS_IoT_IoTI64 *DDS_sequence_DDS_IoT_IoTI64_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTI64_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTI64__alloc DDS_sequence_DDS_IoT_IoTI64__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTI64_allocbuf DDS_sequence_DDS_IoT_IoTI64_allocbuf

typedef DDS_sequence_DDS_IoT_IoTI64 DDS_IoT_IoTI64Seq;
 DDS_IoT_IoTI64Seq *DDS_IoT_IoTI64Seq__alloc (void);
 DDS_IoT_IoTI64 *DDS_IoT_IoTI64Seq_allocbuf (uint32_t len);

/* Definition for sequence of DDS_IoT_IoTF32 */
#ifndef _DDS_sequence_DDS_IoT_IoTF32_defined
#define _DDS_sequence_DDS_IoT_IoTF32_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTF32 *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTF32;
 DDS_sequence_DDS_IoT_IoTF32 *DDS_sequence_DDS_IoT_IoTF32__alloc (void);
 DDS_IoT_IoTF32 *DDS_sequence_DDS_IoT_IoTF32_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTF32_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTF32__alloc DDS_sequence_DDS_IoT_IoTF32__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTF32_allocbuf DDS_sequence_DDS_IoT_IoTF32_allocbuf

typedef DDS_sequence_DDS_IoT_IoTF32 DDS_IoT_IoTF32Seq;
 DDS_IoT_IoTF32Seq *DDS_IoT_IoTF32Seq__alloc (void);
 DDS_IoT_IoTF32 *DDS_IoT_IoTF32Seq_allocbuf (uint32_t len);

/* Definition for sequence of DDS_IoT_IoTF64 */
#ifndef _DDS_sequence_DDS_IoT_IoTF64_defined
#define _DDS_sequence_DDS_IoT_IoTF64_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTF64 *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTF64;
 DDS_sequence_DDS_IoT_IoTF64 *DDS_sequence_DDS_IoT_IoTF64__alloc (void);
 DDS_IoT_IoTF64 *DDS_sequence_DDS_IoT_IoTF64_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTF64_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTF64__alloc DDS_sequence_DDS_IoT_IoTF64__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTF64_allocbuf DDS_sequence_DDS_IoT_IoTF64_allocbuf

typedef DDS_sequence_DDS_IoT_IoTF64 DDS_IoT_IoTF64Seq;
 DDS_IoT_IoTF64Seq *DDS_IoT_IoTF64Seq__alloc (void);
 DDS_IoT_IoTF64 *DDS_IoT_IoTF64Seq_allocbuf (uint32_t len);

/* Definition for sequence of DDS_IoT_IoTB */
#ifndef _DDS_sequence_DDS_IoT_IoTB_defined
#define _DDS_sequence_DDS_IoT_IoTB_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTB *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTB;
 DDS_sequence_DDS_IoT_IoTB *DDS_sequence_DDS_IoT_IoTB__alloc (void);
 DDS_IoT_IoTB *DDS_sequence_DDS_IoT_IoTB_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTB_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTB__alloc DDS_sequence_DDS_IoT_IoTB__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTB_allocbuf DDS_sequence_DDS_IoT_IoTB_allocbuf

typedef DDS_sequence_DDS_IoT_IoTB DDS_IoT_IoTBSeq;
 DDS_IoT_IoTBSeq *DDS_IoT_IoTBSeq__alloc (void);
 DDS_IoT_IoTB *DDS_IoT_IoTBSeq_allocbuf (uint32_t len);

/* Definition for sequence of DDS_IoT_IoTStr */
#ifndef _DDS_sequence_DDS_IoT_IoTStr_defined
#define _DDS_sequence_DDS_IoT_IoTStr_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTStr *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTStr;
 DDS_sequence_DDS_IoT_IoTStr *DDS_sequence_DDS_IoT_IoTStr__alloc (void);
 DDS_IoT_IoTStr *DDS_sequence_DDS_IoT_IoTStr_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTStr_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTStr__alloc DDS_sequence_DDS_IoT_IoTStr__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTStr_allocbuf DDS_sequence_DDS_IoT_IoTStr_allocbuf

typedef DDS_sequence_DDS_IoT_IoTStr DDS_IoT_IoTStrSeq;
 DDS_IoT_IoTStrSeq *DDS_IoT_IoTStrSeq__alloc (void);
 DDS_IoT_IoTStr *DDS_IoT_IoTStrSeq_allocbuf (uint32_t len);

/* Definition for sequence of DDS_IoT_IoTCh */
#ifndef _DDS_sequence_DDS_IoT_IoTCh_defined
#define _DDS_sequence_DDS_IoT_IoTCh_defined
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTCh *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTCh;
 DDS_sequence_DDS_IoT_IoTCh *DDS_sequence_DDS_IoT_IoTCh__alloc (void);
 DDS_IoT_IoTCh *DDS_sequence_DDS_IoT_IoTCh_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTCh_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTCh__alloc DDS_sequence_DDS_IoT_IoTCh__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTCh_allocbuf DDS_sequence_DDS_IoT_IoTCh_allocbuf

typedef DDS_sequence_DDS_IoT_IoTCh DDS_IoT_IoTChSeq;
 DDS_IoT_IoTChSeq *DDS_IoT_IoTChSeq__alloc (void);
 DDS_IoT_IoTCh *DDS_IoT_IoTChSeq_allocbuf (uint32_t len);

enum DDS_IoT_IoTType_e {
    DDS_IoT_TYPE_IoTUI8,
    DDS_IoT_TYPE_IoTUI16,
    DDS_IoT_TYPE_IoTUI32,
    DDS_IoT_TYPE_IoTUI64,
    DDS_IoT_TYPE_IoTI8,
    DDS_IoT_TYPE_IoTI16,
    DDS_IoT_TYPE_IoTI32,
    DDS_IoT_TYPE_IoTI64,
    DDS_IoT_TYPE_IoTF32,
    DDS_IoT_TYPE_IoTF64,
    DDS_IoT_TYPE_IoTB,
    DDS_IoT_TYPE_IoTStr,
    DDS_IoT_TYPE_IoTCh,
    DDS_IoT_TYPE_IoTUI8Seq,
    DDS_IoT_TYPE_IoTUI16Seq,
    DDS_IoT_TYPE_IoTUI32Seq,
    DDS_IoT_TYPE_IoTUI64Seq,
    DDS_IoT_TYPE_IoTI8Seq,
    DDS_IoT_TYPE_IoTI16Seq,
    DDS_IoT_TYPE_IoTI32Seq,
    DDS_IoT_TYPE_IoTI64Seq,
    DDS_IoT_TYPE_IoTF32Seq,
    DDS_IoT_TYPE_IoTF64Seq,
    DDS_IoT_TYPE_IoTBSeq,
    DDS_IoT_TYPE_IoTStrSeq,
    DDS_IoT_TYPE_IoTChSeq
};
typedef enum DDS_IoT_IoTType_e DDS_IoT_IoTType;

#ifndef _DDS_IoT_IoTValue_defined
#define _DDS_IoT_IoTValue_defined
#ifdef __cplusplus
struct DDS_IoT_IoTValue;
#else /* __cplusplus */
typedef struct DDS_IoT_IoTValue DDS_IoT_IoTValue;
#endif /* __cplusplus */
#endif /* _DDS_IoT_IoTValue_defined */
DDS_IoT_IoTValue *DDS_IoT_IoTValue__alloc (void);
struct DDS_IoT_IoTValue {
    DDS_IoT_IoTType _d;
    union {
        DDS_IoT_IoTUI8 ui8;
        DDS_IoT_IoTUI16 ui16;
        DDS_IoT_IoTUI32 ui32;
        DDS_IoT_IoTUI64 ui64;
        DDS_IoT_IoTI8 i8;
        DDS_IoT_IoTI16 i16;
        DDS_IoT_IoTI32 i32;
        DDS_IoT_IoTI64 i64;
        DDS_IoT_IoTF32 f32;
        DDS_IoT_IoTF64 f64;
        DDS_IoT_IoTB b;
        DDS_IoT_IoTStr str;
        DDS_IoT_IoTCh ch;
        DDS_IoT_IoTUI8Seq ui8Seq;
        DDS_IoT_IoTUI16Seq ui16Seq;
        DDS_IoT_IoTUI32Seq ui32Seq;
        DDS_IoT_IoTUI64Seq ui64Seq;
        DDS_IoT_IoTI8Seq i8Seq;
        DDS_IoT_IoTI16Seq i16Seq;
        DDS_IoT_IoTI32Seq i32Seq;
        DDS_IoT_IoTI64Seq i64Seq;
        DDS_IoT_IoTF32Seq f32Seq;
        DDS_IoT_IoTF64Seq f64Seq;
        DDS_IoT_IoTBSeq bSeq;
        DDS_IoT_IoTStrSeq strSeq;
        DDS_IoT_IoTChSeq chSeq;
    } _u;
};

#ifndef _DDS_IoT_IoTNVP_defined
#define _DDS_IoT_IoTNVP_defined
#ifdef __cplusplus
struct DDS_IoT_IoTNVP;
#else /* __cplusplus */
typedef struct DDS_IoT_IoTNVP DDS_IoT_IoTNVP;
#endif /* __cplusplus */
#endif /* _DDS_IoT_IoTNVP_defined */
 DDS_IoT_IoTNVP *DDS_IoT_IoTNVP__alloc (void);

struct DDS_IoT_IoTNVP {
    char * name;
    DDS_IoT_IoTValue value;
};

/* Definition for sequence of DDS_IoT_IoTNVP */
#ifndef _DDS_sequence_DDS_IoT_IoTNVP_defined
#define _DDS_sequence_DDS_IoT_IoTNVP_defined
#ifndef _DDS_IoT_IoTNVP_defined
#define _DDS_IoT_IoTNVP_defined
typedef struct DDS_IoT_IoTNVP DDS_IoT_IoTNVP;
#endif /* _DDS_IoT_IoTNVP_defined */
typedef struct {
    uint32_t _maximum;
    uint32_t _length;
    DDS_IoT_IoTNVP *_buffer;
    bool _release;
} DDS_sequence_DDS_IoT_IoTNVP;
 DDS_sequence_DDS_IoT_IoTNVP *DDS_sequence_DDS_IoT_IoTNVP__alloc (void);
 DDS_IoT_IoTNVP *DDS_sequence_DDS_IoT_IoTNVP_allocbuf (uint32_t len);
#endif /* _DDS_sequence_DDS_IoT_IoTNVP_defined */
#define DDS_IoT_sequence_DDS_IoT_IoTNVP__alloc DDS_sequence_DDS_IoT_IoTNVP__alloc
#define DDS_IoT_sequence_DDS_IoT_IoTNVP_allocbuf DDS_sequence_DDS_IoT_IoTNVP_allocbuf

typedef DDS_sequence_DDS_IoT_IoTNVP DDS_IoT_IoTNVPSeq;
 DDS_IoT_IoTNVPSeq *DDS_IoT_IoTNVPSeq__alloc (void);
 DDS_IoT_IoTNVP *DDS_IoT_IoTNVPSeq_allocbuf (uint32_t len);

#ifndef _DDS_IoT_IoTData_defined
#define _DDS_IoT_IoTData_defined
#ifdef __cplusplus
struct DDS_IoT_IoTData;
#else /* __cplusplus */
typedef struct DDS_IoT_IoTData DDS_IoT_IoTData;
#endif /* __cplusplus */
#endif /* _DDS_IoT_IoTData_defined */
 DDS_IoT_IoTData *DDS_IoT_IoTData__alloc (void);

struct DDS_IoT_IoTData {
    char * typeName;
    char * instanceId;
    DDS_IoT_IoTNVPSeq values;
};

#if defined (__cplusplus)
}
#endif

#endif
