/*
 *                         Vortex OpenSplice
 *
 *   This software and documentation are Copyright 2006 to  ADLINK
 *   Technology Limited, its affiliated companies and licensors. All rights
 *   reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */

#if _LP64
#define PA_ATOMIC64_SUPPORT 1
#endif

#if ! PA_ATOMICS_OMIT_FUNCTIONS

/* LD, ST */

PA_INLINE os_uint32 pa_ld32 (const volatile pa_uint32_t *x) { return x->v; }
#if PA_ATOMIC64_SUPPORT
PA_INLINE os_uint64 pa_ld64 (const volatile pa_uint64_t *x) { return x->v; }
#endif
PA_INLINE os_address pa_ldptr (const volatile pa_uintptr_t *x) { return x->v; }
PA_INLINE void *pa_ldvoidp (const volatile pa_voidp_t *x) { return (void *) pa_ldptr (x); }

PA_INLINE void pa_st32 (volatile pa_uint32_t *x, os_uint32 v) { x->v = v; }
#if PA_ATOMIC64_SUPPORT
PA_INLINE void pa_st64 (volatile pa_uint64_t *x, os_uint64 v) { x->v = v; }
#endif
PA_INLINE void pa_stptr (volatile pa_uintptr_t *x, os_address v) { x->v = v; }
PA_INLINE void pa_stvoidp (volatile pa_voidp_t *x, void *v) { pa_stptr (x, (os_address) v); }

/* CAS */

