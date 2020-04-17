﻿// Copyright 2019 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file DataWriterQos.hpp
 */


#ifndef _FASTDDS_DATAWRITERQOS_HPP
#define _FASTDDS_DATAWRITERQOS_HPP

#include <fastdds/dds/core/policy/QosPolicies.hpp>
#include <fastdds/dds/publisher/qos/WriterQos.hpp>
#include <fastdds/dds/publisher/qos/PublisherQos.hpp>
#include <fastdds/dds/core/policy/WriterDataLifecycleQosPolicy.hpp>
#include <fastrtps/rtps/attributes/WriterAttributes.h>

namespace eprosima {
namespace fastdds {
namespace dds {

class RTPSReliableWriterQos
{
public:

    RTPS_DllAPI RTPSReliableWriterQos()
    {
    }

    virtual RTPS_DllAPI ~RTPSReliableWriterQos() = default;

    bool operator ==(
            const RTPSReliableWriterQos& b) const
    {
        return (this->times == b.times) &&
               (this->disable_positive_acks == b.disable_positive_acks);
    }

    //!Writer Attributes
    fastrtps::rtps::WriterTimes times;

    //!Disable positive acks QoS, implemented in the library.
    DisablePositiveACKsQosPolicy disable_positive_acks;
};

/**
 * Class DataWriterQos, containing all the possible Qos that can be  for a determined Topic.
 * Although these values can be  and are transmitted
 * during the Endpoint Discovery Protocol, not all of the behaviour associated with them has been implemented in the library.
 * Please consult each of them to check for implementation details and default values.
 * @ingroup FASTDDS_QOS_MODULE
 */
class DataWriterQos
{
public:

    RTPS_DllAPI DataWriterQos();

    RTPS_DllAPI ~DataWriterQos() = default;

    RTPS_DllAPI bool operator ==(
            const DataWriterQos& b) const
    {
        return (this->durability_ == b.durability()) &&
               (this->durability_service_ == b.durability_service()) &&
               (this->deadline_ == b.deadline()) &&
               (this->latency_budget_ == b.latency_budget()) &&
               (this->liveliness_ == b.liveliness()) &&
               (this->reliability_ == b.reliability()) &&
               (this->destination_order_ == b.destination_order()) &&
               (this->history_ == b.history()) &&
               (this->resource_limits_ == b.resource_limits()) &&
               (this->transport_priority_ == b.transport_priority()) &&
               (this->lifespan_ == b.lifespan()) &&
               (this->user_data_ == b.user_data()) &&
               (this->ownership_ == b.ownership()) &&
               (this->ownership_strength_ == b.ownership_strength()) &&
               (this->writer_data_lifecycle_ == b.writer_data_lifecycle()) &&
               (this->publish_mode_ == b.publish_mode()) &&
               (this->representation_ == b.representation()) &&
               (this->properties_ == b.properties()) &&
               (this->reliable_writer_data_ == b.reliable_writer_data()) &&
               (this->endpoint_data_ == b.endpoint_data()) &&
               (this->writer_resources_ == b.writer_resources()) &&
               (this->throughput_controller_ == b.throughput_controller());
    }

    RTPS_DllAPI WriterQos get_writerqos(
            const PublisherQos& pqos) const;

    /**
     * Getter for DurabilityQosPolicy
     * @return DurabilityQosPolicy reference
     */
    RTPS_DllAPI DurabilityQosPolicy& durability()
    {
        return durability_;
    }

    /**
     * Getter for DurabilityQosPolicy
     * @return DurabilityQosPolicy reference
     */
    RTPS_DllAPI const DurabilityQosPolicy& durability() const
    {
        return durability_;
    }

    /**
     * Setter for DurabilityQosPolicy
     * @param durability
     */
    RTPS_DllAPI void durability(
            const DurabilityQosPolicy& durability)
    {
        durability_ = durability;
    }

    /**
     * Getter for DurabilityServiceQosPolicy
     * @return DurabilityServiceQosPolicy reference
     */
    RTPS_DllAPI DurabilityServiceQosPolicy& durability_service()
    {
        return durability_service_;
    }

    /**
     * Getter for DurabilityServiceQosPolicy
     * @return DurabilityServiceQosPolicy reference
     */
    RTPS_DllAPI const DurabilityServiceQosPolicy& durability_service() const
    {
        return durability_service_;
    }

