#ifndef PSME_REST_METADATA_INTEL_RACK_SCALE_TELEMETRY_SERVICE_V1_HPP
#define PSME_REST_METADATA_INTEL_RACK_SCALE_TELEMETRY_SERVICE_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string Intel_RackScaleTelemetryService_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!--################################################################################       -->
<!--# Redfish Schema:  TelemetryService  v1.0.0-->
<!--#                                                                                      -->
<!--# For a detailed change log, see the README file contained in the DSP8010 bundle,      -->
<!--# available at http://www.dmtf.org/standards/redfish                                   -->
<!--# Copyright 2016 Distributed Management Task Force, Inc. (DMTF).                  -->
<!--# For the full DMTF copyright policy, see http://www.dmtf.org/about/policies/copyright -->
<!--################################################################################       -->
<!---->
<edmx:Edmx xmlns:edmx="http://docs.oasis-open.org/odata/ns/edmx" Version="4.0">

  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Core.V1.xml">
    <edmx:Include Namespace="Org.OData.Core.V1" Alias="OData"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/RedfishExtensions_v1.xml">
    <edmx:Include Namespace="RedfishExtensions.v1_0_0" Alias="Redfish"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource"/>
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Intel_RackScaleMetricDefinitionCollection_v1.xml">
    <edmx:Include Namespace="Intel_RackScale.MetricDefinitionCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Intel_RackScaleMetricReportDefinitionCollection_v1.xml">
    <edmx:Include Namespace="Intel_RackScale.MetricReportDefinitionCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Intel_RackScaleMetricReportCollection_v1.xml">
    <edmx:Include Namespace="Intel_RackScale.MetricReportCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Intel_RackScaleTriggersCollection_v1.xml">
    <edmx:Include Namespace="Intel_RackScale.TriggersCollection"/>
  </edmx:Reference>


  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Intel_RackScale.TelemetryService">

      <EntityType Name="TelemetryService" BaseType="Resource.v1_0_0.Resource">
        <Annotation Term="OData.Description" String="This is the schema definition for the Metrics Service."/>
        <Annotation Term="OData.LongDescription"
                    String="This resource shall be used to represent a Metrics Service for a Redfish implementation."/>
      </EntityType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Intel_RackScale.TelemetryService.v1_0_0">

      <EntityType Name="TelemetryService" BaseType="Intel_RackScale.TelemetryService.TelemetryService">
        <Annotation Term="OData.Description"
                    String="This is the schema definition for the Metrics Service. It represents the properties for the service itself and has links to collections of metric definitions and metric report definitions."/>
        <Annotation Term="OData.LongDescription"
                    String="This resource shall be used to represent an Metrics Service for a Redfish implementation. It represents the properties that affect the service itself."/>
        <Property Name="Status" Type="Resource.Status"/>
        <Property Name="MaxReports" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="The maximum number of MetricReports that are supported by this service."/>
          <Annotation Term="OData.LongDescription"
                      String="If present, the value shall specify the maximum number of metric collectors that can be supported by this service."/>
        </Property>
        <Property Name="MinCollectionInterval" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The minimum supported interval between collections."/>
          <Annotation Term="OData.LongDescription"
                      String="If present, the value shall be an ISO 8601 duration specifying the minimum time between collections."/>
        </Property>
        <Property Name="SupportedCollectionFunctions" Type="Collection(Intel_RackScale.TelemetryService.v1_0_0.CollectionFunction)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Function to perform over each sample."/>
          <Annotation Term="OData.LongDescription"
                      String="If present, the value shall define the function to apply over the collection duration."/>
        </Property>
        <NavigationProperty Name="MetricDefinitions" Type="Intel_RackScale.MetricDefinitionCollection.MetricDefinitionCollection"
                            ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A collection of Metric definitions that describes metrics properties."/>
          <Annotation Term="OData.LongDescription"
                      String="The entries of shall be resources of type MetricDefinitionCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="MetricReportDefinitions"
                            Type="Intel_RackScale.MetricReportDefinitionCollection.MetricReportDefinitionCollection"
                            ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A collection of MetricReportDefinitions."/>
          <Annotation Term="OData.LongDescription"
                      String="The value shall be a link to a resource of type MetricReportDefinitionCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="MetricReports" Type="Intel_RackScale.MetricReportCollection.MetricReportCollection"
                            ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A collection of MetricReport resources, that relate to MetricReportDefinition."/>
          <Annotation Term="OData.LongDescription"
                      String="The value shall be a link to a resource of type MetricReportCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="Triggers" Type="Intel_RackScale.TriggersCollection.TriggersCollection" ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A collection of triggers, which apply to metrics."/>
          <Annotation Term="OData.LongDescription"
                      String="The value shall be a link to a resource of type TriggersCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <Property Name="Actions" Type="Intel_RackScale.TelemetryService.v1_0_0.Actions" Nullable="false">
          <Annotation Term="OData.Description"
                      String="The Actions object contains the available custom actions on this resource."/>
        </Property>
      </EntityType>

      <!-- Are these needed? -->

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="Oem" Type="Intel_RackScale.TelemetryService.v1_0_0.OemActions" Nullable="false"/>
      </ComplexType>

      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
      </ComplexType>

      <EnumType Name="CollectionFunction">
        <Annotation Term="OData.Description" String="An operation to perform over the sample."/>
        <Annotation Term="OData.LongDescription"
                    String="If present, the metric value shall be computed according to this function."/>
        <Member Name="Avg"/>
        <Member Name="Max"/>
        <Member Name="Min"/>
        <Member Name="Sum"/>
      </EnumType>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_INTEL_RACK_SCALE_TELEMETRY_SERVICE_V1_HPP */
