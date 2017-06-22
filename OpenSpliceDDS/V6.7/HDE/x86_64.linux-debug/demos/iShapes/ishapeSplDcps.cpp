#include "ishape_DCPS.hpp"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__ShapeType__copyIn(
    c_base base,
    const class ShapeType *from,
    struct _ShapeType *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
        to->color = c_stringNew_s(base, from->color_.c_str());
        if(to->color == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->color = c_stringNew_s(base, from->color_.c_str());
            if(to->color == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    to->x = (c_long)from->x_;
    to->y = (c_long)from->y_;
    to->shapesize = (c_long)from->shapesize_;
    return result;
}

void
__ShapeType__copyOut(
    const void *_from,
    void *_to)
{
    const struct _ShapeType *from = (const struct _ShapeType *)_from;
    class ShapeType *to = (class ShapeType *)_to;
    to->color(from->color ? from->color : "");
    to->x((int32_t)from->x);
    to->y((int32_t)from->y);
    to->shapesize((int32_t)from->shapesize);
}