    /**
     * Setter for DurabilityServiceQosPolicy
     * @param durability_service
     */
    RTPS_DllAPI void durability_service(
            const DurabilityServiceQosPolicy& durability_service)
    {
        durability_service_ = durability_service;
    }

    /**
     * Getter for DeadlineQosPolicy
     * @return DeadlineQosPolicy reference
     */
    RTPS_DllAPI DeadlineQosPolicy& deadline()
    {
        return deadline_;
    }

    /**
     * Getter for DeadlineQosPolicy
     * @return DeadlineQosPolicy reference
     */
    RTPS_DllAPI const DeadlineQosPolicy& deadline() const
    {
        return deadline_;
    }

    /**
     * Setter for DeadlineQosPolicy
     * @param deadline
     */
    RTPS_DllAPI void deadline(
            const DeadlineQosPolicy& deadline)
    {
        deadline_ = deadline;
    }

    /**
     * Getter for LatencyBudgetQosPolicy
     * @return LatencyBudgetQosPolicy reference
     */
    RTPS_DllAPI LatencyBudgetQosPolicy& latency_budget()
    {
        return latency_budget_;
    }

    /**
     * Getter for LatencyBudgetQosPolicy
     * @return LatencyBudgetQosPolicy reference
     */
    RTPS_DllAPI const LatencyBudgetQosPolicy& latency_budget() const
    {
        return latency_budget_;
    }

    /**
     * Setter for LatencyBudgetQosPolicy
     * @param latency_budget
     */
    RTPS_DllAPI void latency_budget(
            const LatencyBudgetQosPolicy& latency_budget)
    {
        latency_budget_ = latency_budget;
    }

    /**
     * Getter for LivelinessQosPolicy
     * @return LivelinessQosPolicy reference
     */
    RTPS_DllAPI LivelinessQosPolicy& liveliness()
    {
        return liveliness_;
    }

    /**
     * Getter for LivelinessQosPolicy
     * @return LivelinessQosPolicy reference
     */
    RTPS_DllAPI const LivelinessQosPolicy& liveliness() const
    {
        return liveliness_;
    }

    /**
     * Setter for LivelinessQosPolicy
     * @param liveliness
     */
    RTPS_DllAPI void liveliness(
            const LivelinessQosPolicy& liveliness)
    {
        liveliness_ = liveliness;
    }

    /**
     * Getter for ReliabilityQosPolicy
     * @return ReliabilityQosPolicy reference
     */
    RTPS_DllAPI ReliabilityQosPolicy& reliability()
    {
        return reliability_;
    }

    /**
     * Getter for ReliabilityQosPolicy
     * @return ReliabilityQosPolicy reference
     */
    RTPS_DllAPI const ReliabilityQosPolicy& reliability() const
    {
        return reliability_;
    }

    /**
     * Setter for ReliabilityQosPolicy
     * @param reliability
     */
    RTPS_DllAPI void reliability(
            const ReliabilityQosPolicy& reliability)
    {
        reliability_ = reliability;
    }

    /**
     * Getter for DestinationOrderQosPolicy
     * @return DestinationOrderQosPolicy reference
     */
    RTPS_DllAPI DestinationOrderQosPolicy& destination_order()
    {
        return destination_order_;
    }

    /**
     * Getter for DestinationOrderQosPolicy
     * @return DestinationOrderQosPolicy reference
     */
    RTPS_DllAPI const DestinationOrderQosPolicy& destination_order() const
    {
        return destination_order_;
    }

    /**
     * Setter for DestinationOrderQosPolicy
     * @param destination_order
     */
    RTPS_DllAPI void destination_order(
            const DestinationOrderQosPolicy& destination_order)
    {
        destination_order_ = destination_order;
    }

    /**
     * Getter for HistoryQosPolicy
     * @return HistoryQosPolicy reference
     */
    RTPS_DllAPI HistoryQosPolicy& history()
    {
        return history_;
    }

    /**
     * Getter for HistoryQosPolicy
     * @return HistoryQosPolicy reference
     */
    RTPS_DllAPI const HistoryQosPolicy& history() const
    {
        return history_;
    }

