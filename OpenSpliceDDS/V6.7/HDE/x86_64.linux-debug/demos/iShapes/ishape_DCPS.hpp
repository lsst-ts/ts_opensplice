#ifndef ISOCPP2_ISHAPE_H
#define ISOCPP2_ISHAPE_H

#include "dds/dds.hpp"

#include "ishape.h"
#include "ishapeSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<ShapeType>
{
public:
    static ::org::opensplice::topic::DataRepresentationId_t getDataRepresentationId()
    {
        return ::org::opensplice::topic::OSPL_REPRESENTATION;
    }

    static ::std::vector<os_uchar> getMetaData()
    {
        return ::std::vector<os_uchar>();
    }

    static ::std::vector<os_uchar> getTypeHash()
    {
        return ::std::vector<os_uchar>();
    }

    static ::std::vector<os_uchar> getExtentions()
    {
        return ::std::vector<os_uchar>();
    }

    static const char *getKeyList()
    {
        return "color";
    }

    static const char *getTypeName()
    {
        return "ShapeType";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Struct name=\"ShapeType\"><Member name=\"color\"><String/></Member><Member name=\"x\">",
"<Long/></Member><Member name=\"y\"><Long/></Member><Member name=\"shapesize\"><Long/></Member></Struct>",
"</MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(229);
        for (int i = 0; i < 3; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __ShapeType__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __ShapeType__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<ShapeType>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<ShapeType>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(ShapeType)

#endif /* ISOCPP2_ISHAPE_H */
