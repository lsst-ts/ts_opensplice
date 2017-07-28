#ifndef ISHAPESPLTYPES_H
#define ISHAPESPLTYPES_H

#include "ishape_DCPS.hpp"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __ShapeType__load (c_base base);
extern const char * __ShapeType__keys (void);
extern const char * __ShapeType__name (void);
struct _ShapeType ;
extern  c_bool __ShapeType__copyIn(c_base base, class ShapeType *from, struct _ShapeType *to);
extern  void __ShapeType__copyOut(void *_from, void *_to);
struct _ShapeType {
    c_string color;
    c_long x;
    c_long y;
    c_long shapesize;
};

#endif