    /**
     * Setter for HistoryQosPolicy
     * @param history
     */
    RTPS_DllAPI void history(
            const HistoryQosPolicy& history)
    {
        history_ = history;
    }

    /**
     * Getter for ResourceLimitsQosPolicy
     * @return ResourceLimitsQosPolicy reference
     */
    RTPS_DllAPI ResourceLimitsQosPolicy& resource_limits()
    {
        return resource_limits_;
    }

    /**
     * Getter for ResourceLimitsQosPolicy
     * @return ResourceLimitsQosPolicy reference
     */
    RTPS_DllAPI const ResourceLimitsQosPolicy& resource_limits() const
    {
        return resource_limits_;
    }

    /**
     * Setter for ResourceLimitsQosPolicy
     * @param resource_limits
     */
    RTPS_DllAPI void resource_limits(
            const ResourceLimitsQosPolicy& resource_limits)
    {
        resource_limits_ = resource_limits;
    }

    /**
     * Getter for TransportPriorityQosPolicy
     * @return TransportPriorityQosPolicy reference
     */
    RTPS_DllAPI TransportPriorityQosPolicy& transport_priority()
    {
        return transport_priority_;
    }

    /**
     * Getter for TransportPriorityQosPolicy
     * @return TransportPriorityQosPolicy reference
     */
    RTPS_DllAPI const TransportPriorityQosPolicy& transport_priority() const
    {
        return transport_priority_;
    }

    /**
     * Setter for TransportPriorityQosPolicy
     * @param transport_priority
     */
    RTPS_DllAPI void transport_priority(
            const TransportPriorityQosPolicy& transport_priority)
    {
        transport_priority_ = transport_priority;
    }

    /**
     * Getter for LifespanQosPolicy
     * @return LifespanQosPolicy reference
     */
    RTPS_DllAPI LifespanQosPolicy& lifespan()
    {
        return lifespan_;
    }

    /**
     * Getter for LifespanQosPolicy
     * @return LifespanQosPolicy reference
     */
    RTPS_DllAPI const LifespanQosPolicy& lifespan() const
    {
        return lifespan_;
    }

    /**
     * Setter for LifespanQosPolicy
     * @param lifespan
     */
    RTPS_DllAPI void lifespan(
            const LifespanQosPolicy& lifespan)
    {
        lifespan_ = lifespan;
    }

    /**
     * Getter for UserDataQosPolicy
     * @return UserDataQosPolicy reference
     */
    RTPS_DllAPI UserDataQosPolicy& user_data()
    {
        return user_data_;
    }

    /**
     * Getter for UserDataQosPolicy
     * @return UserDataQosPolicy reference
     */
    RTPS_DllAPI const UserDataQosPolicy& user_data() const
    {
        return user_data_;
    }

    /**
     * Setter for UserDataQosPolicy
     * @param user_data
     */
    RTPS_DllAPI void user_data(
            const UserDataQosPolicy& user_data)
    {
        user_data_ = user_data;
    }

    /**
     * Getter for OwnershipQosPolicy
     * @return OwnershipQosPolicy reference
     */
    RTPS_DllAPI OwnershipQosPolicy& ownership()
    {
        return ownership_;
    }

    /**
     * Getter for OwnershipQosPolicy
     * @return OwnershipQosPolicy reference
     */
    RTPS_DllAPI const OwnershipQosPolicy& ownership() const
    {
        return ownership_;
    }

    /**
     * Setter for OwnershipQosPolicy
     * @param ownership
     */
    RTPS_DllAPI void ownership(
            const OwnershipQosPolicy& ownership)
    {
        ownership_ = ownership;
    }

    /**
     * Getter for OwnershipStrengthQosPolicy
     * @return OwnershipStrengthQosPolicy reference
     */
    RTPS_DllAPI OwnershipStrengthQosPolicy& ownership_strength()
    {
        return ownership_strength_;
    }

    /**
     * Getter for OwnershipStrengthQosPolicy
     * @return OwnershipStrengthQosPolicy reference
     */
    RTPS_DllAPI const OwnershipStrengthQosPolicy& ownership_strength() const
    {
        return ownership_strength_;
    }

    /**
     * Setter for OwnershipStrengthQosPolicy
     * @param ownership_strength
     */
    RTPS_DllAPI void ownership_strength(
            const OwnershipStrengthQosPolicy& ownership_strength)
    {
        ownership_strength_ = ownership_strength;
    }

