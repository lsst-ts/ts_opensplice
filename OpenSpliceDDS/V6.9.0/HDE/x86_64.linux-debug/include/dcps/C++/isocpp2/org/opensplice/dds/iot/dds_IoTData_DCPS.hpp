#ifndef ISOCPP2_dds_IoTData_H
#define ISOCPP2_dds_IoTData_H

#include "dds/dds.hpp"

#include "dds_IoTData.h"
#include "dds_IoTDataSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<DDS::IoT::IoTData>
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
        return "typeName,instanceId";
    }

    static const char *getTypeName()
    {
        return "DDS::IoT::IoTData";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"DDS\"><Module name=\"IoT\"><Enum name=\"IoTType\"><Element name=\"TYPE_IoTUI8\" value=\"0\"/>",
"<Element name=\"TYPE_IoTUI16\" value=\"1\"/><Element name=\"TYPE_IoTUI32\" value=\"2\"/><Element name=\"TYPE_IoTUI64\" value=\"3\"/>",
"<Element name=\"TYPE_IoTI8\" value=\"4\"/><Element name=\"TYPE_IoTI16\" value=\"5\"/><Element name=\"TYPE_IoTI32\" value=\"6\"/>",
"<Element name=\"TYPE_IoTI64\" value=\"7\"/><Element name=\"TYPE_IoTF32\" value=\"8\"/><Element name=\"TYPE_IoTF64\" value=\"9\"/>",
"<Element name=\"TYPE_IoTB\" value=\"10\"/><Element name=\"TYPE_IoTStr\" value=\"11\"/><Element name=\"TYPE_IoTCh\" value=\"12\"/>",
"<Element name=\"TYPE_IoTUI8Seq\" value=\"13\"/><Element name=\"TYPE_IoTUI16Seq\" value=\"14\"/><Element name=\"TYPE_IoTUI32Seq\" value=\"15\"/>",
"<Element name=\"TYPE_IoTUI64Seq\" value=\"16\"/><Element name=\"TYPE_IoTI8Seq\" value=\"17\"/><Element name=\"TYPE_IoTI16Seq\" value=\"18\"/>",
"<Element name=\"TYPE_IoTI32Seq\" value=\"19\"/><Element name=\"TYPE_IoTI64Seq\" value=\"20\"/><Element name=\"TYPE_IoTF32Seq\" value=\"21\"/>",
"<Element name=\"TYPE_IoTF64Seq\" value=\"22\"/><Element name=\"TYPE_IoTBSeq\" value=\"23\"/><Element name=\"TYPE_IoTStrSeq\" value=\"24\"/>",
"<Element name=\"TYPE_IoTChSeq\" value=\"25\"/></Enum><TypeDef name=\"IoTUI8\"><Octet/></TypeDef><TypeDef name=\"IoTUI16\">",
"<UShort/></TypeDef><TypeDef name=\"IoTUI32\"><ULong/></TypeDef><TypeDef name=\"IoTUI64\"><ULongLong/>",
"</TypeDef><TypeDef name=\"IoTI8\"><Char/></TypeDef><TypeDef name=\"IoTI16\"><Short/></TypeDef><TypeDef name=\"IoTI32\">",
"<Long/></TypeDef><TypeDef name=\"IoTI64\"><LongLong/></TypeDef><TypeDef name=\"IoTF32\"><Float/></TypeDef>",
"<TypeDef name=\"IoTF64\"><Double/></TypeDef><TypeDef name=\"IoTB\"><Boolean/></TypeDef><TypeDef name=\"IoTStr\">",
"<String/></TypeDef><TypeDef name=\"IoTCh\"><Char/></TypeDef><TypeDef name=\"IoTUI8Seq\"><Sequence><Type name=\"IoTUI8\"/>",
"</Sequence></TypeDef><TypeDef name=\"IoTUI16Seq\"><Sequence><Type name=\"IoTUI16\"/></Sequence></TypeDef>",
"<TypeDef name=\"IoTUI32Seq\"><Sequence><Type name=\"IoTUI32\"/></Sequence></TypeDef><TypeDef name=\"IoTUI64Seq\">",
"<Sequence><Type name=\"IoTUI64\"/></Sequence></TypeDef><TypeDef name=\"IoTI8Seq\"><Sequence><Type name=\"IoTI8\"/>",
"</Sequence></TypeDef><TypeDef name=\"IoTI16Seq\"><Sequence><Type name=\"IoTI16\"/></Sequence></TypeDef>",
"<TypeDef name=\"IoTI32Seq\"><Sequence><Type name=\"IoTI32\"/></Sequence></TypeDef><TypeDef name=\"IoTI64Seq\">",
"<Sequence><Type name=\"IoTI64\"/></Sequence></TypeDef><TypeDef name=\"IoTF32Seq\"><Sequence><Type name=\"IoTF32\"/>",
"</Sequence></TypeDef><TypeDef name=\"IoTF64Seq\"><Sequence><Type name=\"IoTF64\"/></Sequence></TypeDef>",
"<TypeDef name=\"IoTBSeq\"><Sequence><Type name=\"IoTB\"/></Sequence></TypeDef><TypeDef name=\"IoTStrSeq\">",
"<Sequence><Type name=\"IoTStr\"/></Sequence></TypeDef><TypeDef name=\"IoTChSeq\"><Sequence><Type name=\"IoTCh\"/>",
"</Sequence></TypeDef><Union name=\"IoTValue\"><SwitchType><Type name=\"IoTType\"/></SwitchType><Case name=\"ui8\">",
"<Type name=\"IoTUI8\"/><Label value=\"TYPE_IoTUI8\"/></Case><Case name=\"ui16\"><Type name=\"IoTUI16\"/>",
"<Label value=\"TYPE_IoTUI16\"/></Case><Case name=\"ui32\"><Type name=\"IoTUI32\"/><Label value=\"TYPE_IoTUI32\"/>",
"</Case><Case name=\"ui64\"><Type name=\"IoTUI64\"/><Label value=\"TYPE_IoTUI64\"/></Case><Case name=\"i8\">",
"<Type name=\"IoTI8\"/><Label value=\"TYPE_IoTI8\"/></Case><Case name=\"i16\"><Type name=\"IoTI16\"/><Label value=\"TYPE_IoTI16\"/>",
"</Case><Case name=\"i32\"><Type name=\"IoTI32\"/><Label value=\"TYPE_IoTI32\"/></Case><Case name=\"i64\">",
"<Type name=\"IoTI64\"/><Label value=\"TYPE_IoTI64\"/></Case><Case name=\"f32\"><Type name=\"IoTF32\"/>",
"<Label value=\"TYPE_IoTF32\"/></Case><Case name=\"f64\"><Type name=\"IoTF64\"/><Label value=\"TYPE_IoTF64\"/>",
"</Case><Case name=\"b\"><Type name=\"IoTB\"/><Label value=\"TYPE_IoTB\"/></Case><Case name=\"str\"><Type name=\"IoTStr\"/>",
"<Label value=\"TYPE_IoTStr\"/></Case><Case name=\"ch\"><Type name=\"IoTCh\"/><Label value=\"TYPE_IoTCh\"/>",
"</Case><Case name=\"ui8Seq\"><Type name=\"IoTUI8Seq\"/><Label value=\"TYPE_IoTUI8Seq\"/></Case><Case name=\"ui16Seq\">",
"<Type name=\"IoTUI16Seq\"/><Label value=\"TYPE_IoTUI16Seq\"/></Case><Case name=\"ui32Seq\"><Type name=\"IoTUI32Seq\"/>",
"<Label value=\"TYPE_IoTUI32Seq\"/></Case><Case name=\"ui64Seq\"><Type name=\"IoTUI64Seq\"/><Label value=\"TYPE_IoTUI64Seq\"/>",
"</Case><Case name=\"i8Seq\"><Type name=\"IoTI8Seq\"/><Label value=\"TYPE_IoTI8Seq\"/></Case><Case name=\"i16Seq\">",
"<Type name=\"IoTI16Seq\"/><Label value=\"TYPE_IoTI16Seq\"/></Case><Case name=\"i32Seq\"><Type name=\"IoTI32Seq\"/>",
"<Label value=\"TYPE_IoTI32Seq\"/></Case><Case name=\"i64Seq\"><Type name=\"IoTI64Seq\"/><Label value=\"TYPE_IoTI64Seq\"/>",
"</Case><Case name=\"f32Seq\"><Type name=\"IoTF32Seq\"/><Label value=\"TYPE_IoTF32Seq\"/></Case><Case name=\"f64Seq\">",
"<Type name=\"IoTF64Seq\"/><Label value=\"TYPE_IoTF64Seq\"/></Case><Case name=\"bSeq\"><Type name=\"IoTBSeq\"/>",
"<Label value=\"TYPE_IoTBSeq\"/></Case><Case name=\"strSeq\"><Type name=\"IoTStrSeq\"/><Label value=\"TYPE_IoTStrSeq\"/>",
"</Case><Case name=\"chSeq\"><Type name=\"IoTChSeq\"/><Label value=\"TYPE_IoTChSeq\"/></Case></Union><Struct name=\"IoTNVP\">",
"<Member name=\"name\"><String/></Member><Member name=\"value\"><Type name=\"IoTValue\"/></Member></Struct>",
"<TypeDef name=\"IoTNVPSeq\"><Sequence><Type name=\"IoTNVP\"/></Sequence></TypeDef><Struct name=\"IoTData\">",
"<Member name=\"typeName\"><String/></Member><Member name=\"instanceId\"><String/></Member><Member name=\"values\">",
"<Type name=\"IoTNVPSeq\"/></Member></Struct></Module></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(5573);
        for (int i = 0; i < 48; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __DDS_IoT_IoTData__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __DDS_IoT_IoTData__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<DDS::IoT::IoTData>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<DDS::IoT::IoTData>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(DDS::IoT::IoTData)

#endif /* ISOCPP2_dds_IoTData_H */