PA_INLINE int pa_cas32 (volatile pa_uint32_t *x, os_uint32 exp, os_uint32 des) {
    int result = 0;
    __asm__ __volatile__ ("   sync\n\t"
                          "1: lwarx %0,0,%2\n\t"
                          "   cmpw %0, %4\n\t"
                          "   bne 2f\n\t"
                          "   stwcx. %3,0,%2\n\t"
                          "   bne- 1b\n\t"
                          "   li %1,1\n\t"
                          "2: isync\n\t"
                          : "=&r"(exp), "=&r"(result)
                          : "r"(&x->v), "r"(des), "r"(exp), "1"(result)
                          : "memory", "cr0");
    return result;
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE int pa_cas64 (volatile pa_uint64_t *x, os_uint64 exp, os_uint64 des) {
    int result = 0;
    __asm__ __volatile__ ("   sync\n\t"
                          "1: ldarx %0,0,%2\n\t"
                          "   cmp %0, %4\n\t"
                          "   bne 2f\n\t"
                          "   stdcx. %3,0,%2\n\t"
                          "   bne- 1b\n\t"
                          "   li %1,1\n\t"
                          "2: isync\n"
                          : "=&r"(exp), "=&r"(result)
                          : "r"(&x->v), "r"(des), "r"(exp), "1"(result)
                          : "memory", "cr0");
    return result;
}
#endif
PA_INLINE int pa_casptr (volatile pa_uintptr_t *x, os_address exp, os_address des) {
#if _LP64
    return pa_cas64 ((volatile pa_uint64_t *) x, exp, des);
#else
    return pa_cas32 ((volatile pa_uint32_t *) x, exp, des);
#endif
}
PA_INLINE int pa_casvoidp (volatile pa_voidp_t *x, void *exp, void *des) {
    return pa_casptr (x, (os_address) exp, (os_address) des);
}

/* ADD */

PA_INLINE os_uint32 pa_add32_nv (volatile pa_uint32_t *x, os_uint32 v) {
    register os_uint32 value2 __asm__ ("r4");
    __asm__ __volatile__ ("   sync\n\t"
                          "1: lwarx   %0,0,%2\n\t"
                          "   add     %0,%3,%0\n\t"
                          "   stwcx.  %0,0,%2\n\t"
                          "   bne-    1b\n\t"
                          "   isync"
                          : "=&r" (value2), "=m" (x->v)
                          : "r" (&x->v), "r" (v)
                          : "memory");
    return value2;
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE os_uint64 pa_add64_nv (volatile pa_uint64_t *x, os_uint64 v) {
    register os_uint64 value2 __asm__ ("r4");
    __asm__ __volatile__ ("   sync\n\t"
                          "1: ldarx   %0,0,%2\n\t"
                          "   add     %0,%3,%0\n\t"
                          "   stdcx.  %0,0,%2\n\t"
                          "   bne-    1b\n\t"
                          "   isync"
                          : "=&r" (value2), "=m" (x->v)
                          : "r" (&x->v), "r" (v)
                          : "memory");
    return value2;
}
#endif
PA_INLINE os_address pa_addptr_nv (volatile pa_uintptr_t *x, os_address v) {
#if _LP64
    return pa_add64_nv ((volatile pa_uint64_t *) x, v);
#else
    return pa_add32_nv ((volatile pa_uint32_t *) x, v);
#endif
}
PA_INLINE void *pa_addvoidp_nv (volatile pa_voidp_t *x, ptrdiff_t v) {
    return (void *) pa_addptr_nv ((volatile pa_uintptr_t *) x, (os_address) v);
}
PA_INLINE void pa_add32 (volatile pa_uint32_t *x, os_uint32 v) {
    (void) pa_add32_nv (x, v);
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE void pa_add64 (volatile pa_uint64_t *x, os_uint64 v) {
    (void) pa_add64_nv (x, v);
}
#endif
PA_INLINE void pa_addptr (volatile pa_uintptr_t *x, os_address v) {
    (void) pa_addptr_nv (x, v);
}
PA_INLINE void pa_addvoidp (volatile pa_voidp_t *x, ptrdiff_t v) {
    (void) pa_addvoidp_nv (x, v);
}

/* SUB */

PA_INLINE os_uint32 pa_sub32_nv (volatile pa_uint32_t *x, os_uint32 v) {
    return pa_add32_nv (x, -v);
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE os_uint64 pa_sub64_nv (volatile pa_uint64_t *x, os_uint64 v) {
    return pa_add64_nv (x, -v);
}
#endif
PA_INLINE os_address pa_subptr_nv (volatile pa_uintptr_t *x, os_address v) {
    return pa_addptr_nv (x, -v);
}
PA_INLINE void *pa_subvoidp_nv (volatile pa_voidp_t *x, ptrdiff_t v) {
    return pa_addvoidp_nv (x, -v);
}
PA_INLINE void pa_sub32 (volatile pa_uint32_t *x, os_uint32 v) {
    (void) pa_sub32_nv (x, v);
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE void pa_sub64 (volatile pa_uint64_t *x, os_uint64 v) {
    (void) pa_sub64_nv (x, v);
}
#endif
PA_INLINE void pa_subptr (volatile pa_uintptr_t *x, os_address v) {
    (void) pa_subptr_nv (x, v);
}
PA_INLINE void pa_subvoidp (volatile pa_voidp_t *x, ptrdiff_t v) {
    (void) pa_subvoidp_nv (x, v);
}

/* INC */

PA_INLINE os_uint32 pa_inc32_nv (volatile pa_uint32_t *x) {
    return pa_add32_nv (x, 1);
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE os_uint64 pa_inc64_nv (volatile pa_uint64_t *x) {
    return pa_add64_nv (x, 1);
}
#endif
PA_INLINE os_address pa_incptr_nv (volatile pa_uintptr_t *x) {
    return pa_addptr_nv (x, 1);
}
PA_INLINE void pa_inc32 (volatile pa_uint32_t *x) {
    (void) pa_inc32_nv (x);
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE void pa_inc64 (volatile pa_uint64_t *x) {
    (void) pa_inc64_nv (x);
}
#endif
PA_INLINE void pa_incptr (volatile pa_uintptr_t *x) {
    (void) pa_incptr_nv (x);
}

/* DEC */

PA_INLINE os_uint32 pa_dec32_nv (volatile pa_uint32_t *x) {
    return pa_sub32_nv (x, 1);
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE os_uint64 pa_dec64_nv (volatile pa_uint64_t *x) {
    return pa_sub64_nv (x, 1);
}
#endif
PA_INLINE os_address pa_decptr_nv (volatile pa_uintptr_t *x) {
    return pa_subptr_nv (x, 1);
}
PA_INLINE void pa_dec32 (volatile pa_uint32_t *x) {
    (void) pa_dec32_nv (x);
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE void pa_dec64 (volatile pa_uint64_t *x) {
    (void) pa_dec64_nv (x);
}
#endif
PA_INLINE void pa_decptr (volatile pa_uintptr_t *x) {
    (void) pa_decptr_nv (x);
}

/* AND */

PA_INLINE os_uint32 pa_and32_ov (volatile pa_uint32_t *x, os_uint32 v) {
    os_uint32 oldval, newval;
    do { oldval = x->v; newval = oldval & v; } while (!pa_cas32 (x, oldval, newval));
    return oldval;
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE os_uint64 pa_and64_ov (volatile pa_uint64_t *x, os_uint64 v) {
    os_uint64 oldval, newval;
    do { oldval = x->v; newval = oldval & v; } while (!pa_cas64 (x, oldval, newval));
    return oldval;
}
#endif
PA_INLINE os_address pa_andptr_ov (volatile pa_uintptr_t *x, os_address v) {
    os_address oldval, newval;
    do { oldval = x->v; newval = oldval & v; } while (!pa_casptr (x, oldval, newval));
    return oldval;
}
PA_INLINE os_uint32 pa_and32_nv (volatile pa_uint32_t *x, os_uint32 v) {
    os_uint32 oldval, newval;
    do { oldval = x->v; newval = oldval & v; } while (!pa_cas32 (x, oldval, newval));
    return newval;
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE os_uint64 pa_and64_nv (volatile pa_uint64_t *x, os_uint64 v) {
    os_uint64 oldval, newval;
    do { oldval = x->v; newval = oldval & v; } while (!pa_cas64 (x, oldval, newval));
    return newval;
}
#endif
PA_INLINE os_address pa_andptr_nv (volatile pa_uintptr_t *x, os_address v) {
    os_address oldval, newval;
    do { oldval = x->v; newval = oldval & v; } while (!pa_casptr (x, oldval, newval));
    return newval;
}
PA_INLINE void pa_and32 (volatile pa_uint32_t *x, os_uint32 v) {
    (void) pa_and32_nv (x, v);
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE void pa_and64 (volatile pa_uint64_t *x, os_uint64 v) {
    (void) pa_and64_nv (x, v);
}
#endif
PA_INLINE void pa_andptr (volatile pa_uintptr_t *x, os_address v) {
    (void) pa_andptr_nv (x, v);
}

/* OR */

PA_INLINE os_uint32 pa_or32_ov (volatile pa_uint32_t *x, os_uint32 v) {
    os_uint32 oldval, newval;
    do { oldval = x->v; newval = oldval | v; } while (!pa_cas32 (x, oldval, newval));
    return oldval;
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE os_uint64 pa_or64_ov (volatile pa_uint64_t *x, os_uint64 v) {
    os_uint64 oldval, newval;
    do { oldval = x->v; newval = oldval | v; } while (!pa_cas64 (x, oldval, newval));
    return oldval;
}
#endif
PA_INLINE os_address pa_orptr_ov (volatile pa_uintptr_t *x, os_address v) {
    os_address oldval, newval;
    do { oldval = x->v; newval = oldval | v; } while (!pa_casptr (x, oldval, newval));
    return oldval;
}
PA_INLINE os_uint32 pa_or32_nv (volatile pa_uint32_t *x, os_uint32 v) {
    os_uint32 oldval, newval;
    do { oldval = x->v; newval = oldval | v; } while (!pa_cas32 (x, oldval, newval));
    return newval;
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE os_uint64 pa_or64_nv (volatile pa_uint64_t *x, os_uint64 v) {
    os_uint64 oldval, newval;
    do { oldval = x->v; newval = oldval | v; } while (!pa_cas64 (x, oldval, newval));
    return newval;
}
#endif
PA_INLINE os_address pa_orptr_nv (volatile pa_uintptr_t *x, os_address v) {
    os_address oldval, newval;
    do { oldval = x->v; newval = oldval | v; } while (!pa_casptr (x, oldval, newval));
    return newval;
}
PA_INLINE void pa_or32 (volatile pa_uint32_t *x, os_uint32 v) {
    (void) pa_or32_nv (x, v);
}
#if PA_ATOMIC64_SUPPORT
PA_INLINE void pa_or64 (volatile pa_uint64_t *x, os_uint64 v) {
    (void) pa_or64_nv (x, v);
}
#endif
PA_INLINE void pa_orptr (volatile pa_uintptr_t *x, os_address v) {
    (void) pa_orptr_nv (x, v);
}

/* FENCES */

PA_INLINE void pa_fence (void) {
  __asm__ __volatile__ ("sync" : : : "memory");
}
PA_INLINE void pa_fence_acq (void) {
    pa_fence ();
}
PA_INLINE void pa_fence_rel (void) {
    pa_fence ();
}

#endif /* not omit functions */

#define PA_ATOMIC_SUPPORT 1