    /**
     * Getter for WriterDataLifecycleQosPolicy
     * @return WriterDataLifecycleQosPolicy reference
     */
    RTPS_DllAPI WriterDataLifecycleQosPolicy& writer_data_lifecycle()
    {
        return writer_data_lifecycle_;
    }

    /**
     * Getter for WriterDataLifecycleQosPolicy
     * @return WriterDataLifecycleQosPolicy reference
     */
    RTPS_DllAPI const WriterDataLifecycleQosPolicy& writer_data_lifecycle() const
    {
        return writer_data_lifecycle_;
    }

    /**
     * Setter for WriterDataLifecycleQosPolicy
     * @param writer_data_lifecycle
     */
    RTPS_DllAPI void writer_data_lifecycle(
            const WriterDataLifecycleQosPolicy& writer_data_lifecycle)
    {
        writer_data_lifecycle_ = writer_data_lifecycle;
    }

    /**
     * Getter for PublishModeQosPolicy
     * @return PublishModeQosPolicy reference
     */
    RTPS_DllAPI PublishModeQosPolicy& publish_mode()
    {
        return publish_mode_;
    }

    /**
     * Getter for PublishModeQosPolicy
     * @return PublishModeQosPolicy reference
     */
    RTPS_DllAPI const PublishModeQosPolicy& publish_mode() const
    {
        return publish_mode_;
    }

    /**
     * Setter for PublishModeQosPolicy
     * @param publish_mode
     */
    RTPS_DllAPI void publish_mode(
            const PublishModeQosPolicy& publish_mode)
    {
        publish_mode_ = publish_mode;
    }

    /**
     * Getter for DataRepresentationQosPolicy
     * @return DataRepresentationQosPolicy reference
     */
    RTPS_DllAPI DataRepresentationQosPolicy& representation()
    {
        return representation_;
    }

    /**
     * Getter for DataRepresentationQosPolicy
     * @return DataRepresentationQosPolicy reference
     */
    RTPS_DllAPI const DataRepresentationQosPolicy& representation() const
    {
        return representation_;
    }

    /**
     * Setter for DataRepresentationQosPolicy
     * @param representation
     */
    RTPS_DllAPI void representation(
            const DataRepresentationQosPolicy& representation)
    {
        representation_ = representation;
    }

    /**
     * Getter for PropertyPolicyQos
     * @return PropertyPolicyQos reference
     */
    RTPS_DllAPI PropertyPolicyQos& properties()
    {
        return properties_;
    }

    /**
     * Getter for PropertyPolicyQos
     * @return PropertyPolicyQos reference
     */
    RTPS_DllAPI const PropertyPolicyQos& properties() const
    {
        return properties_;
    }

    /**
     * Setter for PropertyPolicyQos
     * @param properties
     */
    RTPS_DllAPI void properties(
            const PropertyPolicyQos& properties)
    {
        properties_ = properties;
    }

    /**
     * Getter for RTPSReliableWriterQos
     * @return RTPSReliableWriterQos reference
     */
    RTPS_DllAPI RTPSReliableWriterQos& reliable_writer_data()
    {
        return reliable_writer_data_;
    }

    /**
     * Getter for RTPSReliableWriterQos
     * @return RTPSReliableWriterQos reference
     */
    RTPS_DllAPI const RTPSReliableWriterQos& reliable_writer_data() const
    {
        return reliable_writer_data_;
    }

    /**
     * Setter for RTPSReliableWriterQos
     * @param reliable_writer_data
     */
    RTPS_DllAPI void reliable_writer_data(
            const RTPSReliableWriterQos& reliable_writer_data)
    {
        reliable_writer_data_ = reliable_writer_data;
    }

    /**
     * Getter for RTPSEndpointQos
     * @return RTPSEndpointQos reference
     */
    RTPS_DllAPI RTPSEndpointQos& endpoint_data()
    {
        return endpoint_data_;
    }

    /**
     * Getter for RTPSEndpointQos
     * @return RTPSEndpointQos reference
     */
    RTPS_DllAPI const RTPSEndpointQos& endpoint_data() const
    {
        return endpoint_data_;
    }

