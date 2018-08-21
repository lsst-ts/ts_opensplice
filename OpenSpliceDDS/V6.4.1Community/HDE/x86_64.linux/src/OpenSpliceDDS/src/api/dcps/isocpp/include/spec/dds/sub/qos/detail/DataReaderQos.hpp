#ifndef OMG_DDS_SUB_QOS_DETAIL_DATA_READER_QOS_HPP_
#define OMG_DDS_SUB_QOS_DETAIL_DATA_READER_QOS_HPP_

/* Copyright 2010, Object Management Group, Inc.
 * Copyright 2010, PrismTech, Corp.
 * Copyright 2010, Real-Time Innovations, Inc.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <dds/core/TEntityQos.hpp>
#include <foo/bar/sub/qos/DataReaderQos.hpp>

namespace dds
{
namespace sub
{
namespace qos
{
namespace detail
{
typedef ::dds::core::TEntityQos< ::foo::bar::sub::qos::DataReaderQos> DataReaderQos;
}
}
}
}


#endif /* OMG_DDS_SUB_QOS_DETAIL_DATA_READER_QOS_HPP_ */
