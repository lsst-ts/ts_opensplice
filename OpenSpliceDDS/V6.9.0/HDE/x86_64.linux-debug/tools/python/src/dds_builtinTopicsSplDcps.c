#if defined (__cplusplus)
extern "C" {
#endif

#include "vortex_os.h"
#include "dds_builtinTopicsSplDcps.h"
#include "dds_builtinTopicsDcps.h"

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 150 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 156 */
#include <v_copyIn.h>
#include <v_topic.h>
#include <string.h>
#include <os_report.h>

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2452 */
v_copyin_result
__DDS_octSeq__copyIn(c_base base, const void *_from, void *_to);
v_copyin_result
__DDS_octSeq__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_octSeq *from = (const DDS_octSeq *)_from;
    _DDS_octSeq *to = (_DDS_octSeq *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2305 */
    static c_type type0 = NULL;
    c_type subtype0 = NULL;
    c_ulong length0;
    c_octet *dst0;
    const DDS_octSeq *from0 = from;

    if (type0 == NULL) {
        subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_octet"));
        type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_octet>",subtype0,0);
        c_free(subtype0);
    }
    length0 = (*from)._length;
#ifdef OSPL_BOUNDS_CHECK
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2343 */
    dst0 = (c_octet *)c_newSequence_s(c_collectionType(type0),length0);
    if (dst0 != NULL) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1967 */
        memcpy (dst0,(*from0)._buffer,length0* sizeof(*dst0));
        *to = (_DDS_octSeq)dst0;
    } else {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#else
    dst0 = (c_octet *)c_newSequence_s(c_collectionType(type0),length0);
    if (dst0 != NULL) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1967 */
        memcpy (dst0,(*from0)._buffer,length0* sizeof(*dst0));
        *to = (_DDS_octSeq)dst0;
    } else {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2430 */
v_copyin_result
__DDS_BuiltinTopicKey_t__copyIn(c_base base, const void *_from, void *_to);
v_copyin_result
__DDS_BuiltinTopicKey_t__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_BuiltinTopicKey_t *from = (const DDS_BuiltinTopicKey_t *)_from;
    _DDS_BuiltinTopicKey_t *to = (_DDS_BuiltinTopicKey_t *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1671 */
    memcpy (to, *from, sizeof (*to));
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2452 */
v_copyin_result
__DDS_StringSeq__copyIn(c_base base, const void *_from, void *_to);
v_copyin_result
__DDS_StringSeq__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_StringSeq *from = (const DDS_StringSeq *)_from;
    _DDS_StringSeq *to = (_DDS_StringSeq *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2305 */
    static c_type type0 = NULL;
    c_type subtype0 = NULL;
    c_ulong length0;
    c_string *dst0;
    const DDS_StringSeq *from0 = from;

    if (type0 == NULL) {
        subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_string"));
        type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_string>",subtype0,0);
        c_free(subtype0);
    }
    length0 = (*from)._length;
#ifdef OSPL_BOUNDS_CHECK
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2343 */
    dst0 = (c_string *)c_newSequence_s(c_collectionType(type0),length0);
    if (dst0 != NULL) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1975 */
        if((*from0)._buffer)
        {
            unsigned int i0;
            for (i0 = 0; (i0 < length0 && V_COPYIN_RESULT_IS_OK(result)); i0++) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2018 */
#ifdef OSPL_BOUNDS_CHECK
                if((*from0)._buffer[i0]){
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2048 */
                    dst0[i0] = c_stringNew_s(base, (*from0)._buffer[i0]);
                    if (dst0[i0] == NULL) {
                        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'DDS.StringSeq' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dst0[i0] = c_stringNew_s(base, (*from0)._buffer[i0]);
                if (((*from0)._buffer[i0] != NULL) && (dst0[i0] == NULL)) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
        } else if(length0) {
            /* Report an error! */
            OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'DDS.StringSeq' of type 'c_string' is out of range.");
            result = V_COPYIN_RESULT_INVALID;
        }
        *to = (_DDS_StringSeq)dst0;
    } else {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#else
    dst0 = (c_string *)c_newSequence_s(c_collectionType(type0),length0);
    if (dst0 != NULL) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1975 */
        if((*from0)._buffer)
        {
            unsigned int i0;
            for (i0 = 0; (i0 < length0 && V_COPYIN_RESULT_IS_OK(result)); i0++) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2018 */
#ifdef OSPL_BOUNDS_CHECK
                if((*from0)._buffer[i0]){
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2048 */
                    dst0[i0] = c_stringNew_s(base, (*from0)._buffer[i0]);
                    if (dst0[i0] == NULL) {
                        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'DDS.StringSeq' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dst0[i0] = c_stringNew_s(base, (*from0)._buffer[i0]);
                if (((*from0)._buffer[i0] != NULL) && (dst0[i0] == NULL)) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
        } else if(length0) {
            /* Report an error! */
            OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'DDS.StringSeq' of type 'c_string' is out of range.");
            result = V_COPYIN_RESULT_INVALID;
        }
        *to = (_DDS_StringSeq)dst0;
    } else {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_Duration_t__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_Duration_t *from = (const DDS_Duration_t *)_from;
    struct _DDS_Duration_t *to = (struct _DDS_Duration_t *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->sec = (c_long)from->sec;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->nanosec = (c_ulong)from->nanosec;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_UserDataQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_UserDataQosPolicy *from = (const DDS_UserDataQosPolicy *)_from;
    struct _DDS_UserDataQosPolicy *to = (struct _DDS_UserDataQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_octSeq__copyIn(c_base, const void *, void *);
        result = __DDS_octSeq__copyIn(base, &from->value, &to->value);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_TopicDataQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_TopicDataQosPolicy *from = (const DDS_TopicDataQosPolicy *)_from;
    struct _DDS_TopicDataQosPolicy *to = (struct _DDS_TopicDataQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_octSeq__copyIn(c_base, const void *, void *);
        result = __DDS_octSeq__copyIn(base, &from->value, &to->value);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_GroupDataQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_GroupDataQosPolicy *from = (const DDS_GroupDataQosPolicy *)_from;
    struct _DDS_GroupDataQosPolicy *to = (struct _DDS_GroupDataQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_octSeq__copyIn(c_base, const void *, void *);
        result = __DDS_octSeq__copyIn(base, &from->value, &to->value);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_TransportPriorityQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_TransportPriorityQosPolicy *from = (const DDS_TransportPriorityQosPolicy *)_from;
    struct _DDS_TransportPriorityQosPolicy *to = (struct _DDS_TransportPriorityQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->value = (c_long)from->value;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_LifespanQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_LifespanQosPolicy *from = (const DDS_LifespanQosPolicy *)_from;
    struct _DDS_LifespanQosPolicy *to = (struct _DDS_LifespanQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_Duration_t__copyIn(c_base, const void *, void *);
        result = __DDS_Duration_t__copyIn(base, &from->duration, &to->duration);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_DurabilityQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_DurabilityQosPolicy *from = (const DDS_DurabilityQosPolicy *)_from;
    struct _DDS_DurabilityQosPolicy *to = (struct _DDS_DurabilityQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 601 */
#ifdef OSPL_BOUNDS_CHECK
    if((unsigned)from->kind < 4){
        to->kind = (enum _DDS_DurabilityQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::DurabilityQosPolicy.kind' of type 'DurabilityQosPolicyKind' is out of range.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->kind = (enum _DDS_DurabilityQosPolicyKind)from->kind;
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_PresentationQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_PresentationQosPolicy *from = (const DDS_PresentationQosPolicy *)_from;
    struct _DDS_PresentationQosPolicy *to = (struct _DDS_PresentationQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 601 */
#ifdef OSPL_BOUNDS_CHECK
    if((unsigned)from->access_scope < 3){
        to->access_scope = (enum _DDS_PresentationQosPolicyAccessScopeKind)from->access_scope;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::PresentationQosPolicy.access_scope' of type 'PresentationQosPolicyAccessScopeKind' is out of range.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->access_scope = (enum _DDS_PresentationQosPolicyAccessScopeKind)from->access_scope;
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->coherent_access = (c_bool)from->coherent_access;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->ordered_access = (c_bool)from->ordered_access;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_DeadlineQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_DeadlineQosPolicy *from = (const DDS_DeadlineQosPolicy *)_from;
    struct _DDS_DeadlineQosPolicy *to = (struct _DDS_DeadlineQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_Duration_t__copyIn(c_base, const void *, void *);
        result = __DDS_Duration_t__copyIn(base, &from->period, &to->period);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_LatencyBudgetQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_LatencyBudgetQosPolicy *from = (const DDS_LatencyBudgetQosPolicy *)_from;
    struct _DDS_LatencyBudgetQosPolicy *to = (struct _DDS_LatencyBudgetQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_Duration_t__copyIn(c_base, const void *, void *);
        result = __DDS_Duration_t__copyIn(base, &from->duration, &to->duration);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_OwnershipQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_OwnershipQosPolicy *from = (const DDS_OwnershipQosPolicy *)_from;
    struct _DDS_OwnershipQosPolicy *to = (struct _DDS_OwnershipQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 601 */
#ifdef OSPL_BOUNDS_CHECK
    if((unsigned)from->kind < 2){
        to->kind = (enum _DDS_OwnershipQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::OwnershipQosPolicy.kind' of type 'OwnershipQosPolicyKind' is out of range.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->kind = (enum _DDS_OwnershipQosPolicyKind)from->kind;
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_OwnershipStrengthQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_OwnershipStrengthQosPolicy *from = (const DDS_OwnershipStrengthQosPolicy *)_from;
    struct _DDS_OwnershipStrengthQosPolicy *to = (struct _DDS_OwnershipStrengthQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->value = (c_long)from->value;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_LivelinessQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_LivelinessQosPolicy *from = (const DDS_LivelinessQosPolicy *)_from;
    struct _DDS_LivelinessQosPolicy *to = (struct _DDS_LivelinessQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 601 */
#ifdef OSPL_BOUNDS_CHECK
    if((unsigned)from->kind < 3){
        to->kind = (enum _DDS_LivelinessQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::LivelinessQosPolicy.kind' of type 'LivelinessQosPolicyKind' is out of range.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->kind = (enum _DDS_LivelinessQosPolicyKind)from->kind;
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_Duration_t__copyIn(c_base, const void *, void *);
        result = __DDS_Duration_t__copyIn(base, &from->lease_duration, &to->lease_duration);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_TimeBasedFilterQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_TimeBasedFilterQosPolicy *from = (const DDS_TimeBasedFilterQosPolicy *)_from;
    struct _DDS_TimeBasedFilterQosPolicy *to = (struct _DDS_TimeBasedFilterQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_Duration_t__copyIn(c_base, const void *, void *);
        result = __DDS_Duration_t__copyIn(base, &from->minimum_separation, &to->minimum_separation);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_PartitionQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_PartitionQosPolicy *from = (const DDS_PartitionQosPolicy *)_from;
    struct _DDS_PartitionQosPolicy *to = (struct _DDS_PartitionQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_StringSeq__copyIn(c_base, const void *, void *);
        result = __DDS_StringSeq__copyIn(base, &from->name, &to->name);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_ReliabilityQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_ReliabilityQosPolicy *from = (const DDS_ReliabilityQosPolicy *)_from;
    struct _DDS_ReliabilityQosPolicy *to = (struct _DDS_ReliabilityQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 601 */
#ifdef OSPL_BOUNDS_CHECK
    if((unsigned)from->kind < 2){
        to->kind = (enum _DDS_ReliabilityQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::ReliabilityQosPolicy.kind' of type 'ReliabilityQosPolicyKind' is out of range.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->kind = (enum _DDS_ReliabilityQosPolicyKind)from->kind;
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_Duration_t__copyIn(c_base, const void *, void *);
        result = __DDS_Duration_t__copyIn(base, &from->max_blocking_time, &to->max_blocking_time);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->synchronous = (c_bool)from->synchronous;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_DestinationOrderQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_DestinationOrderQosPolicy *from = (const DDS_DestinationOrderQosPolicy *)_from;
    struct _DDS_DestinationOrderQosPolicy *to = (struct _DDS_DestinationOrderQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 601 */
#ifdef OSPL_BOUNDS_CHECK
    if((unsigned)from->kind < 2){
        to->kind = (enum _DDS_DestinationOrderQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::DestinationOrderQosPolicy.kind' of type 'DestinationOrderQosPolicyKind' is out of range.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->kind = (enum _DDS_DestinationOrderQosPolicyKind)from->kind;
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_HistoryQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_HistoryQosPolicy *from = (const DDS_HistoryQosPolicy *)_from;
    struct _DDS_HistoryQosPolicy *to = (struct _DDS_HistoryQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 601 */
#ifdef OSPL_BOUNDS_CHECK
    if((unsigned)from->kind < 2){
        to->kind = (enum _DDS_HistoryQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::HistoryQosPolicy.kind' of type 'HistoryQosPolicyKind' is out of range.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->kind = (enum _DDS_HistoryQosPolicyKind)from->kind;
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->depth = (c_long)from->depth;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_ResourceLimitsQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_ResourceLimitsQosPolicy *from = (const DDS_ResourceLimitsQosPolicy *)_from;
    struct _DDS_ResourceLimitsQosPolicy *to = (struct _DDS_ResourceLimitsQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->max_samples = (c_long)from->max_samples;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->max_instances = (c_long)from->max_instances;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->max_samples_per_instance = (c_long)from->max_samples_per_instance;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_DurabilityServiceQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_DurabilityServiceQosPolicy *from = (const DDS_DurabilityServiceQosPolicy *)_from;
    struct _DDS_DurabilityServiceQosPolicy *to = (struct _DDS_DurabilityServiceQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_Duration_t__copyIn(c_base, const void *, void *);
        result = __DDS_Duration_t__copyIn(base, &from->service_cleanup_delay, &to->service_cleanup_delay);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 601 */
#ifdef OSPL_BOUNDS_CHECK
    if((unsigned)from->history_kind < 2){
        to->history_kind = (enum _DDS_HistoryQosPolicyKind)from->history_kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::DurabilityServiceQosPolicy.history_kind' of type 'HistoryQosPolicyKind' is out of range.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->history_kind = (enum _DDS_HistoryQosPolicyKind)from->history_kind;
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->history_depth = (c_long)from->history_depth;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->max_samples = (c_long)from->max_samples;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->max_instances = (c_long)from->max_instances;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->max_samples_per_instance = (c_long)from->max_samples_per_instance;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_ProductDataQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_ProductDataQosPolicy *from = (const DDS_ProductDataQosPolicy *)_from;
    struct _DDS_ProductDataQosPolicy *to = (struct _DDS_ProductDataQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->value) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->value = c_stringNew_s(base, from->value);
        if (to->value == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::ProductDataQosPolicy.value' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->value = c_stringNew_s(base, from->value);
    if ((to->value != NULL) && (to->value == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_EntityFactoryQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_EntityFactoryQosPolicy *from = (const DDS_EntityFactoryQosPolicy *)_from;
    struct _DDS_EntityFactoryQosPolicy *to = (struct _DDS_EntityFactoryQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->autoenable_created_entities = (c_bool)from->autoenable_created_entities;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_ShareQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_ShareQosPolicy *from = (const DDS_ShareQosPolicy *)_from;
    struct _DDS_ShareQosPolicy *to = (struct _DDS_ShareQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->name) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->name = c_stringNew_s(base, from->name);
        if (to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::ShareQosPolicy.name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->name = c_stringNew_s(base, from->name);
    if ((to->name != NULL) && (to->name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->enable = (c_bool)from->enable;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_WriterDataLifecycleQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_WriterDataLifecycleQosPolicy *from = (const DDS_WriterDataLifecycleQosPolicy *)_from;
    struct _DDS_WriterDataLifecycleQosPolicy *to = (struct _DDS_WriterDataLifecycleQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->autodispose_unregistered_instances = (c_bool)from->autodispose_unregistered_instances;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_Duration_t__copyIn(c_base, const void *, void *);
        result = __DDS_Duration_t__copyIn(base, &from->autopurge_suspended_samples_delay, &to->autopurge_suspended_samples_delay);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_Duration_t__copyIn(c_base, const void *, void *);
        result = __DDS_Duration_t__copyIn(base, &from->autounregister_instance_delay, &to->autounregister_instance_delay);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_InvalidSampleVisibilityQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_InvalidSampleVisibilityQosPolicy *from = (const DDS_InvalidSampleVisibilityQosPolicy *)_from;
    struct _DDS_InvalidSampleVisibilityQosPolicy *to = (struct _DDS_InvalidSampleVisibilityQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 601 */
#ifdef OSPL_BOUNDS_CHECK
    if((unsigned)from->kind < 3){
        to->kind = (enum _DDS_InvalidSampleVisibilityQosPolicyKind)from->kind;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::InvalidSampleVisibilityQosPolicy.kind' of type 'InvalidSampleVisibilityQosPolicyKind' is out of range.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->kind = (enum _DDS_InvalidSampleVisibilityQosPolicyKind)from->kind;
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_SubscriptionKeyQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_SubscriptionKeyQosPolicy *from = (const DDS_SubscriptionKeyQosPolicy *)_from;
    struct _DDS_SubscriptionKeyQosPolicy *to = (struct _DDS_SubscriptionKeyQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->use_key_list = (c_bool)from->use_key_list;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_StringSeq__copyIn(c_base, const void *, void *);
        result = __DDS_StringSeq__copyIn(base, &from->key_list, &to->key_list);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_ReaderDataLifecycleQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_ReaderDataLifecycleQosPolicy *from = (const DDS_ReaderDataLifecycleQosPolicy *)_from;
    struct _DDS_ReaderDataLifecycleQosPolicy *to = (struct _DDS_ReaderDataLifecycleQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_Duration_t__copyIn(c_base, const void *, void *);
        result = __DDS_Duration_t__copyIn(base, &from->autopurge_nowriter_samples_delay, &to->autopurge_nowriter_samples_delay);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_Duration_t__copyIn(c_base, const void *, void *);
        result = __DDS_Duration_t__copyIn(base, &from->autopurge_disposed_samples_delay, &to->autopurge_disposed_samples_delay);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->autopurge_dispose_all = (c_bool)from->autopurge_dispose_all;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->enable_invalid_samples = (c_bool)from->enable_invalid_samples;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_InvalidSampleVisibilityQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_InvalidSampleVisibilityQosPolicy__copyIn(base, &from->invalid_sample_visibility, &to->invalid_sample_visibility);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_UserKeyQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_UserKeyQosPolicy *from = (const DDS_UserKeyQosPolicy *)_from;
    struct _DDS_UserKeyQosPolicy *to = (struct _DDS_UserKeyQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->enable = (c_bool)from->enable;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->expression) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->expression = c_stringNew_s(base, from->expression);
        if (to->expression == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::UserKeyQosPolicy.expression' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->expression = c_stringNew_s(base, from->expression);
    if ((to->expression != NULL) && (to->expression == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_ReaderLifespanQosPolicy__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_ReaderLifespanQosPolicy *from = (const DDS_ReaderLifespanQosPolicy *)_from;
    struct _DDS_ReaderLifespanQosPolicy *to = (struct _DDS_ReaderLifespanQosPolicy *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->use_lifespan = (c_bool)from->use_lifespan;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_Duration_t__copyIn(c_base, const void *, void *);
        result = __DDS_Duration_t__copyIn(base, &from->duration, &to->duration);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_TypeHash__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_TypeHash *from = (const DDS_TypeHash *)_from;
    struct _DDS_TypeHash *to = (struct _DDS_TypeHash *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->msb = (c_ulonglong)from->msb;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->lsb = (c_ulonglong)from->lsb;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_ParticipantBuiltinTopicData__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_ParticipantBuiltinTopicData *from = (const DDS_ParticipantBuiltinTopicData *)_from;
    struct _DDS_ParticipantBuiltinTopicData *to = (struct _DDS_ParticipantBuiltinTopicData *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_UserDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_UserDataQosPolicy__copyIn(base, &from->user_data, &to->user_data);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_TopicBuiltinTopicData__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_TopicBuiltinTopicData *from = (const DDS_TopicBuiltinTopicData *)_from;
    struct _DDS_TopicBuiltinTopicData *to = (struct _DDS_TopicBuiltinTopicData *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->name) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->name = c_stringNew_s(base, from->name);
        if (to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::TopicBuiltinTopicData.name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->name = c_stringNew_s(base, from->name);
    if ((to->name != NULL) && (to->name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->type_name) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->type_name = c_stringNew_s(base, from->type_name);
        if (to->type_name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::TopicBuiltinTopicData.type_name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->type_name = c_stringNew_s(base, from->type_name);
    if ((to->type_name != NULL) && (to->type_name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_DurabilityQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_DurabilityQosPolicy__copyIn(base, &from->durability, &to->durability);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_DurabilityServiceQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_DurabilityServiceQosPolicy__copyIn(base, &from->durability_service, &to->durability_service);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_DeadlineQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_DeadlineQosPolicy__copyIn(base, &from->deadline, &to->deadline);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_LatencyBudgetQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_LatencyBudgetQosPolicy__copyIn(base, &from->latency_budget, &to->latency_budget);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_LivelinessQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_LivelinessQosPolicy__copyIn(base, &from->liveliness, &to->liveliness);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ReliabilityQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ReliabilityQosPolicy__copyIn(base, &from->reliability, &to->reliability);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_TransportPriorityQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_TransportPriorityQosPolicy__copyIn(base, &from->transport_priority, &to->transport_priority);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_LifespanQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_LifespanQosPolicy__copyIn(base, &from->lifespan, &to->lifespan);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_DestinationOrderQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_DestinationOrderQosPolicy__copyIn(base, &from->destination_order, &to->destination_order);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_HistoryQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_HistoryQosPolicy__copyIn(base, &from->history, &to->history);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ResourceLimitsQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ResourceLimitsQosPolicy__copyIn(base, &from->resource_limits, &to->resource_limits);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_OwnershipQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_OwnershipQosPolicy__copyIn(base, &from->ownership, &to->ownership);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_TopicDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_TopicDataQosPolicy__copyIn(base, &from->topic_data, &to->topic_data);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_TypeBuiltinTopicData__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_TypeBuiltinTopicData *from = (const DDS_TypeBuiltinTopicData *)_from;
    struct _DDS_TypeBuiltinTopicData *to = (struct _DDS_TypeBuiltinTopicData *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->name) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->name = c_stringNew_s(base, from->name);
        if (to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::TypeBuiltinTopicData.name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->name = c_stringNew_s(base, from->name);
    if ((to->name != NULL) && (to->name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 591 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 320 */
    to->data_representation_id = (c_short)from->data_representation_id;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_TypeHash__copyIn(c_base, const void *, void *);
        result = __DDS_TypeHash__copyIn(base, &from->type_hash, &to->type_hash);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_octSeq__copyIn(c_base, const void *, void *);
        result = __DDS_octSeq__copyIn(base, &from->meta_data, &to->meta_data);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_octSeq__copyIn(c_base, const void *, void *);
        result = __DDS_octSeq__copyIn(base, &from->extentions, &to->extentions);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_PublicationBuiltinTopicData__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_PublicationBuiltinTopicData *from = (const DDS_PublicationBuiltinTopicData *)_from;
    struct _DDS_PublicationBuiltinTopicData *to = (struct _DDS_PublicationBuiltinTopicData *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->participant_key, &to->participant_key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->topic_name) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->topic_name = c_stringNew_s(base, from->topic_name);
        if (to->topic_name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::PublicationBuiltinTopicData.topic_name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->topic_name = c_stringNew_s(base, from->topic_name);
    if ((to->topic_name != NULL) && (to->topic_name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->type_name) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->type_name = c_stringNew_s(base, from->type_name);
        if (to->type_name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::PublicationBuiltinTopicData.type_name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->type_name = c_stringNew_s(base, from->type_name);
    if ((to->type_name != NULL) && (to->type_name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_DurabilityQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_DurabilityQosPolicy__copyIn(base, &from->durability, &to->durability);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_DeadlineQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_DeadlineQosPolicy__copyIn(base, &from->deadline, &to->deadline);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_LatencyBudgetQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_LatencyBudgetQosPolicy__copyIn(base, &from->latency_budget, &to->latency_budget);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_LivelinessQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_LivelinessQosPolicy__copyIn(base, &from->liveliness, &to->liveliness);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ReliabilityQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ReliabilityQosPolicy__copyIn(base, &from->reliability, &to->reliability);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_LifespanQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_LifespanQosPolicy__copyIn(base, &from->lifespan, &to->lifespan);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_DestinationOrderQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_DestinationOrderQosPolicy__copyIn(base, &from->destination_order, &to->destination_order);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_UserDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_UserDataQosPolicy__copyIn(base, &from->user_data, &to->user_data);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_OwnershipQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_OwnershipQosPolicy__copyIn(base, &from->ownership, &to->ownership);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_OwnershipStrengthQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_OwnershipStrengthQosPolicy__copyIn(base, &from->ownership_strength, &to->ownership_strength);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_PresentationQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_PresentationQosPolicy__copyIn(base, &from->presentation, &to->presentation);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_PartitionQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_PartitionQosPolicy__copyIn(base, &from->partition, &to->partition);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_TopicDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_TopicDataQosPolicy__copyIn(base, &from->topic_data, &to->topic_data);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_GroupDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_GroupDataQosPolicy__copyIn(base, &from->group_data, &to->group_data);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_SubscriptionBuiltinTopicData__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_SubscriptionBuiltinTopicData *from = (const DDS_SubscriptionBuiltinTopicData *)_from;
    struct _DDS_SubscriptionBuiltinTopicData *to = (struct _DDS_SubscriptionBuiltinTopicData *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->participant_key, &to->participant_key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->topic_name) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->topic_name = c_stringNew_s(base, from->topic_name);
        if (to->topic_name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::SubscriptionBuiltinTopicData.topic_name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->topic_name = c_stringNew_s(base, from->topic_name);
    if ((to->topic_name != NULL) && (to->topic_name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->type_name) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->type_name = c_stringNew_s(base, from->type_name);
        if (to->type_name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::SubscriptionBuiltinTopicData.type_name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->type_name = c_stringNew_s(base, from->type_name);
    if ((to->type_name != NULL) && (to->type_name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_DurabilityQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_DurabilityQosPolicy__copyIn(base, &from->durability, &to->durability);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_DeadlineQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_DeadlineQosPolicy__copyIn(base, &from->deadline, &to->deadline);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_LatencyBudgetQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_LatencyBudgetQosPolicy__copyIn(base, &from->latency_budget, &to->latency_budget);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_LivelinessQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_LivelinessQosPolicy__copyIn(base, &from->liveliness, &to->liveliness);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ReliabilityQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ReliabilityQosPolicy__copyIn(base, &from->reliability, &to->reliability);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_OwnershipQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_OwnershipQosPolicy__copyIn(base, &from->ownership, &to->ownership);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_DestinationOrderQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_DestinationOrderQosPolicy__copyIn(base, &from->destination_order, &to->destination_order);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_UserDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_UserDataQosPolicy__copyIn(base, &from->user_data, &to->user_data);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_TimeBasedFilterQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_TimeBasedFilterQosPolicy__copyIn(base, &from->time_based_filter, &to->time_based_filter);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_PresentationQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_PresentationQosPolicy__copyIn(base, &from->presentation, &to->presentation);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_PartitionQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_PartitionQosPolicy__copyIn(base, &from->partition, &to->partition);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_TopicDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_TopicDataQosPolicy__copyIn(base, &from->topic_data, &to->topic_data);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_GroupDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_GroupDataQosPolicy__copyIn(base, &from->group_data, &to->group_data);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_CMParticipantBuiltinTopicData__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_CMParticipantBuiltinTopicData *from = (const DDS_CMParticipantBuiltinTopicData *)_from;
    struct _DDS_CMParticipantBuiltinTopicData *to = (struct _DDS_CMParticipantBuiltinTopicData *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ProductDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ProductDataQosPolicy__copyIn(base, &from->product, &to->product);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_CMPublisherBuiltinTopicData__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_CMPublisherBuiltinTopicData *from = (const DDS_CMPublisherBuiltinTopicData *)_from;
    struct _DDS_CMPublisherBuiltinTopicData *to = (struct _DDS_CMPublisherBuiltinTopicData *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ProductDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ProductDataQosPolicy__copyIn(base, &from->product, &to->product);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->participant_key, &to->participant_key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->name) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->name = c_stringNew_s(base, from->name);
        if (to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::CMPublisherBuiltinTopicData.name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->name = c_stringNew_s(base, from->name);
    if ((to->name != NULL) && (to->name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_EntityFactoryQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_EntityFactoryQosPolicy__copyIn(base, &from->entity_factory, &to->entity_factory);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_PartitionQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_PartitionQosPolicy__copyIn(base, &from->partition, &to->partition);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_CMSubscriberBuiltinTopicData__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_CMSubscriberBuiltinTopicData *from = (const DDS_CMSubscriberBuiltinTopicData *)_from;
    struct _DDS_CMSubscriberBuiltinTopicData *to = (struct _DDS_CMSubscriberBuiltinTopicData *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ProductDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ProductDataQosPolicy__copyIn(base, &from->product, &to->product);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->participant_key, &to->participant_key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->name) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->name = c_stringNew_s(base, from->name);
        if (to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::CMSubscriberBuiltinTopicData.name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->name = c_stringNew_s(base, from->name);
    if ((to->name != NULL) && (to->name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_EntityFactoryQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_EntityFactoryQosPolicy__copyIn(base, &from->entity_factory, &to->entity_factory);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ShareQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ShareQosPolicy__copyIn(base, &from->share, &to->share);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_PartitionQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_PartitionQosPolicy__copyIn(base, &from->partition, &to->partition);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_CMDataWriterBuiltinTopicData__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_CMDataWriterBuiltinTopicData *from = (const DDS_CMDataWriterBuiltinTopicData *)_from;
    struct _DDS_CMDataWriterBuiltinTopicData *to = (struct _DDS_CMDataWriterBuiltinTopicData *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ProductDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ProductDataQosPolicy__copyIn(base, &from->product, &to->product);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->publisher_key, &to->publisher_key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->name) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->name = c_stringNew_s(base, from->name);
        if (to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::CMDataWriterBuiltinTopicData.name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->name = c_stringNew_s(base, from->name);
    if ((to->name != NULL) && (to->name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_HistoryQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_HistoryQosPolicy__copyIn(base, &from->history, &to->history);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ResourceLimitsQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ResourceLimitsQosPolicy__copyIn(base, &from->resource_limits, &to->resource_limits);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_WriterDataLifecycleQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_WriterDataLifecycleQosPolicy__copyIn(base, &from->writer_data_lifecycle, &to->writer_data_lifecycle);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 237 */
v_copyin_result
__DDS_CMDataReaderBuiltinTopicData__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const DDS_CMDataReaderBuiltinTopicData *from = (const DDS_CMDataReaderBuiltinTopicData *)_from;
    struct _DDS_CMDataReaderBuiltinTopicData *to = (struct _DDS_CMDataReaderBuiltinTopicData *)_to;
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->key, &to->key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ProductDataQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ProductDataQosPolicy__copyIn(base, &from->product, &to->product);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 582 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_BuiltinTopicKey_t__copyIn(c_base, const void *, void *);
        result = __DDS_BuiltinTopicKey_t__copyIn(base, &from->subscriber_key, &to->subscriber_key);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 544 */
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 326 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->name) {
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 357 */
        to->name = c_stringNew_s(base, from->name);
        if (to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'DDS::CMDataReaderBuiltinTopicData.name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->name = c_stringNew_s(base, from->name);
    if ((to->name != NULL) && (to->name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_HistoryQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_HistoryQosPolicy__copyIn(base, &from->history, &to->history);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ResourceLimitsQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ResourceLimitsQosPolicy__copyIn(base, &from->resource_limits, &to->resource_limits);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ReaderDataLifecycleQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ReaderDataLifecycleQosPolicy__copyIn(base, &from->reader_data_lifecycle, &to->reader_data_lifecycle);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_UserKeyQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_UserKeyQosPolicy__copyIn(base, &from->subscription_keys, &to->subscription_keys);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ReaderLifespanQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ReaderLifespanQosPolicy__copyIn(base, &from->reader_lifespan, &to->reader_lifespan);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 618 */
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __DDS_ShareQosPolicy__copyIn(c_base, const void *, void *);
        result = __DDS_ShareQosPolicy__copyIn(base, &from->share, &to->share);
    }
/* Code generated in file: /mnt/h/home/rfactory/opensplice-master/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 272 */
    (void) base;
    return result;
}

#include <dds_dcps_private.h>

void
__DDS_octSeq__copyOut(const void *_from, void *_to);
void
__DDS_octSeq__copyOut(const void *_from, void *_to)
{
    const _DDS_octSeq *from = (const _DDS_octSeq *)_from;
    DDS_octSeq *to = (DDS_octSeq *)_to;
    DDS_unsigned_long size0;
    const c_octet *src0 = (const c_octet *)(*from);
    DDS_octSeq *dst0 = to;

    size0 = c_arraySize((c_sequence)(src0));
    DDS_sequence_replacebuf ((_DDS_sequence)dst0, (bufferAllocatorType)DDS_octSeq_allocbuf, size0);
    dst0->_length = size0;
    memcpy ((*dst0)._buffer,src0,size0* sizeof(*((*dst0)._buffer)));
}

void
__DDS_BuiltinTopicKey_t__copyOut(const void *_from, void *_to);
void
__DDS_BuiltinTopicKey_t__copyOut(const void *_from, void *_to)
{
    const _DDS_BuiltinTopicKey_t *from = (const _DDS_BuiltinTopicKey_t *)_from;
    DDS_BuiltinTopicKey_t *to = (DDS_BuiltinTopicKey_t *)_to;
    memcpy (*to, from, sizeof (*from));
}

void
__DDS_StringSeq__copyOut(const void *_from, void *_to);
void
__DDS_StringSeq__copyOut(const void *_from, void *_to)
{
    const _DDS_StringSeq *from = (const _DDS_StringSeq *)_from;
    DDS_StringSeq *to = (DDS_StringSeq *)_to;
    DDS_unsigned_long size0;
    const c_string *src0 = (const c_string *)(*from);
    DDS_StringSeq *dst0 = to;

    size0 = c_arraySize((c_sequence)(src0));
    DDS_sequence_replacebuf ((_DDS_sequence)dst0, (bufferAllocatorType)DDS_StringSeq_allocbuf, size0);
    dst0->_length = size0;
    {
        long i0;
        for (i0 = 0; i0 < size0; i0++) {
            DDS_string_replace (src0[i0] ? src0[i0] : "", &(*dst0)._buffer[i0]);
        }
    }
}

void
__DDS_Duration_t__copyOut(const void *_from, void *_to)
{
    const struct _DDS_Duration_t *from = (const struct _DDS_Duration_t *)_from;
    DDS_Duration_t *to = (DDS_Duration_t *)_to;
    to->sec = (DDS_long)from->sec;
    to->nanosec = (DDS_unsigned_long)from->nanosec;
}

void
__DDS_UserDataQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_UserDataQosPolicy *from = (const struct _DDS_UserDataQosPolicy *)_from;
    DDS_UserDataQosPolicy *to = (DDS_UserDataQosPolicy *)_to;
    {
        extern void __DDS_octSeq__copyOut(const void *, void *);
        __DDS_octSeq__copyOut(&from->value, &to->value);
    }
}

void
__DDS_TopicDataQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_TopicDataQosPolicy *from = (const struct _DDS_TopicDataQosPolicy *)_from;
    DDS_TopicDataQosPolicy *to = (DDS_TopicDataQosPolicy *)_to;
    {
        extern void __DDS_octSeq__copyOut(const void *, void *);
        __DDS_octSeq__copyOut(&from->value, &to->value);
    }
}

void
__DDS_GroupDataQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_GroupDataQosPolicy *from = (const struct _DDS_GroupDataQosPolicy *)_from;
    DDS_GroupDataQosPolicy *to = (DDS_GroupDataQosPolicy *)_to;
    {
        extern void __DDS_octSeq__copyOut(const void *, void *);
        __DDS_octSeq__copyOut(&from->value, &to->value);
    }
}

void
__DDS_TransportPriorityQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_TransportPriorityQosPolicy *from = (const struct _DDS_TransportPriorityQosPolicy *)_from;
    DDS_TransportPriorityQosPolicy *to = (DDS_TransportPriorityQosPolicy *)_to;
    to->value = (DDS_long)from->value;
}

void
__DDS_LifespanQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_LifespanQosPolicy *from = (const struct _DDS_LifespanQosPolicy *)_from;
    DDS_LifespanQosPolicy *to = (DDS_LifespanQosPolicy *)_to;
    {
        extern void __DDS_Duration_t__copyOut(const void *, void *);
        __DDS_Duration_t__copyOut(&from->duration, &to->duration);
    }
}

void
__DDS_DurabilityQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_DurabilityQosPolicy *from = (const struct _DDS_DurabilityQosPolicy *)_from;
    DDS_DurabilityQosPolicy *to = (DDS_DurabilityQosPolicy *)_to;
    to->kind = (DDS_DurabilityQosPolicyKind)from->kind;
}

void
__DDS_PresentationQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_PresentationQosPolicy *from = (const struct _DDS_PresentationQosPolicy *)_from;
    DDS_PresentationQosPolicy *to = (DDS_PresentationQosPolicy *)_to;
    to->access_scope = (DDS_PresentationQosPolicyAccessScopeKind)from->access_scope;
    to->coherent_access = (DDS_boolean)from->coherent_access;
    to->ordered_access = (DDS_boolean)from->ordered_access;
}

void
__DDS_DeadlineQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_DeadlineQosPolicy *from = (const struct _DDS_DeadlineQosPolicy *)_from;
    DDS_DeadlineQosPolicy *to = (DDS_DeadlineQosPolicy *)_to;
    {
        extern void __DDS_Duration_t__copyOut(const void *, void *);
        __DDS_Duration_t__copyOut(&from->period, &to->period);
    }
}

void
__DDS_LatencyBudgetQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_LatencyBudgetQosPolicy *from = (const struct _DDS_LatencyBudgetQosPolicy *)_from;
    DDS_LatencyBudgetQosPolicy *to = (DDS_LatencyBudgetQosPolicy *)_to;
    {
        extern void __DDS_Duration_t__copyOut(const void *, void *);
        __DDS_Duration_t__copyOut(&from->duration, &to->duration);
    }
}

void
__DDS_OwnershipQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_OwnershipQosPolicy *from = (const struct _DDS_OwnershipQosPolicy *)_from;
    DDS_OwnershipQosPolicy *to = (DDS_OwnershipQosPolicy *)_to;
    to->kind = (DDS_OwnershipQosPolicyKind)from->kind;
}

void
__DDS_OwnershipStrengthQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_OwnershipStrengthQosPolicy *from = (const struct _DDS_OwnershipStrengthQosPolicy *)_from;
    DDS_OwnershipStrengthQosPolicy *to = (DDS_OwnershipStrengthQosPolicy *)_to;
    to->value = (DDS_long)from->value;
}

void
__DDS_LivelinessQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_LivelinessQosPolicy *from = (const struct _DDS_LivelinessQosPolicy *)_from;
    DDS_LivelinessQosPolicy *to = (DDS_LivelinessQosPolicy *)_to;
    to->kind = (DDS_LivelinessQosPolicyKind)from->kind;
    {
        extern void __DDS_Duration_t__copyOut(const void *, void *);
        __DDS_Duration_t__copyOut(&from->lease_duration, &to->lease_duration);
    }
}

void
__DDS_TimeBasedFilterQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_TimeBasedFilterQosPolicy *from = (const struct _DDS_TimeBasedFilterQosPolicy *)_from;
    DDS_TimeBasedFilterQosPolicy *to = (DDS_TimeBasedFilterQosPolicy *)_to;
    {
        extern void __DDS_Duration_t__copyOut(const void *, void *);
        __DDS_Duration_t__copyOut(&from->minimum_separation, &to->minimum_separation);
    }
}

void
__DDS_PartitionQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_PartitionQosPolicy *from = (const struct _DDS_PartitionQosPolicy *)_from;
    DDS_PartitionQosPolicy *to = (DDS_PartitionQosPolicy *)_to;
    {
        extern void __DDS_StringSeq__copyOut(const void *, void *);
        __DDS_StringSeq__copyOut(&from->name, &to->name);
    }
}

void
__DDS_ReliabilityQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_ReliabilityQosPolicy *from = (const struct _DDS_ReliabilityQosPolicy *)_from;
    DDS_ReliabilityQosPolicy *to = (DDS_ReliabilityQosPolicy *)_to;
    to->kind = (DDS_ReliabilityQosPolicyKind)from->kind;
    {
        extern void __DDS_Duration_t__copyOut(const void *, void *);
        __DDS_Duration_t__copyOut(&from->max_blocking_time, &to->max_blocking_time);
    }
    to->synchronous = (DDS_boolean)from->synchronous;
}

void
__DDS_DestinationOrderQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_DestinationOrderQosPolicy *from = (const struct _DDS_DestinationOrderQosPolicy *)_from;
    DDS_DestinationOrderQosPolicy *to = (DDS_DestinationOrderQosPolicy *)_to;
    to->kind = (DDS_DestinationOrderQosPolicyKind)from->kind;
}

void
__DDS_HistoryQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_HistoryQosPolicy *from = (const struct _DDS_HistoryQosPolicy *)_from;
    DDS_HistoryQosPolicy *to = (DDS_HistoryQosPolicy *)_to;
    to->kind = (DDS_HistoryQosPolicyKind)from->kind;
    to->depth = (DDS_long)from->depth;
}

void
__DDS_ResourceLimitsQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_ResourceLimitsQosPolicy *from = (const struct _DDS_ResourceLimitsQosPolicy *)_from;
    DDS_ResourceLimitsQosPolicy *to = (DDS_ResourceLimitsQosPolicy *)_to;
    to->max_samples = (DDS_long)from->max_samples;
    to->max_instances = (DDS_long)from->max_instances;
    to->max_samples_per_instance = (DDS_long)from->max_samples_per_instance;
}

void
__DDS_DurabilityServiceQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_DurabilityServiceQosPolicy *from = (const struct _DDS_DurabilityServiceQosPolicy *)_from;
    DDS_DurabilityServiceQosPolicy *to = (DDS_DurabilityServiceQosPolicy *)_to;
    {
        extern void __DDS_Duration_t__copyOut(const void *, void *);
        __DDS_Duration_t__copyOut(&from->service_cleanup_delay, &to->service_cleanup_delay);
    }
    to->history_kind = (DDS_HistoryQosPolicyKind)from->history_kind;
    to->history_depth = (DDS_long)from->history_depth;
    to->max_samples = (DDS_long)from->max_samples;
    to->max_instances = (DDS_long)from->max_instances;
    to->max_samples_per_instance = (DDS_long)from->max_samples_per_instance;
}

void
__DDS_ProductDataQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_ProductDataQosPolicy *from = (const struct _DDS_ProductDataQosPolicy *)_from;
    DDS_ProductDataQosPolicy *to = (DDS_ProductDataQosPolicy *)_to;
    DDS_string_replace (from->value ? from->value : "", &to->value);
}

void
__DDS_EntityFactoryQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_EntityFactoryQosPolicy *from = (const struct _DDS_EntityFactoryQosPolicy *)_from;
    DDS_EntityFactoryQosPolicy *to = (DDS_EntityFactoryQosPolicy *)_to;
    to->autoenable_created_entities = (DDS_boolean)from->autoenable_created_entities;
}

void
__DDS_ShareQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_ShareQosPolicy *from = (const struct _DDS_ShareQosPolicy *)_from;
    DDS_ShareQosPolicy *to = (DDS_ShareQosPolicy *)_to;
    DDS_string_replace (from->name ? from->name : "", &to->name);
    to->enable = (DDS_boolean)from->enable;
}

void
__DDS_WriterDataLifecycleQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_WriterDataLifecycleQosPolicy *from = (const struct _DDS_WriterDataLifecycleQosPolicy *)_from;
    DDS_WriterDataLifecycleQosPolicy *to = (DDS_WriterDataLifecycleQosPolicy *)_to;
    to->autodispose_unregistered_instances = (DDS_boolean)from->autodispose_unregistered_instances;
    {
        extern void __DDS_Duration_t__copyOut(const void *, void *);
        __DDS_Duration_t__copyOut(&from->autopurge_suspended_samples_delay, &to->autopurge_suspended_samples_delay);
    }
    {
        extern void __DDS_Duration_t__copyOut(const void *, void *);
        __DDS_Duration_t__copyOut(&from->autounregister_instance_delay, &to->autounregister_instance_delay);
    }
}

void
__DDS_InvalidSampleVisibilityQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_InvalidSampleVisibilityQosPolicy *from = (const struct _DDS_InvalidSampleVisibilityQosPolicy *)_from;
    DDS_InvalidSampleVisibilityQosPolicy *to = (DDS_InvalidSampleVisibilityQosPolicy *)_to;
    to->kind = (DDS_InvalidSampleVisibilityQosPolicyKind)from->kind;
}

void
__DDS_SubscriptionKeyQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_SubscriptionKeyQosPolicy *from = (const struct _DDS_SubscriptionKeyQosPolicy *)_from;
    DDS_SubscriptionKeyQosPolicy *to = (DDS_SubscriptionKeyQosPolicy *)_to;
    to->use_key_list = (DDS_boolean)from->use_key_list;
    {
        extern void __DDS_StringSeq__copyOut(const void *, void *);
        __DDS_StringSeq__copyOut(&from->key_list, &to->key_list);
    }
}

void
__DDS_ReaderDataLifecycleQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_ReaderDataLifecycleQosPolicy *from = (const struct _DDS_ReaderDataLifecycleQosPolicy *)_from;
    DDS_ReaderDataLifecycleQosPolicy *to = (DDS_ReaderDataLifecycleQosPolicy *)_to;
    {
        extern void __DDS_Duration_t__copyOut(const void *, void *);
        __DDS_Duration_t__copyOut(&from->autopurge_nowriter_samples_delay, &to->autopurge_nowriter_samples_delay);
    }
    {
        extern void __DDS_Duration_t__copyOut(const void *, void *);
        __DDS_Duration_t__copyOut(&from->autopurge_disposed_samples_delay, &to->autopurge_disposed_samples_delay);
    }
    to->autopurge_dispose_all = (DDS_boolean)from->autopurge_dispose_all;
    to->enable_invalid_samples = (DDS_boolean)from->enable_invalid_samples;
    {
        extern void __DDS_InvalidSampleVisibilityQosPolicy__copyOut(const void *, void *);
        __DDS_InvalidSampleVisibilityQosPolicy__copyOut(&from->invalid_sample_visibility, &to->invalid_sample_visibility);
    }
}

void
__DDS_UserKeyQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_UserKeyQosPolicy *from = (const struct _DDS_UserKeyQosPolicy *)_from;
    DDS_UserKeyQosPolicy *to = (DDS_UserKeyQosPolicy *)_to;
    to->enable = (DDS_boolean)from->enable;
    DDS_string_replace (from->expression ? from->expression : "", &to->expression);
}

void
__DDS_ReaderLifespanQosPolicy__copyOut(const void *_from, void *_to)
{
    const struct _DDS_ReaderLifespanQosPolicy *from = (const struct _DDS_ReaderLifespanQosPolicy *)_from;
    DDS_ReaderLifespanQosPolicy *to = (DDS_ReaderLifespanQosPolicy *)_to;
    to->use_lifespan = (DDS_boolean)from->use_lifespan;
    {
        extern void __DDS_Duration_t__copyOut(const void *, void *);
        __DDS_Duration_t__copyOut(&from->duration, &to->duration);
    }
}

void
__DDS_TypeHash__copyOut(const void *_from, void *_to)
{
    const struct _DDS_TypeHash *from = (const struct _DDS_TypeHash *)_from;
    DDS_TypeHash *to = (DDS_TypeHash *)_to;
    to->msb = (DDS_unsigned_long_long)from->msb;
    to->lsb = (DDS_unsigned_long_long)from->lsb;
}

void
__DDS_ParticipantBuiltinTopicData__copyOut(const void *_from, void *_to)
{
    const struct _DDS_ParticipantBuiltinTopicData *from = (const struct _DDS_ParticipantBuiltinTopicData *)_from;
    DDS_ParticipantBuiltinTopicData *to = (DDS_ParticipantBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->key, &to->key);
    }
    {
        extern void __DDS_UserDataQosPolicy__copyOut(const void *, void *);
        __DDS_UserDataQosPolicy__copyOut(&from->user_data, &to->user_data);
    }
}

void
__DDS_TopicBuiltinTopicData__copyOut(const void *_from, void *_to)
{
    const struct _DDS_TopicBuiltinTopicData *from = (const struct _DDS_TopicBuiltinTopicData *)_from;
    DDS_TopicBuiltinTopicData *to = (DDS_TopicBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->key, &to->key);
    }
    DDS_string_replace (from->name ? from->name : "", &to->name);
    DDS_string_replace (from->type_name ? from->type_name : "", &to->type_name);
    {
        extern void __DDS_DurabilityQosPolicy__copyOut(const void *, void *);
        __DDS_DurabilityQosPolicy__copyOut(&from->durability, &to->durability);
    }
    {
        extern void __DDS_DurabilityServiceQosPolicy__copyOut(const void *, void *);
        __DDS_DurabilityServiceQosPolicy__copyOut(&from->durability_service, &to->durability_service);
    }
    {
        extern void __DDS_DeadlineQosPolicy__copyOut(const void *, void *);
        __DDS_DeadlineQosPolicy__copyOut(&from->deadline, &to->deadline);
    }
    {
        extern void __DDS_LatencyBudgetQosPolicy__copyOut(const void *, void *);
        __DDS_LatencyBudgetQosPolicy__copyOut(&from->latency_budget, &to->latency_budget);
    }
    {
        extern void __DDS_LivelinessQosPolicy__copyOut(const void *, void *);
        __DDS_LivelinessQosPolicy__copyOut(&from->liveliness, &to->liveliness);
    }
    {
        extern void __DDS_ReliabilityQosPolicy__copyOut(const void *, void *);
        __DDS_ReliabilityQosPolicy__copyOut(&from->reliability, &to->reliability);
    }
    {
        extern void __DDS_TransportPriorityQosPolicy__copyOut(const void *, void *);
        __DDS_TransportPriorityQosPolicy__copyOut(&from->transport_priority, &to->transport_priority);
    }
    {
        extern void __DDS_LifespanQosPolicy__copyOut(const void *, void *);
        __DDS_LifespanQosPolicy__copyOut(&from->lifespan, &to->lifespan);
    }
    {
        extern void __DDS_DestinationOrderQosPolicy__copyOut(const void *, void *);
        __DDS_DestinationOrderQosPolicy__copyOut(&from->destination_order, &to->destination_order);
    }
    {
        extern void __DDS_HistoryQosPolicy__copyOut(const void *, void *);
        __DDS_HistoryQosPolicy__copyOut(&from->history, &to->history);
    }
    {
        extern void __DDS_ResourceLimitsQosPolicy__copyOut(const void *, void *);
        __DDS_ResourceLimitsQosPolicy__copyOut(&from->resource_limits, &to->resource_limits);
    }
    {
        extern void __DDS_OwnershipQosPolicy__copyOut(const void *, void *);
        __DDS_OwnershipQosPolicy__copyOut(&from->ownership, &to->ownership);
    }
    {
        extern void __DDS_TopicDataQosPolicy__copyOut(const void *, void *);
        __DDS_TopicDataQosPolicy__copyOut(&from->topic_data, &to->topic_data);
    }
}

void
__DDS_TypeBuiltinTopicData__copyOut(const void *_from, void *_to)
{
    const struct _DDS_TypeBuiltinTopicData *from = (const struct _DDS_TypeBuiltinTopicData *)_from;
    DDS_TypeBuiltinTopicData *to = (DDS_TypeBuiltinTopicData *)_to;
    DDS_string_replace (from->name ? from->name : "", &to->name);
    to->data_representation_id = (DDS_short)from->data_representation_id;
    {
        extern void __DDS_TypeHash__copyOut(const void *, void *);
        __DDS_TypeHash__copyOut(&from->type_hash, &to->type_hash);
    }
    {
        extern void __DDS_octSeq__copyOut(const void *, void *);
        __DDS_octSeq__copyOut(&from->meta_data, &to->meta_data);
    }
    {
        extern void __DDS_octSeq__copyOut(const void *, void *);
        __DDS_octSeq__copyOut(&from->extentions, &to->extentions);
    }
}

void
__DDS_PublicationBuiltinTopicData__copyOut(const void *_from, void *_to)
{
    const struct _DDS_PublicationBuiltinTopicData *from = (const struct _DDS_PublicationBuiltinTopicData *)_from;
    DDS_PublicationBuiltinTopicData *to = (DDS_PublicationBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->key, &to->key);
    }
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->participant_key, &to->participant_key);
    }
    DDS_string_replace (from->topic_name ? from->topic_name : "", &to->topic_name);
    DDS_string_replace (from->type_name ? from->type_name : "", &to->type_name);
    {
        extern void __DDS_DurabilityQosPolicy__copyOut(const void *, void *);
        __DDS_DurabilityQosPolicy__copyOut(&from->durability, &to->durability);
    }
    {
        extern void __DDS_DeadlineQosPolicy__copyOut(const void *, void *);
        __DDS_DeadlineQosPolicy__copyOut(&from->deadline, &to->deadline);
    }
    {
        extern void __DDS_LatencyBudgetQosPolicy__copyOut(const void *, void *);
        __DDS_LatencyBudgetQosPolicy__copyOut(&from->latency_budget, &to->latency_budget);
    }
    {
        extern void __DDS_LivelinessQosPolicy__copyOut(const void *, void *);
        __DDS_LivelinessQosPolicy__copyOut(&from->liveliness, &to->liveliness);
    }
    {
        extern void __DDS_ReliabilityQosPolicy__copyOut(const void *, void *);
        __DDS_ReliabilityQosPolicy__copyOut(&from->reliability, &to->reliability);
    }
    {
        extern void __DDS_LifespanQosPolicy__copyOut(const void *, void *);
        __DDS_LifespanQosPolicy__copyOut(&from->lifespan, &to->lifespan);
    }
    {
        extern void __DDS_DestinationOrderQosPolicy__copyOut(const void *, void *);
        __DDS_DestinationOrderQosPolicy__copyOut(&from->destination_order, &to->destination_order);
    }
    {
        extern void __DDS_UserDataQosPolicy__copyOut(const void *, void *);
        __DDS_UserDataQosPolicy__copyOut(&from->user_data, &to->user_data);
    }
    {
        extern void __DDS_OwnershipQosPolicy__copyOut(const void *, void *);
        __DDS_OwnershipQosPolicy__copyOut(&from->ownership, &to->ownership);
    }
    {
        extern void __DDS_OwnershipStrengthQosPolicy__copyOut(const void *, void *);
        __DDS_OwnershipStrengthQosPolicy__copyOut(&from->ownership_strength, &to->ownership_strength);
    }
    {
        extern void __DDS_PresentationQosPolicy__copyOut(const void *, void *);
        __DDS_PresentationQosPolicy__copyOut(&from->presentation, &to->presentation);
    }
    {
        extern void __DDS_PartitionQosPolicy__copyOut(const void *, void *);
        __DDS_PartitionQosPolicy__copyOut(&from->partition, &to->partition);
    }
    {
        extern void __DDS_TopicDataQosPolicy__copyOut(const void *, void *);
        __DDS_TopicDataQosPolicy__copyOut(&from->topic_data, &to->topic_data);
    }
    {
        extern void __DDS_GroupDataQosPolicy__copyOut(const void *, void *);
        __DDS_GroupDataQosPolicy__copyOut(&from->group_data, &to->group_data);
    }
}

void
__DDS_SubscriptionBuiltinTopicData__copyOut(const void *_from, void *_to)
{
    const struct _DDS_SubscriptionBuiltinTopicData *from = (const struct _DDS_SubscriptionBuiltinTopicData *)_from;
    DDS_SubscriptionBuiltinTopicData *to = (DDS_SubscriptionBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->key, &to->key);
    }
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->participant_key, &to->participant_key);
    }
    DDS_string_replace (from->topic_name ? from->topic_name : "", &to->topic_name);
    DDS_string_replace (from->type_name ? from->type_name : "", &to->type_name);
    {
        extern void __DDS_DurabilityQosPolicy__copyOut(const void *, void *);
        __DDS_DurabilityQosPolicy__copyOut(&from->durability, &to->durability);
    }
    {
        extern void __DDS_DeadlineQosPolicy__copyOut(const void *, void *);
        __DDS_DeadlineQosPolicy__copyOut(&from->deadline, &to->deadline);
    }
    {
        extern void __DDS_LatencyBudgetQosPolicy__copyOut(const void *, void *);
        __DDS_LatencyBudgetQosPolicy__copyOut(&from->latency_budget, &to->latency_budget);
    }
    {
        extern void __DDS_LivelinessQosPolicy__copyOut(const void *, void *);
        __DDS_LivelinessQosPolicy__copyOut(&from->liveliness, &to->liveliness);
    }
    {
        extern void __DDS_ReliabilityQosPolicy__copyOut(const void *, void *);
        __DDS_ReliabilityQosPolicy__copyOut(&from->reliability, &to->reliability);
    }
    {
        extern void __DDS_OwnershipQosPolicy__copyOut(const void *, void *);
        __DDS_OwnershipQosPolicy__copyOut(&from->ownership, &to->ownership);
    }
    {
        extern void __DDS_DestinationOrderQosPolicy__copyOut(const void *, void *);
        __DDS_DestinationOrderQosPolicy__copyOut(&from->destination_order, &to->destination_order);
    }
    {
        extern void __DDS_UserDataQosPolicy__copyOut(const void *, void *);
        __DDS_UserDataQosPolicy__copyOut(&from->user_data, &to->user_data);
    }
    {
        extern void __DDS_TimeBasedFilterQosPolicy__copyOut(const void *, void *);
        __DDS_TimeBasedFilterQosPolicy__copyOut(&from->time_based_filter, &to->time_based_filter);
    }
    {
        extern void __DDS_PresentationQosPolicy__copyOut(const void *, void *);
        __DDS_PresentationQosPolicy__copyOut(&from->presentation, &to->presentation);
    }
    {
        extern void __DDS_PartitionQosPolicy__copyOut(const void *, void *);
        __DDS_PartitionQosPolicy__copyOut(&from->partition, &to->partition);
    }
    {
        extern void __DDS_TopicDataQosPolicy__copyOut(const void *, void *);
        __DDS_TopicDataQosPolicy__copyOut(&from->topic_data, &to->topic_data);
    }
    {
        extern void __DDS_GroupDataQosPolicy__copyOut(const void *, void *);
        __DDS_GroupDataQosPolicy__copyOut(&from->group_data, &to->group_data);
    }
}

void
__DDS_CMParticipantBuiltinTopicData__copyOut(const void *_from, void *_to)
{
    const struct _DDS_CMParticipantBuiltinTopicData *from = (const struct _DDS_CMParticipantBuiltinTopicData *)_from;
    DDS_CMParticipantBuiltinTopicData *to = (DDS_CMParticipantBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->key, &to->key);
    }
    {
        extern void __DDS_ProductDataQosPolicy__copyOut(const void *, void *);
        __DDS_ProductDataQosPolicy__copyOut(&from->product, &to->product);
    }
}

void
__DDS_CMPublisherBuiltinTopicData__copyOut(const void *_from, void *_to)
{
    const struct _DDS_CMPublisherBuiltinTopicData *from = (const struct _DDS_CMPublisherBuiltinTopicData *)_from;
    DDS_CMPublisherBuiltinTopicData *to = (DDS_CMPublisherBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->key, &to->key);
    }
    {
        extern void __DDS_ProductDataQosPolicy__copyOut(const void *, void *);
        __DDS_ProductDataQosPolicy__copyOut(&from->product, &to->product);
    }
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->participant_key, &to->participant_key);
    }
    DDS_string_replace (from->name ? from->name : "", &to->name);
    {
        extern void __DDS_EntityFactoryQosPolicy__copyOut(const void *, void *);
        __DDS_EntityFactoryQosPolicy__copyOut(&from->entity_factory, &to->entity_factory);
    }
    {
        extern void __DDS_PartitionQosPolicy__copyOut(const void *, void *);
        __DDS_PartitionQosPolicy__copyOut(&from->partition, &to->partition);
    }
}

void
__DDS_CMSubscriberBuiltinTopicData__copyOut(const void *_from, void *_to)
{
    const struct _DDS_CMSubscriberBuiltinTopicData *from = (const struct _DDS_CMSubscriberBuiltinTopicData *)_from;
    DDS_CMSubscriberBuiltinTopicData *to = (DDS_CMSubscriberBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->key, &to->key);
    }
    {
        extern void __DDS_ProductDataQosPolicy__copyOut(const void *, void *);
        __DDS_ProductDataQosPolicy__copyOut(&from->product, &to->product);
    }
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->participant_key, &to->participant_key);
    }
    DDS_string_replace (from->name ? from->name : "", &to->name);
    {
        extern void __DDS_EntityFactoryQosPolicy__copyOut(const void *, void *);
        __DDS_EntityFactoryQosPolicy__copyOut(&from->entity_factory, &to->entity_factory);
    }
    {
        extern void __DDS_ShareQosPolicy__copyOut(const void *, void *);
        __DDS_ShareQosPolicy__copyOut(&from->share, &to->share);
    }
    {
        extern void __DDS_PartitionQosPolicy__copyOut(const void *, void *);
        __DDS_PartitionQosPolicy__copyOut(&from->partition, &to->partition);
    }
}

void
__DDS_CMDataWriterBuiltinTopicData__copyOut(const void *_from, void *_to)
{
    const struct _DDS_CMDataWriterBuiltinTopicData *from = (const struct _DDS_CMDataWriterBuiltinTopicData *)_from;
    DDS_CMDataWriterBuiltinTopicData *to = (DDS_CMDataWriterBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->key, &to->key);
    }
    {
        extern void __DDS_ProductDataQosPolicy__copyOut(const void *, void *);
        __DDS_ProductDataQosPolicy__copyOut(&from->product, &to->product);
    }
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->publisher_key, &to->publisher_key);
    }
    DDS_string_replace (from->name ? from->name : "", &to->name);
    {
        extern void __DDS_HistoryQosPolicy__copyOut(const void *, void *);
        __DDS_HistoryQosPolicy__copyOut(&from->history, &to->history);
    }
    {
        extern void __DDS_ResourceLimitsQosPolicy__copyOut(const void *, void *);
        __DDS_ResourceLimitsQosPolicy__copyOut(&from->resource_limits, &to->resource_limits);
    }
    {
        extern void __DDS_WriterDataLifecycleQosPolicy__copyOut(const void *, void *);
        __DDS_WriterDataLifecycleQosPolicy__copyOut(&from->writer_data_lifecycle, &to->writer_data_lifecycle);
    }
}

void
__DDS_CMDataReaderBuiltinTopicData__copyOut(const void *_from, void *_to)
{
    const struct _DDS_CMDataReaderBuiltinTopicData *from = (const struct _DDS_CMDataReaderBuiltinTopicData *)_from;
    DDS_CMDataReaderBuiltinTopicData *to = (DDS_CMDataReaderBuiltinTopicData *)_to;
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->key, &to->key);
    }
    {
        extern void __DDS_ProductDataQosPolicy__copyOut(const void *, void *);
        __DDS_ProductDataQosPolicy__copyOut(&from->product, &to->product);
    }
    {
        extern void __DDS_BuiltinTopicKey_t__copyOut(const void *, void *);
        __DDS_BuiltinTopicKey_t__copyOut(&from->subscriber_key, &to->subscriber_key);
    }
    DDS_string_replace (from->name ? from->name : "", &to->name);
    {
        extern void __DDS_HistoryQosPolicy__copyOut(const void *, void *);
        __DDS_HistoryQosPolicy__copyOut(&from->history, &to->history);
    }
    {
        extern void __DDS_ResourceLimitsQosPolicy__copyOut(const void *, void *);
        __DDS_ResourceLimitsQosPolicy__copyOut(&from->resource_limits, &to->resource_limits);
    }
    {
        extern void __DDS_ReaderDataLifecycleQosPolicy__copyOut(const void *, void *);
        __DDS_ReaderDataLifecycleQosPolicy__copyOut(&from->reader_data_lifecycle, &to->reader_data_lifecycle);
    }
    {
        extern void __DDS_UserKeyQosPolicy__copyOut(const void *, void *);
        __DDS_UserKeyQosPolicy__copyOut(&from->subscription_keys, &to->subscription_keys);
    }
    {
        extern void __DDS_ReaderLifespanQosPolicy__copyOut(const void *, void *);
        __DDS_ReaderLifespanQosPolicy__copyOut(&from->reader_lifespan, &to->reader_lifespan);
    }
    {
        extern void __DDS_ShareQosPolicy__copyOut(const void *, void *);
        __DDS_ShareQosPolicy__copyOut(&from->share, &to->share);
    }
}

DDS_octSeq *DDS_octSeq__alloc (void)
{
    return (DDS_octSeq *)DDS_sequence_octet__alloc ();
}

DDS_octet *DDS_octSeq_allocbuf (DDS_unsigned_long len)
{
    return (DDS_octet *)DDS_sequence_octet_allocbuf(len);
}

DDS_BuiltinTopicKey_t_slice *DDS_BuiltinTopicKey_t__alloc (void)
{
    return (DDS_BuiltinTopicKey_t_slice *)DDS_alloc(sizeof(DDS_BuiltinTopicKey_t), NULL);
}

DDS_StringSeq *DDS_StringSeq__alloc (void)
{
    return (DDS_StringSeq *)DDS_sequence_string__alloc ();
}

DDS_string *DDS_StringSeq_allocbuf (DDS_unsigned_long len)
{
    return (DDS_string *)DDS_sequence_string_allocbuf(len);
}

DDS_Duration_t *DDS_Duration_t__alloc (void)
{
    return (DDS_Duration_t *)DDS_alloc(sizeof(DDS_Duration_t), NULL);
}

DDS_UserDataQosPolicy *DDS_UserDataQosPolicy__alloc (void)
{
    DDS_ReturnCode_t DDS_UserDataQosPolicy__free (void *object);

    return (DDS_UserDataQosPolicy *)DDS_alloc(sizeof(DDS_UserDataQosPolicy), DDS_UserDataQosPolicy__free);
}

DDS_ReturnCode_t DDS_UserDataQosPolicy__free (void *object);
DDS_ReturnCode_t DDS_UserDataQosPolicy__free (void *object)
{
    DDS_UserDataQosPolicy *o = (DDS_UserDataQosPolicy *)object;

    (void) o;

    DDS_sequence_clean ((_DDS_sequence)&o->value);
    return DDS_RETCODE_OK;
}

DDS_TopicDataQosPolicy *DDS_TopicDataQosPolicy__alloc (void)
{
    DDS_ReturnCode_t DDS_TopicDataQosPolicy__free (void *object);

    return (DDS_TopicDataQosPolicy *)DDS_alloc(sizeof(DDS_TopicDataQosPolicy), DDS_TopicDataQosPolicy__free);
}

DDS_ReturnCode_t DDS_TopicDataQosPolicy__free (void *object);
DDS_ReturnCode_t DDS_TopicDataQosPolicy__free (void *object)
{
    DDS_TopicDataQosPolicy *o = (DDS_TopicDataQosPolicy *)object;

    (void) o;

    DDS_sequence_clean ((_DDS_sequence)&o->value);
    return DDS_RETCODE_OK;
}

DDS_GroupDataQosPolicy *DDS_GroupDataQosPolicy__alloc (void)
{
    DDS_ReturnCode_t DDS_GroupDataQosPolicy__free (void *object);

    return (DDS_GroupDataQosPolicy *)DDS_alloc(sizeof(DDS_GroupDataQosPolicy), DDS_GroupDataQosPolicy__free);
}

DDS_ReturnCode_t DDS_GroupDataQosPolicy__free (void *object);
DDS_ReturnCode_t DDS_GroupDataQosPolicy__free (void *object)
{
    DDS_GroupDataQosPolicy *o = (DDS_GroupDataQosPolicy *)object;

    (void) o;

    DDS_sequence_clean ((_DDS_sequence)&o->value);
    return DDS_RETCODE_OK;
}

DDS_TransportPriorityQosPolicy *DDS_TransportPriorityQosPolicy__alloc (void)
{
    return (DDS_TransportPriorityQosPolicy *)DDS_alloc(sizeof(DDS_TransportPriorityQosPolicy), NULL);
}

DDS_LifespanQosPolicy *DDS_LifespanQosPolicy__alloc (void)
{
    return (DDS_LifespanQosPolicy *)DDS_alloc(sizeof(DDS_LifespanQosPolicy), NULL);
}

DDS_DurabilityQosPolicy *DDS_DurabilityQosPolicy__alloc (void)
{
    return (DDS_DurabilityQosPolicy *)DDS_alloc(sizeof(DDS_DurabilityQosPolicy), NULL);
}

DDS_PresentationQosPolicy *DDS_PresentationQosPolicy__alloc (void)
{
    return (DDS_PresentationQosPolicy *)DDS_alloc(sizeof(DDS_PresentationQosPolicy), NULL);
}

DDS_DeadlineQosPolicy *DDS_DeadlineQosPolicy__alloc (void)
{
    return (DDS_DeadlineQosPolicy *)DDS_alloc(sizeof(DDS_DeadlineQosPolicy), NULL);
}

DDS_LatencyBudgetQosPolicy *DDS_LatencyBudgetQosPolicy__alloc (void)
{
    return (DDS_LatencyBudgetQosPolicy *)DDS_alloc(sizeof(DDS_LatencyBudgetQosPolicy), NULL);
}

DDS_OwnershipQosPolicy *DDS_OwnershipQosPolicy__alloc (void)
{
    return (DDS_OwnershipQosPolicy *)DDS_alloc(sizeof(DDS_OwnershipQosPolicy), NULL);
}

DDS_OwnershipStrengthQosPolicy *DDS_OwnershipStrengthQosPolicy__alloc (void)
{
    return (DDS_OwnershipStrengthQosPolicy *)DDS_alloc(sizeof(DDS_OwnershipStrengthQosPolicy), NULL);
}

DDS_LivelinessQosPolicy *DDS_LivelinessQosPolicy__alloc (void)
{
    return (DDS_LivelinessQosPolicy *)DDS_alloc(sizeof(DDS_LivelinessQosPolicy), NULL);
}

DDS_TimeBasedFilterQosPolicy *DDS_TimeBasedFilterQosPolicy__alloc (void)
{
    return (DDS_TimeBasedFilterQosPolicy *)DDS_alloc(sizeof(DDS_TimeBasedFilterQosPolicy), NULL);
}

DDS_PartitionQosPolicy *DDS_PartitionQosPolicy__alloc (void)
{
    DDS_ReturnCode_t DDS_PartitionQosPolicy__free (void *object);

    return (DDS_PartitionQosPolicy *)DDS_alloc(sizeof(DDS_PartitionQosPolicy), DDS_PartitionQosPolicy__free);
}

DDS_ReturnCode_t DDS_PartitionQosPolicy__free (void *object);
DDS_ReturnCode_t DDS_PartitionQosPolicy__free (void *object)
{
    DDS_PartitionQosPolicy *o = (DDS_PartitionQosPolicy *)object;

    (void) o;

    DDS_sequence_clean ((_DDS_sequence)&o->name);
    return DDS_RETCODE_OK;
}

DDS_ReliabilityQosPolicy *DDS_ReliabilityQosPolicy__alloc (void)
{
    return (DDS_ReliabilityQosPolicy *)DDS_alloc(sizeof(DDS_ReliabilityQosPolicy), NULL);
}

DDS_DestinationOrderQosPolicy *DDS_DestinationOrderQosPolicy__alloc (void)
{
    return (DDS_DestinationOrderQosPolicy *)DDS_alloc(sizeof(DDS_DestinationOrderQosPolicy), NULL);
}

DDS_HistoryQosPolicy *DDS_HistoryQosPolicy__alloc (void)
{
    return (DDS_HistoryQosPolicy *)DDS_alloc(sizeof(DDS_HistoryQosPolicy), NULL);
}

DDS_ResourceLimitsQosPolicy *DDS_ResourceLimitsQosPolicy__alloc (void)
{
    return (DDS_ResourceLimitsQosPolicy *)DDS_alloc(sizeof(DDS_ResourceLimitsQosPolicy), NULL);
}

DDS_DurabilityServiceQosPolicy *DDS_DurabilityServiceQosPolicy__alloc (void)
{
    return (DDS_DurabilityServiceQosPolicy *)DDS_alloc(sizeof(DDS_DurabilityServiceQosPolicy), NULL);
}

DDS_ProductDataQosPolicy *DDS_ProductDataQosPolicy__alloc (void)
{
    DDS_ReturnCode_t DDS_ProductDataQosPolicy__free (void *object);

    return (DDS_ProductDataQosPolicy *)DDS_alloc(sizeof(DDS_ProductDataQosPolicy), DDS_ProductDataQosPolicy__free);
}

DDS_ReturnCode_t DDS_ProductDataQosPolicy__free (void *object);
DDS_ReturnCode_t DDS_ProductDataQosPolicy__free (void *object)
{
    DDS_ProductDataQosPolicy *o = (DDS_ProductDataQosPolicy *)object;

    (void) o;

    DDS_string_clean (&o->value);
    return DDS_RETCODE_OK;
}

DDS_EntityFactoryQosPolicy *DDS_EntityFactoryQosPolicy__alloc (void)
{
    return (DDS_EntityFactoryQosPolicy *)DDS_alloc(sizeof(DDS_EntityFactoryQosPolicy), NULL);
}

DDS_ShareQosPolicy *DDS_ShareQosPolicy__alloc (void)
{
    DDS_ReturnCode_t DDS_ShareQosPolicy__free (void *object);

    return (DDS_ShareQosPolicy *)DDS_alloc(sizeof(DDS_ShareQosPolicy), DDS_ShareQosPolicy__free);
}

DDS_ReturnCode_t DDS_ShareQosPolicy__free (void *object);
DDS_ReturnCode_t DDS_ShareQosPolicy__free (void *object)
{
    DDS_ShareQosPolicy *o = (DDS_ShareQosPolicy *)object;

    (void) o;

    DDS_string_clean (&o->name);
    return DDS_RETCODE_OK;
}

DDS_WriterDataLifecycleQosPolicy *DDS_WriterDataLifecycleQosPolicy__alloc (void)
{
    return (DDS_WriterDataLifecycleQosPolicy *)DDS_alloc(sizeof(DDS_WriterDataLifecycleQosPolicy), NULL);
}

DDS_InvalidSampleVisibilityQosPolicy *DDS_InvalidSampleVisibilityQosPolicy__alloc (void)
{
    return (DDS_InvalidSampleVisibilityQosPolicy *)DDS_alloc(sizeof(DDS_InvalidSampleVisibilityQosPolicy), NULL);
}

DDS_SubscriptionKeyQosPolicy *DDS_SubscriptionKeyQosPolicy__alloc (void)
{
    DDS_ReturnCode_t DDS_SubscriptionKeyQosPolicy__free (void *object);

    return (DDS_SubscriptionKeyQosPolicy *)DDS_alloc(sizeof(DDS_SubscriptionKeyQosPolicy), DDS_SubscriptionKeyQosPolicy__free);
}

DDS_ReturnCode_t DDS_SubscriptionKeyQosPolicy__free (void *object);
DDS_ReturnCode_t DDS_SubscriptionKeyQosPolicy__free (void *object)
{
    DDS_SubscriptionKeyQosPolicy *o = (DDS_SubscriptionKeyQosPolicy *)object;

    (void) o;

    DDS_sequence_clean ((_DDS_sequence)&o->key_list);
    return DDS_RETCODE_OK;
}

DDS_ReaderDataLifecycleQosPolicy *DDS_ReaderDataLifecycleQosPolicy__alloc (void)
{
    return (DDS_ReaderDataLifecycleQosPolicy *)DDS_alloc(sizeof(DDS_ReaderDataLifecycleQosPolicy), NULL);
}

DDS_UserKeyQosPolicy *DDS_UserKeyQosPolicy__alloc (void)
{
    DDS_ReturnCode_t DDS_UserKeyQosPolicy__free (void *object);

    return (DDS_UserKeyQosPolicy *)DDS_alloc(sizeof(DDS_UserKeyQosPolicy), DDS_UserKeyQosPolicy__free);
}

DDS_ReturnCode_t DDS_UserKeyQosPolicy__free (void *object);
DDS_ReturnCode_t DDS_UserKeyQosPolicy__free (void *object)
{
    DDS_UserKeyQosPolicy *o = (DDS_UserKeyQosPolicy *)object;

    (void) o;

    DDS_string_clean (&o->expression);
    return DDS_RETCODE_OK;
}

DDS_ReaderLifespanQosPolicy *DDS_ReaderLifespanQosPolicy__alloc (void)
{
    return (DDS_ReaderLifespanQosPolicy *)DDS_alloc(sizeof(DDS_ReaderLifespanQosPolicy), NULL);
}

DDS_TypeHash *DDS_TypeHash__alloc (void)
{
    return (DDS_TypeHash *)DDS_alloc(sizeof(DDS_TypeHash), NULL);
}

DDS_ParticipantBuiltinTopicData *DDS_ParticipantBuiltinTopicData__alloc (void)
{
    DDS_ReturnCode_t DDS_ParticipantBuiltinTopicData__free (void *object);

    return (DDS_ParticipantBuiltinTopicData *)DDS_alloc(sizeof(DDS_ParticipantBuiltinTopicData), DDS_ParticipantBuiltinTopicData__free);
}

DDS_ReturnCode_t DDS_ParticipantBuiltinTopicData__free (void *object);
DDS_ReturnCode_t DDS_ParticipantBuiltinTopicData__free (void *object)
{
    DDS_ParticipantBuiltinTopicData *o = (DDS_ParticipantBuiltinTopicData *)object;

    (void) o;

    {
        extern DDS_ReturnCode_t DDS_UserDataQosPolicy__free(void *object);
        DDS_UserDataQosPolicy__free (&o->user_data);
    }
    return DDS_RETCODE_OK;
}

DDS_TopicBuiltinTopicData *DDS_TopicBuiltinTopicData__alloc (void)
{
    DDS_ReturnCode_t DDS_TopicBuiltinTopicData__free (void *object);

    return (DDS_TopicBuiltinTopicData *)DDS_alloc(sizeof(DDS_TopicBuiltinTopicData), DDS_TopicBuiltinTopicData__free);
}

DDS_ReturnCode_t DDS_TopicBuiltinTopicData__free (void *object);
DDS_ReturnCode_t DDS_TopicBuiltinTopicData__free (void *object)
{
    DDS_TopicBuiltinTopicData *o = (DDS_TopicBuiltinTopicData *)object;

    (void) o;

    DDS_string_clean (&o->name);
    DDS_string_clean (&o->type_name);
    {
        extern DDS_ReturnCode_t DDS_TopicDataQosPolicy__free(void *object);
        DDS_TopicDataQosPolicy__free (&o->topic_data);
    }
    return DDS_RETCODE_OK;
}

DDS_TypeBuiltinTopicData *DDS_TypeBuiltinTopicData__alloc (void)
{
    DDS_ReturnCode_t DDS_TypeBuiltinTopicData__free (void *object);

    return (DDS_TypeBuiltinTopicData *)DDS_alloc(sizeof(DDS_TypeBuiltinTopicData), DDS_TypeBuiltinTopicData__free);
}

DDS_ReturnCode_t DDS_TypeBuiltinTopicData__free (void *object);
DDS_ReturnCode_t DDS_TypeBuiltinTopicData__free (void *object)
{
    DDS_TypeBuiltinTopicData *o = (DDS_TypeBuiltinTopicData *)object;

    (void) o;

    DDS_string_clean (&o->name);
    DDS_sequence_clean ((_DDS_sequence)&o->meta_data);
    DDS_sequence_clean ((_DDS_sequence)&o->extentions);
    return DDS_RETCODE_OK;
}

DDS_PublicationBuiltinTopicData *DDS_PublicationBuiltinTopicData__alloc (void)
{
    DDS_ReturnCode_t DDS_PublicationBuiltinTopicData__free (void *object);

    return (DDS_PublicationBuiltinTopicData *)DDS_alloc(sizeof(DDS_PublicationBuiltinTopicData), DDS_PublicationBuiltinTopicData__free);
}

DDS_ReturnCode_t DDS_PublicationBuiltinTopicData__free (void *object);
DDS_ReturnCode_t DDS_PublicationBuiltinTopicData__free (void *object)
{
    DDS_PublicationBuiltinTopicData *o = (DDS_PublicationBuiltinTopicData *)object;

    (void) o;

    DDS_string_clean (&o->topic_name);
    DDS_string_clean (&o->type_name);
    {
        extern DDS_ReturnCode_t DDS_UserDataQosPolicy__free(void *object);
        DDS_UserDataQosPolicy__free (&o->user_data);
    }
    {
        extern DDS_ReturnCode_t DDS_PartitionQosPolicy__free(void *object);
        DDS_PartitionQosPolicy__free (&o->partition);
    }
    {
        extern DDS_ReturnCode_t DDS_TopicDataQosPolicy__free(void *object);
        DDS_TopicDataQosPolicy__free (&o->topic_data);
    }
    {
        extern DDS_ReturnCode_t DDS_GroupDataQosPolicy__free(void *object);
        DDS_GroupDataQosPolicy__free (&o->group_data);
    }
    return DDS_RETCODE_OK;
}

DDS_SubscriptionBuiltinTopicData *DDS_SubscriptionBuiltinTopicData__alloc (void)
{
    DDS_ReturnCode_t DDS_SubscriptionBuiltinTopicData__free (void *object);

    return (DDS_SubscriptionBuiltinTopicData *)DDS_alloc(sizeof(DDS_SubscriptionBuiltinTopicData), DDS_SubscriptionBuiltinTopicData__free);
}

DDS_ReturnCode_t DDS_SubscriptionBuiltinTopicData__free (void *object);
DDS_ReturnCode_t DDS_SubscriptionBuiltinTopicData__free (void *object)
{
    DDS_SubscriptionBuiltinTopicData *o = (DDS_SubscriptionBuiltinTopicData *)object;

    (void) o;

    DDS_string_clean (&o->topic_name);
    DDS_string_clean (&o->type_name);
    {
        extern DDS_ReturnCode_t DDS_UserDataQosPolicy__free(void *object);
        DDS_UserDataQosPolicy__free (&o->user_data);
    }
    {
        extern DDS_ReturnCode_t DDS_PartitionQosPolicy__free(void *object);
        DDS_PartitionQosPolicy__free (&o->partition);
    }
    {
        extern DDS_ReturnCode_t DDS_TopicDataQosPolicy__free(void *object);
        DDS_TopicDataQosPolicy__free (&o->topic_data);
    }
    {
        extern DDS_ReturnCode_t DDS_GroupDataQosPolicy__free(void *object);
        DDS_GroupDataQosPolicy__free (&o->group_data);
    }
    return DDS_RETCODE_OK;
}

DDS_CMParticipantBuiltinTopicData *DDS_CMParticipantBuiltinTopicData__alloc (void)
{
    DDS_ReturnCode_t DDS_CMParticipantBuiltinTopicData__free (void *object);

    return (DDS_CMParticipantBuiltinTopicData *)DDS_alloc(sizeof(DDS_CMParticipantBuiltinTopicData), DDS_CMParticipantBuiltinTopicData__free);
}

DDS_ReturnCode_t DDS_CMParticipantBuiltinTopicData__free (void *object);
DDS_ReturnCode_t DDS_CMParticipantBuiltinTopicData__free (void *object)
{
    DDS_CMParticipantBuiltinTopicData *o = (DDS_CMParticipantBuiltinTopicData *)object;

    (void) o;

    {
        extern DDS_ReturnCode_t DDS_ProductDataQosPolicy__free(void *object);
        DDS_ProductDataQosPolicy__free (&o->product);
    }
    return DDS_RETCODE_OK;
}

DDS_CMPublisherBuiltinTopicData *DDS_CMPublisherBuiltinTopicData__alloc (void)
{
    DDS_ReturnCode_t DDS_CMPublisherBuiltinTopicData__free (void *object);

    return (DDS_CMPublisherBuiltinTopicData *)DDS_alloc(sizeof(DDS_CMPublisherBuiltinTopicData), DDS_CMPublisherBuiltinTopicData__free);
}

DDS_ReturnCode_t DDS_CMPublisherBuiltinTopicData__free (void *object);
DDS_ReturnCode_t DDS_CMPublisherBuiltinTopicData__free (void *object)
{
    DDS_CMPublisherBuiltinTopicData *o = (DDS_CMPublisherBuiltinTopicData *)object;

    (void) o;

    {
        extern DDS_ReturnCode_t DDS_ProductDataQosPolicy__free(void *object);
        DDS_ProductDataQosPolicy__free (&o->product);
    }
    DDS_string_clean (&o->name);
    {
        extern DDS_ReturnCode_t DDS_PartitionQosPolicy__free(void *object);
        DDS_PartitionQosPolicy__free (&o->partition);
    }
    return DDS_RETCODE_OK;
}

DDS_CMSubscriberBuiltinTopicData *DDS_CMSubscriberBuiltinTopicData__alloc (void)
{
    DDS_ReturnCode_t DDS_CMSubscriberBuiltinTopicData__free (void *object);

    return (DDS_CMSubscriberBuiltinTopicData *)DDS_alloc(sizeof(DDS_CMSubscriberBuiltinTopicData), DDS_CMSubscriberBuiltinTopicData__free);
}

DDS_ReturnCode_t DDS_CMSubscriberBuiltinTopicData__free (void *object);
DDS_ReturnCode_t DDS_CMSubscriberBuiltinTopicData__free (void *object)
{
    DDS_CMSubscriberBuiltinTopicData *o = (DDS_CMSubscriberBuiltinTopicData *)object;

    (void) o;

    {
        extern DDS_ReturnCode_t DDS_ProductDataQosPolicy__free(void *object);
        DDS_ProductDataQosPolicy__free (&o->product);
    }
    DDS_string_clean (&o->name);
    {
        extern DDS_ReturnCode_t DDS_ShareQosPolicy__free(void *object);
        DDS_ShareQosPolicy__free (&o->share);
    }
    {
        extern DDS_ReturnCode_t DDS_PartitionQosPolicy__free(void *object);
        DDS_PartitionQosPolicy__free (&o->partition);
    }
    return DDS_RETCODE_OK;
}

DDS_CMDataWriterBuiltinTopicData *DDS_CMDataWriterBuiltinTopicData__alloc (void)
{
    DDS_ReturnCode_t DDS_CMDataWriterBuiltinTopicData__free (void *object);

    return (DDS_CMDataWriterBuiltinTopicData *)DDS_alloc(sizeof(DDS_CMDataWriterBuiltinTopicData), DDS_CMDataWriterBuiltinTopicData__free);
}

DDS_ReturnCode_t DDS_CMDataWriterBuiltinTopicData__free (void *object);
DDS_ReturnCode_t DDS_CMDataWriterBuiltinTopicData__free (void *object)
{
    DDS_CMDataWriterBuiltinTopicData *o = (DDS_CMDataWriterBuiltinTopicData *)object;

    (void) o;

    {
        extern DDS_ReturnCode_t DDS_ProductDataQosPolicy__free(void *object);
        DDS_ProductDataQosPolicy__free (&o->product);
    }
    DDS_string_clean (&o->name);
    return DDS_RETCODE_OK;
}

DDS_CMDataReaderBuiltinTopicData *DDS_CMDataReaderBuiltinTopicData__alloc (void)
{
    DDS_ReturnCode_t DDS_CMDataReaderBuiltinTopicData__free (void *object);

    return (DDS_CMDataReaderBuiltinTopicData *)DDS_alloc(sizeof(DDS_CMDataReaderBuiltinTopicData), DDS_CMDataReaderBuiltinTopicData__free);
}

DDS_ReturnCode_t DDS_CMDataReaderBuiltinTopicData__free (void *object);
DDS_ReturnCode_t DDS_CMDataReaderBuiltinTopicData__free (void *object)
{
    DDS_CMDataReaderBuiltinTopicData *o = (DDS_CMDataReaderBuiltinTopicData *)object;

    (void) o;

    {
        extern DDS_ReturnCode_t DDS_ProductDataQosPolicy__free(void *object);
        DDS_ProductDataQosPolicy__free (&o->product);
    }
    DDS_string_clean (&o->name);
    {
        extern DDS_ReturnCode_t DDS_UserKeyQosPolicy__free(void *object);
        DDS_UserKeyQosPolicy__free (&o->subscription_keys);
    }
    {
        extern DDS_ReturnCode_t DDS_ShareQosPolicy__free(void *object);
        DDS_ShareQosPolicy__free (&o->share);
    }
    return DDS_RETCODE_OK;
}

const char * DDS_ParticipantBuiltinTopicData_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><TypeDef name=\"octSeq\"><Sequence><Octet/></Sequence></TypeDef><Struct name=\"UserDataQosPolicy\">",
"<Member name=\"value\"><Type name=\"octSeq\"/></Member></Struct><Struct name=\"ParticipantBuiltinTopicData\">",
"<Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"user_data\"><Type name=\"UserDataQosPolicy\"/>",
"</Member></Struct></Module></MetaData>"};
const int  DDS_ParticipantBuiltinTopicData_metaDescriptorArrLength = 5;
const int  DDS_ParticipantBuiltinTopicData_metaDescriptorLength = 499;
const char * DDS_TopicBuiltinTopicData_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><Enum name=\"DurabilityQosPolicyKind\"><Element name=\"VOLATILE_DURABILITY_QOS\" value=\"0\"/>",
"<Element name=\"TRANSIENT_LOCAL_DURABILITY_QOS\" value=\"1\"/><Element name=\"TRANSIENT_DURABILITY_QOS\" value=\"2\"/>",
"<Element name=\"PERSISTENT_DURABILITY_QOS\" value=\"3\"/></Enum><Struct name=\"Duration_t\"><Member name=\"sec\">",
"<Long/></Member><Member name=\"nanosec\"><ULong/></Member></Struct><Enum name=\"HistoryQosPolicyKind\">",
"<Element name=\"KEEP_LAST_HISTORY_QOS\" value=\"0\"/><Element name=\"KEEP_ALL_HISTORY_QOS\" value=\"1\"/>",
"</Enum><Enum name=\"LivelinessQosPolicyKind\"><Element name=\"AUTOMATIC_LIVELINESS_QOS\" value=\"0\"/>",
"<Element name=\"MANUAL_BY_PARTICIPANT_LIVELINESS_QOS\" value=\"1\"/><Element name=\"MANUAL_BY_TOPIC_LIVELINESS_QOS\" value=\"2\"/>",
"</Enum><Enum name=\"ReliabilityQosPolicyKind\"><Element name=\"BEST_EFFORT_RELIABILITY_QOS\" value=\"0\"/>",
"<Element name=\"RELIABLE_RELIABILITY_QOS\" value=\"1\"/></Enum><Struct name=\"TransportPriorityQosPolicy\">",
"<Member name=\"value\"><Long/></Member></Struct><Enum name=\"DestinationOrderQosPolicyKind\"><Element name=\"BY_RECEPTION_TIMESTAMP_DESTINATIONORDER_QOS\" value=\"0\"/>",
"<Element name=\"BY_SOURCE_TIMESTAMP_DESTINATIONORDER_QOS\" value=\"1\"/></Enum><Struct name=\"ResourceLimitsQosPolicy\">",
"<Member name=\"max_samples\"><Long/></Member><Member name=\"max_instances\"><Long/></Member><Member name=\"max_samples_per_instance\">",
"<Long/></Member></Struct><Enum name=\"OwnershipQosPolicyKind\"><Element name=\"SHARED_OWNERSHIP_QOS\" value=\"0\"/>",
"<Element name=\"EXCLUSIVE_OWNERSHIP_QOS\" value=\"1\"/></Enum><TypeDef name=\"octSeq\"><Sequence><Octet/>",
"</Sequence></TypeDef><Struct name=\"DurabilityQosPolicy\"><Member name=\"kind\"><Type name=\"DurabilityQosPolicyKind\"/>",
"</Member></Struct><Struct name=\"LifespanQosPolicy\"><Member name=\"duration\"><Type name=\"Duration_t\"/>",
"</Member></Struct><Struct name=\"LatencyBudgetQosPolicy\"><Member name=\"duration\"><Type name=\"Duration_t\"/>",
"</Member></Struct><Struct name=\"DeadlineQosPolicy\"><Member name=\"period\"><Type name=\"Duration_t\"/>",
"</Member></Struct><Struct name=\"HistoryQosPolicy\"><Member name=\"kind\"><Type name=\"HistoryQosPolicyKind\"/>",
"</Member><Member name=\"depth\"><Long/></Member></Struct><Struct name=\"DurabilityServiceQosPolicy\">",
"<Member name=\"service_cleanup_delay\"><Type name=\"Duration_t\"/></Member><Member name=\"history_kind\">",
"<Type name=\"HistoryQosPolicyKind\"/></Member><Member name=\"history_depth\"><Long/></Member><Member name=\"max_samples\">",
"<Long/></Member><Member name=\"max_instances\"><Long/></Member><Member name=\"max_samples_per_instance\">",
"<Long/></Member></Struct><Struct name=\"LivelinessQosPolicy\"><Member name=\"kind\"><Type name=\"LivelinessQosPolicyKind\"/>",
"</Member><Member name=\"lease_duration\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"ReliabilityQosPolicy\">",
"<Member name=\"kind\"><Type name=\"ReliabilityQosPolicyKind\"/></Member><Member name=\"max_blocking_time\">",
"<Type name=\"Duration_t\"/></Member><Member name=\"synchronous\"><Boolean/></Member></Struct><Struct name=\"DestinationOrderQosPolicy\">",
"<Member name=\"kind\"><Type name=\"DestinationOrderQosPolicyKind\"/></Member></Struct><Struct name=\"OwnershipQosPolicy\">",
"<Member name=\"kind\"><Type name=\"OwnershipQosPolicyKind\"/></Member></Struct><Struct name=\"TopicDataQosPolicy\">",
"<Member name=\"value\"><Type name=\"octSeq\"/></Member></Struct><Struct name=\"TopicBuiltinTopicData\">",
"<Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"name\"><String/></Member>",
"<Member name=\"type_name\"><String/></Member><Member name=\"durability\"><Type name=\"DurabilityQosPolicy\"/>",
"</Member><Member name=\"durability_service\"><Type name=\"DurabilityServiceQosPolicy\"/></Member><Member name=\"deadline\">",
"<Type name=\"DeadlineQosPolicy\"/></Member><Member name=\"latency_budget\"><Type name=\"LatencyBudgetQosPolicy\"/>",
"</Member><Member name=\"liveliness\"><Type name=\"LivelinessQosPolicy\"/></Member><Member name=\"reliability\">",
"<Type name=\"ReliabilityQosPolicy\"/></Member><Member name=\"transport_priority\"><Type name=\"TransportPriorityQosPolicy\"/>",
"</Member><Member name=\"lifespan\"><Type name=\"LifespanQosPolicy\"/></Member><Member name=\"destination_order\">",
"<Type name=\"DestinationOrderQosPolicy\"/></Member><Member name=\"history\"><Type name=\"HistoryQosPolicy\"/>",
"</Member><Member name=\"resource_limits\"><Type name=\"ResourceLimitsQosPolicy\"/></Member><Member name=\"ownership\">",
"<Type name=\"OwnershipQosPolicy\"/></Member><Member name=\"topic_data\"><Type name=\"TopicDataQosPolicy\"/>",
"</Member></Struct></Module></MetaData>"};
const int  DDS_TopicBuiltinTopicData_metaDescriptorArrLength = 42;
const int  DDS_TopicBuiltinTopicData_metaDescriptorLength = 4735;
const char * DDS_TypeBuiltinTopicData_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"DataRepresentationId_t\"><Short/></TypeDef>",
"<Struct name=\"TypeHash\"><Member name=\"msb\"><ULongLong/></Member><Member name=\"lsb\"><ULongLong/>",
"</Member></Struct><TypeDef name=\"octSeq\"><Sequence><Octet/></Sequence></TypeDef><Struct name=\"TypeBuiltinTopicData\">",
"<Member name=\"name\"><String/></Member><Member name=\"data_representation_id\"><Type name=\"DataRepresentationId_t\"/>",
"</Member><Member name=\"type_hash\"><Type name=\"TypeHash\"/></Member><Member name=\"meta_data\"><Type name=\"octSeq\"/>",
"</Member><Member name=\"extentions\"><Type name=\"octSeq\"/></Member></Struct></Module></MetaData>"};
const int  DDS_TypeBuiltinTopicData_metaDescriptorArrLength = 6;
const int  DDS_TypeBuiltinTopicData_metaDescriptorLength = 666;
const char * DDS_PublicationBuiltinTopicData_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><Enum name=\"DurabilityQosPolicyKind\"><Element name=\"VOLATILE_DURABILITY_QOS\" value=\"0\"/>",
"<Element name=\"TRANSIENT_LOCAL_DURABILITY_QOS\" value=\"1\"/><Element name=\"TRANSIENT_DURABILITY_QOS\" value=\"2\"/>",
"<Element name=\"PERSISTENT_DURABILITY_QOS\" value=\"3\"/></Enum><Struct name=\"Duration_t\"><Member name=\"sec\">",
"<Long/></Member><Member name=\"nanosec\"><ULong/></Member></Struct><Enum name=\"LivelinessQosPolicyKind\">",
"<Element name=\"AUTOMATIC_LIVELINESS_QOS\" value=\"0\"/><Element name=\"MANUAL_BY_PARTICIPANT_LIVELINESS_QOS\" value=\"1\"/>",
"<Element name=\"MANUAL_BY_TOPIC_LIVELINESS_QOS\" value=\"2\"/></Enum><Enum name=\"ReliabilityQosPolicyKind\">",
"<Element name=\"BEST_EFFORT_RELIABILITY_QOS\" value=\"0\"/><Element name=\"RELIABLE_RELIABILITY_QOS\" value=\"1\"/>",
"</Enum><Enum name=\"DestinationOrderQosPolicyKind\"><Element name=\"BY_RECEPTION_TIMESTAMP_DESTINATIONORDER_QOS\" value=\"0\"/>",
"<Element name=\"BY_SOURCE_TIMESTAMP_DESTINATIONORDER_QOS\" value=\"1\"/></Enum><TypeDef name=\"octSeq\">",
"<Sequence><Octet/></Sequence></TypeDef><Enum name=\"OwnershipQosPolicyKind\"><Element name=\"SHARED_OWNERSHIP_QOS\" value=\"0\"/>",
"<Element name=\"EXCLUSIVE_OWNERSHIP_QOS\" value=\"1\"/></Enum><Struct name=\"OwnershipStrengthQosPolicy\">",
"<Member name=\"value\"><Long/></Member></Struct><Enum name=\"PresentationQosPolicyAccessScopeKind\"><Element name=\"INSTANCE_PRESENTATION_QOS\" value=\"0\"/>",
"<Element name=\"TOPIC_PRESENTATION_QOS\" value=\"1\"/><Element name=\"GROUP_PRESENTATION_QOS\" value=\"2\"/>",
"</Enum><TypeDef name=\"StringSeq\"><Sequence><String/></Sequence></TypeDef><Struct name=\"DurabilityQosPolicy\">",
"<Member name=\"kind\"><Type name=\"DurabilityQosPolicyKind\"/></Member></Struct><Struct name=\"LifespanQosPolicy\">",
"<Member name=\"duration\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"LatencyBudgetQosPolicy\">",
"<Member name=\"duration\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"DeadlineQosPolicy\">",
"<Member name=\"period\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"LivelinessQosPolicy\">",
"<Member name=\"kind\"><Type name=\"LivelinessQosPolicyKind\"/></Member><Member name=\"lease_duration\">",
"<Type name=\"Duration_t\"/></Member></Struct><Struct name=\"ReliabilityQosPolicy\"><Member name=\"kind\">",
"<Type name=\"ReliabilityQosPolicyKind\"/></Member><Member name=\"max_blocking_time\"><Type name=\"Duration_t\"/>",
"</Member><Member name=\"synchronous\"><Boolean/></Member></Struct><Struct name=\"DestinationOrderQosPolicy\">",
"<Member name=\"kind\"><Type name=\"DestinationOrderQosPolicyKind\"/></Member></Struct><Struct name=\"GroupDataQosPolicy\">",
"<Member name=\"value\"><Type name=\"octSeq\"/></Member></Struct><Struct name=\"TopicDataQosPolicy\"><Member name=\"value\">",
"<Type name=\"octSeq\"/></Member></Struct><Struct name=\"UserDataQosPolicy\"><Member name=\"value\"><Type name=\"octSeq\"/>",
"</Member></Struct><Struct name=\"OwnershipQosPolicy\"><Member name=\"kind\"><Type name=\"OwnershipQosPolicyKind\"/>",
"</Member></Struct><Struct name=\"PresentationQosPolicy\"><Member name=\"access_scope\"><Type name=\"PresentationQosPolicyAccessScopeKind\"/>",
"</Member><Member name=\"coherent_access\"><Boolean/></Member><Member name=\"ordered_access\"><Boolean/>",
"</Member></Struct><Struct name=\"PartitionQosPolicy\"><Member name=\"name\"><Type name=\"StringSeq\"/>",
"</Member></Struct><Struct name=\"PublicationBuiltinTopicData\"><Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/>",
"</Member><Member name=\"participant_key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"topic_name\">",
"<String/></Member><Member name=\"type_name\"><String/></Member><Member name=\"durability\"><Type name=\"DurabilityQosPolicy\"/>",
"</Member><Member name=\"deadline\"><Type name=\"DeadlineQosPolicy\"/></Member><Member name=\"latency_budget\">",
"<Type name=\"LatencyBudgetQosPolicy\"/></Member><Member name=\"liveliness\"><Type name=\"LivelinessQosPolicy\"/>",
"</Member><Member name=\"reliability\"><Type name=\"ReliabilityQosPolicy\"/></Member><Member name=\"lifespan\">",
"<Type name=\"LifespanQosPolicy\"/></Member><Member name=\"destination_order\"><Type name=\"DestinationOrderQosPolicy\"/>",
"</Member><Member name=\"user_data\"><Type name=\"UserDataQosPolicy\"/></Member><Member name=\"ownership\">",
"<Type name=\"OwnershipQosPolicy\"/></Member><Member name=\"ownership_strength\"><Type name=\"OwnershipStrengthQosPolicy\"/>",
"</Member><Member name=\"presentation\"><Type name=\"PresentationQosPolicy\"/></Member><Member name=\"partition\">",
"<Type name=\"PartitionQosPolicy\"/></Member><Member name=\"topic_data\"><Type name=\"TopicDataQosPolicy\"/>",
"</Member><Member name=\"group_data\"><Type name=\"GroupDataQosPolicy\"/></Member></Struct></Module></MetaData>"};
const int  DDS_PublicationBuiltinTopicData_metaDescriptorArrLength = 42;
const int  DDS_PublicationBuiltinTopicData_metaDescriptorLength = 4813;
const char * DDS_SubscriptionBuiltinTopicData_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><Enum name=\"DurabilityQosPolicyKind\"><Element name=\"VOLATILE_DURABILITY_QOS\" value=\"0\"/>",
"<Element name=\"TRANSIENT_LOCAL_DURABILITY_QOS\" value=\"1\"/><Element name=\"TRANSIENT_DURABILITY_QOS\" value=\"2\"/>",
"<Element name=\"PERSISTENT_DURABILITY_QOS\" value=\"3\"/></Enum><Struct name=\"Duration_t\"><Member name=\"sec\">",
"<Long/></Member><Member name=\"nanosec\"><ULong/></Member></Struct><Enum name=\"LivelinessQosPolicyKind\">",
"<Element name=\"AUTOMATIC_LIVELINESS_QOS\" value=\"0\"/><Element name=\"MANUAL_BY_PARTICIPANT_LIVELINESS_QOS\" value=\"1\"/>",
"<Element name=\"MANUAL_BY_TOPIC_LIVELINESS_QOS\" value=\"2\"/></Enum><Enum name=\"ReliabilityQosPolicyKind\">",
"<Element name=\"BEST_EFFORT_RELIABILITY_QOS\" value=\"0\"/><Element name=\"RELIABLE_RELIABILITY_QOS\" value=\"1\"/>",
"</Enum><Enum name=\"OwnershipQosPolicyKind\"><Element name=\"SHARED_OWNERSHIP_QOS\" value=\"0\"/><Element name=\"EXCLUSIVE_OWNERSHIP_QOS\" value=\"1\"/>",
"</Enum><Enum name=\"DestinationOrderQosPolicyKind\"><Element name=\"BY_RECEPTION_TIMESTAMP_DESTINATIONORDER_QOS\" value=\"0\"/>",
"<Element name=\"BY_SOURCE_TIMESTAMP_DESTINATIONORDER_QOS\" value=\"1\"/></Enum><TypeDef name=\"octSeq\">",
"<Sequence><Octet/></Sequence></TypeDef><Enum name=\"PresentationQosPolicyAccessScopeKind\"><Element name=\"INSTANCE_PRESENTATION_QOS\" value=\"0\"/>",
"<Element name=\"TOPIC_PRESENTATION_QOS\" value=\"1\"/><Element name=\"GROUP_PRESENTATION_QOS\" value=\"2\"/>",
"</Enum><TypeDef name=\"StringSeq\"><Sequence><String/></Sequence></TypeDef><Struct name=\"DurabilityQosPolicy\">",
"<Member name=\"kind\"><Type name=\"DurabilityQosPolicyKind\"/></Member></Struct><Struct name=\"TimeBasedFilterQosPolicy\">",
"<Member name=\"minimum_separation\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"LatencyBudgetQosPolicy\">",
"<Member name=\"duration\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"DeadlineQosPolicy\">",
"<Member name=\"period\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"LivelinessQosPolicy\">",
"<Member name=\"kind\"><Type name=\"LivelinessQosPolicyKind\"/></Member><Member name=\"lease_duration\">",
"<Type name=\"Duration_t\"/></Member></Struct><Struct name=\"ReliabilityQosPolicy\"><Member name=\"kind\">",
"<Type name=\"ReliabilityQosPolicyKind\"/></Member><Member name=\"max_blocking_time\"><Type name=\"Duration_t\"/>",
"</Member><Member name=\"synchronous\"><Boolean/></Member></Struct><Struct name=\"OwnershipQosPolicy\">",
"<Member name=\"kind\"><Type name=\"OwnershipQosPolicyKind\"/></Member></Struct><Struct name=\"DestinationOrderQosPolicy\">",
"<Member name=\"kind\"><Type name=\"DestinationOrderQosPolicyKind\"/></Member></Struct><Struct name=\"GroupDataQosPolicy\">",
"<Member name=\"value\"><Type name=\"octSeq\"/></Member></Struct><Struct name=\"TopicDataQosPolicy\"><Member name=\"value\">",
"<Type name=\"octSeq\"/></Member></Struct><Struct name=\"UserDataQosPolicy\"><Member name=\"value\"><Type name=\"octSeq\"/>",
"</Member></Struct><Struct name=\"PresentationQosPolicy\"><Member name=\"access_scope\"><Type name=\"PresentationQosPolicyAccessScopeKind\"/>",
"</Member><Member name=\"coherent_access\"><Boolean/></Member><Member name=\"ordered_access\"><Boolean/>",
"</Member></Struct><Struct name=\"PartitionQosPolicy\"><Member name=\"name\"><Type name=\"StringSeq\"/>",
"</Member></Struct><Struct name=\"SubscriptionBuiltinTopicData\"><Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/>",
"</Member><Member name=\"participant_key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"topic_name\">",
"<String/></Member><Member name=\"type_name\"><String/></Member><Member name=\"durability\"><Type name=\"DurabilityQosPolicy\"/>",
"</Member><Member name=\"deadline\"><Type name=\"DeadlineQosPolicy\"/></Member><Member name=\"latency_budget\">",
"<Type name=\"LatencyBudgetQosPolicy\"/></Member><Member name=\"liveliness\"><Type name=\"LivelinessQosPolicy\"/>",
"</Member><Member name=\"reliability\"><Type name=\"ReliabilityQosPolicy\"/></Member><Member name=\"ownership\">",
"<Type name=\"OwnershipQosPolicy\"/></Member><Member name=\"destination_order\"><Type name=\"DestinationOrderQosPolicy\"/>",
"</Member><Member name=\"user_data\"><Type name=\"UserDataQosPolicy\"/></Member><Member name=\"time_based_filter\">",
"<Type name=\"TimeBasedFilterQosPolicy\"/></Member><Member name=\"presentation\"><Type name=\"PresentationQosPolicy\"/>",
"</Member><Member name=\"partition\"><Type name=\"PartitionQosPolicy\"/></Member><Member name=\"topic_data\">",
"<Type name=\"TopicDataQosPolicy\"/></Member><Member name=\"group_data\"><Type name=\"GroupDataQosPolicy\"/>",
"</Member></Struct></Module></MetaData>"};
const int  DDS_SubscriptionBuiltinTopicData_metaDescriptorArrLength = 41;
const int  DDS_SubscriptionBuiltinTopicData_metaDescriptorLength = 4667;
const char * DDS_CMParticipantBuiltinTopicData_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><Struct name=\"ProductDataQosPolicy\"><Member name=\"value\"><String/></Member>",
"</Struct><Struct name=\"CMParticipantBuiltinTopicData\"><Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/>",
"</Member><Member name=\"product\"><Type name=\"ProductDataQosPolicy\"/></Member></Struct></Module></MetaData>"};
const int  DDS_CMParticipantBuiltinTopicData_metaDescriptorArrLength = 4;
const int  DDS_CMParticipantBuiltinTopicData_metaDescriptorLength = 427;
const char * DDS_CMPublisherBuiltinTopicData_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><Struct name=\"ProductDataQosPolicy\"><Member name=\"value\"><String/></Member>",
"</Struct><Struct name=\"EntityFactoryQosPolicy\"><Member name=\"autoenable_created_entities\"><Boolean/>",
"</Member></Struct><TypeDef name=\"StringSeq\"><Sequence><String/></Sequence></TypeDef><Struct name=\"PartitionQosPolicy\">",
"<Member name=\"name\"><Type name=\"StringSeq\"/></Member></Struct><Struct name=\"CMPublisherBuiltinTopicData\">",
"<Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"product\"><Type name=\"ProductDataQosPolicy\"/>",
"</Member><Member name=\"participant_key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"name\">",
"<String/></Member><Member name=\"entity_factory\"><Type name=\"EntityFactoryQosPolicy\"/></Member><Member name=\"partition\">",
"<Type name=\"PartitionQosPolicy\"/></Member></Struct></Module></MetaData>"};
const int  DDS_CMPublisherBuiltinTopicData_metaDescriptorArrLength = 9;
const int  DDS_CMPublisherBuiltinTopicData_metaDescriptorLength = 975;
const char * DDS_CMSubscriberBuiltinTopicData_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><Struct name=\"ProductDataQosPolicy\"><Member name=\"value\"><String/></Member>",
"</Struct><Struct name=\"EntityFactoryQosPolicy\"><Member name=\"autoenable_created_entities\"><Boolean/>",
"</Member></Struct><Struct name=\"ShareQosPolicy\"><Member name=\"name\"><String/></Member><Member name=\"enable\">",
"<Boolean/></Member></Struct><TypeDef name=\"StringSeq\"><Sequence><String/></Sequence></TypeDef><Struct name=\"PartitionQosPolicy\">",
"<Member name=\"name\"><Type name=\"StringSeq\"/></Member></Struct><Struct name=\"CMSubscriberBuiltinTopicData\">",
"<Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"product\"><Type name=\"ProductDataQosPolicy\"/>",
"</Member><Member name=\"participant_key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"name\">",
"<String/></Member><Member name=\"entity_factory\"><Type name=\"EntityFactoryQosPolicy\"/></Member><Member name=\"share\">",
"<Type name=\"ShareQosPolicy\"/></Member><Member name=\"partition\"><Type name=\"PartitionQosPolicy\"/>",
"</Member></Struct></Module></MetaData>"};
const int  DDS_CMSubscriberBuiltinTopicData_metaDescriptorArrLength = 11;
const int  DDS_CMSubscriberBuiltinTopicData_metaDescriptorLength = 1163;
const char * DDS_CMDataWriterBuiltinTopicData_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><Struct name=\"ProductDataQosPolicy\"><Member name=\"value\"><String/></Member>",
"</Struct><Enum name=\"HistoryQosPolicyKind\"><Element name=\"KEEP_LAST_HISTORY_QOS\" value=\"0\"/><Element name=\"KEEP_ALL_HISTORY_QOS\" value=\"1\"/>",
"</Enum><Struct name=\"ResourceLimitsQosPolicy\"><Member name=\"max_samples\"><Long/></Member><Member name=\"max_instances\">",
"<Long/></Member><Member name=\"max_samples_per_instance\"><Long/></Member></Struct><Struct name=\"Duration_t\">",
"<Member name=\"sec\"><Long/></Member><Member name=\"nanosec\"><ULong/></Member></Struct><Struct name=\"HistoryQosPolicy\">",
"<Member name=\"kind\"><Type name=\"HistoryQosPolicyKind\"/></Member><Member name=\"depth\"><Long/></Member>",
"</Struct><Struct name=\"WriterDataLifecycleQosPolicy\"><Member name=\"autodispose_unregistered_instances\">",
"<Boolean/></Member><Member name=\"autopurge_suspended_samples_delay\"><Type name=\"Duration_t\"/></Member>",
"<Member name=\"autounregister_instance_delay\"><Type name=\"Duration_t\"/></Member></Struct><Struct name=\"CMDataWriterBuiltinTopicData\">",
"<Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"product\"><Type name=\"ProductDataQosPolicy\"/>",
"</Member><Member name=\"publisher_key\"><Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"name\">",
"<String/></Member><Member name=\"history\"><Type name=\"HistoryQosPolicy\"/></Member><Member name=\"resource_limits\">",
"<Type name=\"ResourceLimitsQosPolicy\"/></Member><Member name=\"writer_data_lifecycle\"><Type name=\"WriterDataLifecycleQosPolicy\"/>",
"</Member></Struct></Module></MetaData>"};
const int  DDS_CMDataWriterBuiltinTopicData_metaDescriptorArrLength = 15;
const int  DDS_CMDataWriterBuiltinTopicData_metaDescriptorLength = 1692;
const char * DDS_CMDataReaderBuiltinTopicData_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"DDS\"><TypeDef name=\"BuiltinTopicKey_t\"><Array size=\"3\">",
"<Long/></Array></TypeDef><Struct name=\"ProductDataQosPolicy\"><Member name=\"value\"><String/></Member>",
"</Struct><Enum name=\"HistoryQosPolicyKind\"><Element name=\"KEEP_LAST_HISTORY_QOS\" value=\"0\"/><Element name=\"KEEP_ALL_HISTORY_QOS\" value=\"1\"/>",
"</Enum><Struct name=\"ResourceLimitsQosPolicy\"><Member name=\"max_samples\"><Long/></Member><Member name=\"max_instances\">",
"<Long/></Member><Member name=\"max_samples_per_instance\"><Long/></Member></Struct><Struct name=\"Duration_t\">",
"<Member name=\"sec\"><Long/></Member><Member name=\"nanosec\"><ULong/></Member></Struct><Enum name=\"InvalidSampleVisibilityQosPolicyKind\">",
"<Element name=\"NO_INVALID_SAMPLES\" value=\"0\"/><Element name=\"MINIMUM_INVALID_SAMPLES\" value=\"1\"/>",
"<Element name=\"ALL_INVALID_SAMPLES\" value=\"2\"/></Enum><Struct name=\"UserKeyQosPolicy\"><Member name=\"enable\">",
"<Boolean/></Member><Member name=\"expression\"><String/></Member></Struct><Struct name=\"ShareQosPolicy\">",
"<Member name=\"name\"><String/></Member><Member name=\"enable\"><Boolean/></Member></Struct><Struct name=\"HistoryQosPolicy\">",
"<Member name=\"kind\"><Type name=\"HistoryQosPolicyKind\"/></Member><Member name=\"depth\"><Long/></Member>",
"</Struct><Struct name=\"ReaderLifespanQosPolicy\"><Member name=\"use_lifespan\"><Boolean/></Member><Member name=\"duration\">",
"<Type name=\"Duration_t\"/></Member></Struct><Struct name=\"InvalidSampleVisibilityQosPolicy\"><Member name=\"kind\">",
"<Type name=\"InvalidSampleVisibilityQosPolicyKind\"/></Member></Struct><Struct name=\"ReaderDataLifecycleQosPolicy\">",
"<Member name=\"autopurge_nowriter_samples_delay\"><Type name=\"Duration_t\"/></Member><Member name=\"autopurge_disposed_samples_delay\">",
"<Type name=\"Duration_t\"/></Member><Member name=\"autopurge_dispose_all\"><Boolean/></Member><Member name=\"enable_invalid_samples\">",
"<Boolean/></Member><Member name=\"invalid_sample_visibility\"><Type name=\"InvalidSampleVisibilityQosPolicy\"/>",
"</Member></Struct><Struct name=\"CMDataReaderBuiltinTopicData\"><Member name=\"key\"><Type name=\"BuiltinTopicKey_t\"/>",
"</Member><Member name=\"product\"><Type name=\"ProductDataQosPolicy\"/></Member><Member name=\"subscriber_key\">",
"<Type name=\"BuiltinTopicKey_t\"/></Member><Member name=\"name\"><String/></Member><Member name=\"history\">",
"<Type name=\"HistoryQosPolicy\"/></Member><Member name=\"resource_limits\"><Type name=\"ResourceLimitsQosPolicy\"/>",
"</Member><Member name=\"reader_data_lifecycle\"><Type name=\"ReaderDataLifecycleQosPolicy\"/></Member>",
"<Member name=\"subscription_keys\"><Type name=\"UserKeyQosPolicy\"/></Member><Member name=\"reader_lifespan\">",
"<Type name=\"ReaderLifespanQosPolicy\"/></Member><Member name=\"share\"><Type name=\"ShareQosPolicy\"/>",
"</Member></Struct></Module></MetaData>"};
const int  DDS_CMDataReaderBuiltinTopicData_metaDescriptorArrLength = 25;
const int  DDS_CMDataReaderBuiltinTopicData_metaDescriptorLength = 2839;
#if defined (__cplusplus)
}
#endif
