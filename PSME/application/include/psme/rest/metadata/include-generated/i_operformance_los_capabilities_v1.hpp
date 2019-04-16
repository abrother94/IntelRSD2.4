#ifndef PSME_REST_METADATA_I_OPERFORMANCE_LOS_CAPABILITIES_V1_HPP
#define PSME_REST_METADATA_I_OPERFORMANCE_LOS_CAPABILITIES_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string IOPerformanceLoSCapabilities_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!-- Copyright 2015-2018 Storage Networking Industry Association (SNIA), USA. All rights reserved.-->
<edmx:Edmx xmlns:edmx="http://docs.oasis-open.org/odata/ns/edmx" Version="4.0">
  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Core.V1.xml">
    <edmx:Include Namespace="Org.OData.Core.V1" Alias="OData"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Measures.V1.xml">
    <edmx:Include Namespace="Org.OData.Measures.V1" Alias="Measures"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/RedfishExtensions_v1.xml">
    <edmx:Include Namespace="RedfishExtensions.v1_0_0" Alias="Redfish"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource"/>
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Schedule_v1.xml">
    <edmx:Include Namespace="Schedule"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/IOPerformanceLineOfService_v1.xml">
    <edmx:Include Namespace="IOPerformanceLineOfService"/>
  </edmx:Reference>
  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOPerformanceLoSCapabilities">
      <EntityType Name="IOPerformanceLoSCapabilities" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="Describe data protection capabilities"/>
        <Annotation
          Term="OData.LongDescription"
          String="The capabilities to protect data from loss by the use of a replica. The requirements must be met collectively by the communication path and the replica. There will be one instance associated to a class of service for each replica. Each replica has its own class of service that describes its characteristics."/>
      </EntityType>

      <ComplexType Name="IOWorkload" Abstract="true">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="An IO Workload description."/>
        <Annotation Term="OData.LongDescription" String="This structure may be used to describe an IO Workload.  "/>
      </ComplexType>

      <ComplexType Name="IOWorkloadComponent" Abstract="true">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="Describe a component of a IO workload."/>
        <Annotation Term="OData.LongDescription" String="This structure may be used to describe a component of an IO workload."/>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOPerformanceLoSCapabilities.v1_0_0">
      <EntityType Name="IOPerformanceLoSCapabilities" BaseType="IOPerformanceLoSCapabilities.IOPerformanceLoSCapabilities">
        <Annotation Term="OData.Description" String="Describe io performance capabilities."/>
        <Annotation Term="OData.LongDescription" String="Each instance of IOPerformanceLoSCapabilities shall describe the capabilities of the system to support various IO performance service options."/>
        <Property Name="Identifier" Type="Resource.Identifier">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The value identifies this resource."/>
          <Annotation Term="OData.LongDescription" String="The value shall be unique within the managed ecosystem."/>
        </Property>
        <Property Name="IOLimitingIsSupported" Type="Edm.Boolean" DefaultValue="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Limiting IOPS is supported."/>
          <Annotation
            Term="OData.LongDescription"
            String="If true, the system should limit IOPS to MaxIOOperationsPerSecondPerTerabyte * (Volume Size in Terabytes). Otherwise, the system shall not inforce a limit. The default value for this property is false."/>
        </Property>
        <Property Name="MinSamplePeriod" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Minimum sampling period over which average values are calculated."/>
          <Annotation Term="OData.LongDescription" String="The value shall be an ISO 8601 duration specifying the minimum sampling period over which average values are calculated."/>
          <Annotation Term="Measures.Unit" String="s"/>
        </Property>
        <Property Name="MaxSamplePeriod" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Maximum sampling period over which average values are calculated."/>
          <Annotation Term="OData.LongDescription" String="The value shall be an ISO 8601 duration specifying the maximum sampling period over which average values are calculated."/>
          <Annotation Term="Measures.Unit" String="s"/>
        </Property>
        <Property Name="MinSupportedIoOperationLatencyMicroseconds" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Minimum supported average IO latency."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the minimum supported average IO latency in microseconds calculated over the SamplePeriod"/>
          <Annotation Term="Measures.Unit" String="us"/>
        </Property>
        <Property Name="SupportedIOWorkloads" Type="Collection(IOPerformanceLoSCapabilities.v1_0_0.IOWorkload)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="A collection of supported workloads."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a collection of supported workloads."/>
        </Property>
        <NavigationProperty Name="SupportedLinesOfService" Type="Collection(IOPerformanceLineOfService.IOPerformanceLineOfService)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Collection of known and supported IOPerformanceLinesOfService."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a collection supported IO performance service options."/>
          <Annotation Term="OData.AutoExpand"/>
        </NavigationProperty>
      </EntityType>

      <ComplexType Name="IOWorkload" BaseType="IOPerformanceLoSCapabilities.IOWorkload">
        <Annotation Term="OData.Description" String="An IO Workload description."/>
        <Annotation Term="OData.LongDescription" String="This structure may be used to describe an IO Workload.  "/>
        <Property Name="Name" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The workload name."/>
          <Annotation
            Term="OData.LongDescription"
            String="The value shall be a name of the workload. It should be constructed as OrgID:WorkloadID. Examples: ACME:DSS, ACME:DSS-REP, ACME:Exchange, ACME:OLTP, ACME:OLTP-REPA.  An organization may define a set of well known workloads."/>
        </Property>
        <Property Name="Components" Type="Collection(IOPerformanceLoSCapabilities.v1_0_0.IOWorkloadComponent)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="An array of IO workload component descriptions."/>
          <Annotation Term="OData.LongDescription" String="The value shall be an array of IO workload component descriptions."/>
        </Property>
      </ComplexType>

      <ComplexType Name="IOWorkloadComponent" BaseType="IOPerformanceLoSCapabilities.IOWorkloadComponent">
        <Annotation Term="OData.Description" String="Describe a component of a IO workload."/>
        <Annotation Term="OData.LongDescription" String="This structure may be used to describe a component of an IO workload."/>
        <Property Name="IOAccessPattern" Type="IOPerformanceLoSCapabilities.v1_0_0.IOAccessPattern">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Expected access pattern for this component."/>
          <Annotation Term="OData.LongDescription" String="The enumeration literal shall be the expected access pattern."/>
        </Property>
        <Property Name="AverageIOBytes" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Average I/O Size for this component."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the expected average I/O size."/>
          <Annotation Term="Measures.Unit" String="By"/>
        </Property>
        <Property Name="PercentOfData" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Percent of data for this workload component."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the expected percent of the data referenced by the workload that is covered by this component."/>
          <Annotation Term="Measures.Unit" String="%"/>
        </Property>
        <Property Name="PercentOfIOPS" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Percent of total IOPS for this workload component."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the expected percent of the total IOPS for this workload that is covered by this component"/>
          <Annotation Term="Measures.Unit" String="%"/>
        </Property>
        <Property Name="Duration" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Duration that this component is active."/>
          <Annotation
            Term="OData.LongDescription"
            String="The value of each entry shall be an ISO 8601 duration that shall specify the expected length of time that this component is applied to the workload. This attribute shall be specified if a schedule is specified and otherwise shall not be specified."/>
          <Annotation Term="Measures.Unit" String="s"/>
        </Property>
        <Property Name="Schedule" Type="Schedule.Schedule">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Specifies when to apply this workload component."/>
          <Annotation Term="OData.LongDescription" String="The value shall specifies when this workload component is applied to the overall workload."/>
        </Property>
      </ComplexType>

      <EnumType Name="IOAccessPattern">
        <Annotation Term="OData.Description" String="Typical IO access patterns."/>
        <Annotation Term="OData.LongDescription" String="The enumeration literals may be used to specify an IO access pattern."/>

        <Member Name="ReadWrite">
          <Annotation Term="OData.Description" String="Uniform distribution of reads and writes."/>
          <Annotation Term="OData.LongDescription" String="Use of this enumeration literal shall indicate a Uniform distribution of reads and writes."/>
        </Member>
        <Member Name="SequentialRead">
          <Annotation Term="OData.Description" String="Sequential read."/>
          <Annotation Term="OData.LongDescription" String="Use of this enumeration literal shall indicate a sequential read pattern of access."/>
        </Member>
        <Member Name="SequentialWrite">
          <Annotation Term="OData.Description" String="Sequential write"/>
          <Annotation Term="OData.LongDescription" String="Use of this enumeration literal shall indicate a sequential write pattern of access."/>
        </Member>
        <Member Name="RandomReadNew">
          <Annotation Term="OData.Description" String="Random Read of uncached data"/>
          <Annotation Term="OData.LongDescription" String="Use of this enumeration literal shall indicate an access pattern of random reads of uncached data."/>
        </Member>
        <Member Name="RandomReadAgain">
          <Annotation Term="OData.Description" String="Random Read of cached data."/>
          <Annotation Term="OData.LongDescription" String="Use of this enumeration literal shall indicate an access pattern of random reads of cached data."/>
        </Member>
      </EnumType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOPerformanceLoSCapabilities.v1_1_0">
      <EntityType Name="IOPerformanceLoSCapabilities" BaseType="IOPerformanceLoSCapabilities.v1_0_0.IOPerformanceLoSCapabilities">
        <Property Name="Actions" Type="IOPerformanceLoSCapabilities.v1_1_0.Actions" Nullable="false">
          <Annotation Term="OData.Description" String="The available actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
        </Property>
      </EntityType>

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The available actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain the available actions for this resource."/>
        <Property Name="Oem" Type="IOPerformanceLoSCapabilities.v1_1_0.OemActions" Nullable="false"/>
      </ComplexType>

      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="The available OEM specific actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional OEM actions for this resource."/>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOPerformanceLoSCapabilities.v1_1_1">
      <Annotation Term="OData.LongDescription" String="Change IOPerformanceLineOfService to EntityType. Move ComplexType to unversioned namespace. Change references to unversioned."/>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_I_OPERFORMANCE_LOS_CAPABILITIES_V1_HPP */
