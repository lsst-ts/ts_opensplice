#ifndef VORTEX_C99_dds_IoTData_H_
#define VORTEX_C99_dds_IoTData_H_

#include "dds.h"
#include "dds_IoTDataDcps.h" /* add to C file instead? */



#ifdef __cplusplus
extern "C" {
#endif

 extern const dds_topic_descriptor_t DDS_IoT_IoTData_desc;


#define DDS_IoT_IoTData_free(d,o) dds_sample_free ((d), &DDS_IoT_IoTData_desc, (o))


#ifdef __cplusplus
}
#endif

#endif /* VORTEX_C99_dds_IoTData_H_ */
