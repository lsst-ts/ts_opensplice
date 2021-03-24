#ifndef VORTEX_C99_dds_predefTypes_H_
#define VORTEX_C99_dds_predefTypes_H_

#include "dds.h"
#include "dds_predefTypesDcps.h" /* add to C file instead? */



#ifdef __cplusplus
extern "C" {
#endif

 extern const dds_topic_descriptor_t DDS_String_desc;


#define DDS_String_free(d,o) dds_sample_free ((d), &DDS_String_desc, (o))


 extern const dds_topic_descriptor_t DDS_KeyedString_desc;


#define DDS_KeyedString_free(d,o) dds_sample_free ((d), &DDS_KeyedString_desc, (o))


 extern const dds_topic_descriptor_t DDS_Bytes_desc;


#define DDS_Bytes_free(d,o) dds_sample_free ((d), &DDS_Bytes_desc, (o))


 extern const dds_topic_descriptor_t DDS_KeyedBytes_desc;


#define DDS_KeyedBytes_free(d,o) dds_sample_free ((d), &DDS_KeyedBytes_desc, (o))


#ifdef __cplusplus
}
#endif

#endif /* VORTEX_C99_dds_predefTypes_H_ */
