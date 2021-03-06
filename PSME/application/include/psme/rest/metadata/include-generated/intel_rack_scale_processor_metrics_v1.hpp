#ifndef PSME_REST_METADATA_INTEL_RACK_SCALE_PROCESSOR_METRICS_V1_HPP
#define PSME_REST_METADATA_INTEL_RACK_SCALE_PROCESSOR_METRICS_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string Intel_RackScaleProcessorMetrics_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!--################################################################################       -->
<!--# Redfish Schema:  ProcessorMetrics  v1.1.0-->
<!--#                                                                                      -->
<!--# For a detailed change log, see the README file contained in the DSP8010 bundle,      -->
<!--# available at http://www.dmtf.org/standards/redfish                                   -->
<!--# Copyright 2014-2016 Distributed Management Task Force, Inc. (DMTF).                  -->
<!--# For the full DMTF copyright policy, see http://www.dmtf.org/about/policies/copyright -->
<!--################################################################################       -->
<!---->
<edmx:Edmx xmlns:edmx="http://docs.oasis-open.org/odata/ns/edmx" Version="4.0">

  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Core.V1.xml">
    <edmx:Include Namespace="Org.OData.Core.V1" Alias="OData"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/RedfishExtensions_v1.xml">
    <edmx:Include Namespace="RedfishExtensions.v1_0_0" Alias="Redfish"/>
    <edmx:Include Namespace="Validation.v1_0_0" Alias="Validation"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Measures.V1.xml">
    <edmx:Include Namespace="Org.OData.Measures.V1" Alias="Measures"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Intel_RackScale.ProcessorMetrics">

      <EntityType Name="ProcessorMetrics" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description"
                    String="ProcessorMetrics contains usage and health statistics for a Processor (all Cores) ."/>
        <Annotation Term="OData.LongDescription"
                    String="This resource shall be used to represent the Processor Metrics for a single Processor in a Redfish implementation."/>
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
      </EntityType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Intel_RackScale.ProcessorMetrics.v1_0_0">

      <EntityType Name="ProcessorMetrics" BaseType="Intel_RackScale.ProcessorMetrics.ProcessorMetrics">
        <Property Name="BandwidthPercent" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="CPU Bandwidth in [%]."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be CPU Utilization on specific CPU in %."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
          <Annotation Term="Validation.Maximum" Int="100"/>
        </Property>
        <Property Name="AverageFrequencyMHz" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Average frequency [MHz]."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be average frequency across all enabled cores in MHz."/>
          <Annotation Term="Measures.Unit" String="MHz"/>
        </Property>
        <Property Name="ThrottlingCelsius" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="CPU Margin to throttle (temperature offset in degree Celsius)."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be CPU margin to throttle based on an offset between max temperature resource can operate and its current temperature."/>
          <Annotation Term="Measures.Unit" String="Cel"/>
        </Property>
        <Property Name="TemperatureCelsius" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Temperature of the Processor resource."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be temperature of the Processor resource in Celsius."/>
          <Annotation Term="Measures.Unit" String="Cel"/>
        </Property>
        <Property Name="ConsumedPowerWatt" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Power consumed by Processor resource."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be power for specific CPU domain in Watts."/>
          <Annotation Term="Measures.Unit" String="W"/>
        </Property>
        <Property Name="Health" Type="Collection(Edm.String)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="CPU Health as a discrete sensor reading."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be Processor Health as a discrete sensor reading."/>
        </Property>
        <Property Name="FrequencyRatio" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Frequency relative to nominal CPU frequency."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be Frequency relative to nominal CPU frequency of the Processor resource."/>
        </Property>
        <Property Name="L3Miss" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="L3 cache line misses in millions."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be L3 cache line misses of the Processor resource in millions."/>
        </Property>
        <Property Name="L3HitRatio" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="L3 cache line hit ratio."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be L3 cache hit ratio of the Processor resource."/>
        </Property>
        <Property Name="L3Mpi" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="L3 cache misses per instruction."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be L3 cache misses per instruction of the Processor resource."/>
        </Property>
        <Property Name="LlcOccupancyBytes" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Total last level cache occupancy in bytes."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be total last level cache occupancy of the Processor resource in bytes."/>
        </Property>
        <Property Name="LlcOccupancyPercent" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Total last level cache occupancy in bytes."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be total last level cache occupancy percentage of the Processor resource."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
          <Annotation Term="Validation.Maximum" Int="100"/>
        </Property>
        <Property Name="MblBytes" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Local memory bandwidth usage in bytes."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be local memory bandwidth usage of the Processor resource in bytes."/>
        </Property>
        <Property Name="MbrBytes" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Remote memory bandwidth usage in bytes."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be remote memory bandwidth usage of the Processor resource in bytes."/>
        </Property>
        <Property Name="KernelPercent" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The percentage of time spend in system mode."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be total percentage of time the processor spend in kernel mode."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
          <Annotation Term="Validation.Maximum" Int="100"/>
        </Property>
        <Property Name="UserPercent" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The percentage of time spend in user mode."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be total percentage of time the processor spend in user mode."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
          <Annotation Term="Validation.Maximum" Int="100"/>
        </Property>
        <Property Name="CoreMetrics" Type="Collection(Intel_RackScale.ProcessorMetrics.v1_0_0.CoreMetrics)">
          <Annotation Term="OData.Description" String="Processor Core Metrics."/>
          <Annotation Term="OData.LongDescription"
                      String="This type shall contain properties that describe this Core of the Processor resource."/>
        </Property>
        <Property Name="Actions" Type="Intel_RackScale.ProcessorMetrics.v1_0_0.Actions" Nullable="false">
          <Annotation Term="OData.Description" String="The available actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
        </Property>
      </EntityType>
      <ComplexType Name="CoreMetrics">
          <Annotation Term="OData.Description" String="Processor Core Metrics."/>
          <Annotation Term="OData.LongDescription"
                      String="This type shall contain properties that describe this Core of the Processor resource."/>
        <Property Name="CoreId" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Processor resource Core Identifier."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall be Processor resource Core Identifier."/>
        </Property>
        <Property Name="InstructionsPerCycle" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Instructions per clock cycle of each core."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be instructions per clock cycle of each core in the Processor resource."/>
        </Property>
        <Property Name="L2Miss" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="L2 cache line misses of each core in millions."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be L2 cache line misses of each core in the Processor resource in millions."/>
        </Property>
        <Property Name="L2HitRatio" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="L2 cache line hit ratio of each core."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be L2 cache hit ratio of each core in the Processor resource."/>
        </Property>
        <Property Name="L2Mpi" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="L2 cache misses per instruction of each core."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be L2 cache misses per instruction of each core in the Processor resource."/>
        </Property>
        <Property Name="CstateResidency" Type="Collection(Intel_RackScale.ProcessorMetrics.v1_0_0.CstateResidency)">
          <Annotation Term="OData.Description" String="C-state residency of each core in the Processor."/>
          <Annotation Term="OData.LongDescription"
                      String="This object shall contain properties which describe the C-state residency of each core in the Processor resource."/>
        </Property>
      </ComplexType>

      <ComplexType Name="CstateResidency">
        <Annotation Term="OData.Description" String="C-state residency of the Processor."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain properties which describe the C-state residency of the Processor resource."/>
        <Property Name="Level" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The level of C-state, e.g. C0, C1, C2."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the level of C-state."/>
        </Property>
        <Property Name="ResidencyPercent" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The percentage of time that the whole package spends in this particular level of C-state."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be the percentage of time that the whole package spends in this particular level of C-state."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
          <Annotation Term="Validation.Maximum" Int="100"/>
        </Property>
      </ComplexType>
      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The available actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain the available actions for this resource."/>
        <Property Name="Oem" Type="Intel_RackScale.ProcessorMetrics.v1_0_0.OemActions" Nullable="false"/>
      </ComplexType>
      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="The available OEM specific actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional OEM actions for this resource."/>
      </ComplexType>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_INTEL_RACK_SCALE_PROCESSOR_METRICS_V1_HPP */
