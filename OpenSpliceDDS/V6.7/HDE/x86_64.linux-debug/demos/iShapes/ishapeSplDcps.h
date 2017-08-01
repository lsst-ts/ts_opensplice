#ifndef ISHAPESPLTYPES_H
#define ISHAPESPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ishape_DCPS.hpp"


extern const char *ShapeType_metaDescriptor[];
extern const int ShapeType_metaDescriptorArrLength;
extern const int ShapeType_metaDescriptorLength;
extern c_metaObject __ShapeType__load (c_base base);
struct _ShapeType ;
extern  v_copyin_result __ShapeType__copyIn(c_base base, const class ShapeType *from, struct _ShapeType *to);
extern  void __ShapeType__copyOut(const void *_from, void *_to);
struct _ShapeType {
    c_string color;
    c_long x;
    c_long y;
    c_long shapesize;
};

#undef OS_API
#endif