    /**
     * Setter for RTPSEndpointQos
     * @param endpoint_data
     */
    RTPS_DllAPI void endpoint_data(
            const RTPSEndpointQos& endpoint_data)
    {
        endpoint_data_ = endpoint_data;
    }

    /**
     * Getter for WriterResourceLimitsQos
     * @return WriterResourceLimitsQos reference
     */
    RTPS_DllAPI WriterResourceLimitsQos& writer_resources()
    {
        return writer_resources_;
    }

    /**
     * Getter for WriterResourceLimitsQos
     * @return WriterResourceLimitsQos reference
     */
    RTPS_DllAPI const WriterResourceLimitsQos& writer_resources() const
    {
        return writer_resources_;
    }

    /**
     * Setter for WriterResourceLimitsQos
     * @param writer_resources
     */
    RTPS_DllAPI void writer_resources(
            const WriterResourceLimitsQos& writer_resources)
    {
        writer_resources_ = writer_resources;
    }

    /**
     * Getter for ThroughputControllerDescriptor
     * @return ThroughputControllerDescriptor reference
     */
    RTPS_DllAPI fastrtps::rtps::ThroughputControllerDescriptor& throughput_controller()
    {
        return throughput_controller_;
    }

    /**
     * Getter for ThroughputControllerDescriptor
     * @return ThroughputControllerDescriptor reference
     */
    RTPS_DllAPI const fastrtps::rtps::ThroughputControllerDescriptor& throughput_controller() const
    {
        return throughput_controller_;
    }

    /**
     * Setter for ThroughputControllerDescriptor
     * @param throughput_controller
     */
    RTPS_DllAPI void throughput_controller(
            const fastrtps::rtps::ThroughputControllerDescriptor& throughput_controller)
    {
        throughput_controller_ = throughput_controller;
    }

private:

    //!Durability Qos, implemented in the library.
    DurabilityQosPolicy durability_;

    //!Durability Service Qos, NOT implemented in the library.
    DurabilityServiceQosPolicy durability_service_;

    //!Deadline Qos, implemented in the library.
    DeadlineQosPolicy deadline_;

    //!Latency Budget Qos, NOT implemented in the library.
    LatencyBudgetQosPolicy latency_budget_;

    //!Liveliness Qos, implemented in the library.
    LivelinessQosPolicy liveliness_;

    //!Reliability Qos, implemented in the library.
    ReliabilityQosPolicy reliability_;

    //!Destination Order Qos, NOT implemented in the library.
    DestinationOrderQosPolicy destination_order_;

    //!History Qos, implemented in the library.
    HistoryQosPolicy history_;

    //!Resource Limits Qos, implemented in the library.
    ResourceLimitsQosPolicy resource_limits_;

    //!Transport Priority Qos, NOT implemented in the library.
    TransportPriorityQosPolicy transport_priority_;

    //!Lifespan Qos, implemented in the library.
    LifespanQosPolicy lifespan_;

    //!User Data Qos, implemented in the library.
    UserDataQosPolicy user_data_;

    //!Ownership Qos, NOT implemented in the library.
    OwnershipQosPolicy ownership_;

    //!Ownership Strength Qos, NOT implemented in the library.
    OwnershipStrengthQosPolicy ownership_strength_;

    //!Writer Data Lifecycle Qos, NOT implemented in the library.
    WriterDataLifecycleQosPolicy writer_data_lifecycle_;

    //!Publication Mode Qos, implemented in the library.
    PublishModeQosPolicy publish_mode_;

    //!Data Representation Qos, implemented in the library.
    DataRepresentationQosPolicy representation_;

    //!Property policies
    PropertyPolicyQos properties_;

    //!RTPS Reliable Writer Qos
    RTPSReliableWriterQos reliable_writer_data_;

    //!RTPS Endpoint Qos
    RTPSEndpointQos endpoint_data_;

    //!Writer Resource Limits Qos
    WriterResourceLimitsQos writer_resources_;

    //!Throughput controller
    fastrtps::rtps::ThroughputControllerDescriptor throughput_controller_;
};

RTPS_DllAPI extern const DataWriterQos DATAWRITER_QOS_DEFAULT;

} // namespace dds
} // namespace fastdds
} // namespace eprosima

#endif // _FASTDDS_DATAWRITERQOS_HPP