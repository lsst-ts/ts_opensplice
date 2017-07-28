#include "ishapeSplDcps.h"
#include "ishape_DCPS.hpp"

const char *
__ShapeType__name(void)
{
    return (const char*)"ShapeType";
}

const char *
__ShapeType__keys(void)
{
    return (const char*)"color";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>
#include <org/opensplice/core/EntityRegistry.hpp>

c_bool
__ShapeType__copyIn(
    c_base base,
    class ShapeType *from,
    struct _ShapeType *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
        to->color = c_stringNew(base, from->color_.c_str());
#else
            to->color = c_stringNew(base, from->color_.c_str());
#endif
    to->x = (c_long)from->x_;
    to->y = (c_long)from->y_;
    to->shapesize = (c_long)from->shapesize_;
    return result;
}

INSTANTIATE_TYPED_REGISTRIES(ShapeType)

void
__ShapeType__copyOut(
    void *_from,
    void *_to)
{
    struct _ShapeType *from = (struct _ShapeType *)_from;
    class ShapeType *to = (class ShapeType *)_to;
    to->color_ = (from->color ? from->color : "");
    to->x_ = (::DDS::Long)from->x;
    to->y_ = (::DDS::Long)from->y;
    to->shapesize_ = (::DDS::Long)from->shapesize;
}

