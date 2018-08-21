#ifndef CCPP_DDS_BUILTINTOPICS_H
#define CCPP_DDS_BUILTINTOPICS_H



#ifdef CCPP_USE_CUSTOM_SUFFIX_DDS_BUILTINTOPICS
#include "dds_builtinTopics.h"
#include "dds_builtinTopicsDcps.h"
#else
#include "dds_builtinTopicsC.h"
#include "dds_builtinTopicsDcpsC.h"
#endif

#include <orb_abstraction.h>
#include "dds_builtinTopicsDcps_impl.h"



#endif /* CCPP_DDS_BUILTINTOPICS_H */
