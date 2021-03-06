#ifndef PSME_REST_METADATA_INTEL_RACK_SCALE_METRIC_REPORT_V1_HPP
#define PSME_REST_METADATA_INTEL_RACK_SCALE_METRIC_REPORT_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string Intel_RackScaleMetricReport_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?><!-- Copyright 2014-2015 Distributed Management Task Force, Inc. (DMTF). All rights reserved.-->
<edmx:Edmx xmlns:edmx="http://docs.oasis-open.org/odata/ns/edmx" Version="4.0">

  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Core.V1.xml">
    <edmx:Include Namespace="Org.OData.Core.V1" Alias="OData"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/RedfishExtensions_v1.xml">
    <edmx:Include Namespace="RedfishExtensions.v1_0_0" Alias="Redfish"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Measures.V1.xml">
    <edmx:Include Namespace="Org.OData.Measures.V1" Alias="Measures"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource"/>
    <edmx:Include Namespace="Resource.v1_0_0"/>
    <edmx:Include Namespace="Resource.v1_1_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Intel_RackScaleMetricReportDefinition_v1.xml">
    <edmx:Include Namespace="Intel_RackScale.MetricReportDefinition.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Intel_RackScaleMetricDefinition_v1.xml">
    <edmx:Include Namespace="Intel_RackScale.MetricDefinition"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Intel_RackScale.MetricReport">

      <EntityType Name="MetricReport" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="A metric report resource that is output from Metric Report Definition. "/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to represent an MetricReport resource which is utilized by Metric Report Definition resource."/>
      </EntityType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Intel_RackScale.MetricReport.v1_0_0">
      <ComplexType Name="MetricValue">
        <Annotation Term="OData.Description" String="A metric Value."/>
        <Annotation Term="OData.LongDescription" String="A metric value in the context of a Metric."/>

        <Property Name="MetricId" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The metric definitions for this metric."/>
          <Annotation Term="OData.LongDescription"
                      String="The value shall be the MetricId of the source metric within the associated MetricDefinition."/>
        </Property>

        <Property Name="MetricValue" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The value identifies this resource."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of the metric represented as a string. Its  data type is specified in including MetricResult.MetricDefinition."/>
        </Property>
        <Property Name="TimeStamp" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The time when the metric is computed."/>
          <Annotation Term="OData.LongDescription"
                      String="The value shall be an ISO 8601 date time for when the metric value was computed. Note that this may be different from the time when this instance is created. If Volatile is true for a given metric value instance, the TimeStamp changes whenever a new measurement snapshot is taken. A management application may establish a time series of metric data by retrieving the instances of metric value and sorting them according to their TimeStamp."/>
        </Property>
        <Property Name="MetricProperty" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The URI for the property from which this metric is derived."/>
          <Annotation Term="OData.LongDescription"
                      String="The value shall be a URI of a property contained in the scope of the MetricScope."/>
          <Annotation Term="OData.IsURL" String="The value shall be an OData conformant URI to a property."/>
        </Property>
        <NavigationProperty Name="MetricDefinition" Type="Intel_RackScale.MetricDefinition.MetricDefinition">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The URI for the metric definition."/>
          <Annotation Term="OData.LongDescription"
                      String="The value shall be a URI to the metric definition of the property."/>
        </NavigationProperty>
      </ComplexType>
      <EntityType Name="MetricReport" BaseType="Intel_RackScale.MetricReport.MetricReport">
        <NavigationProperty Name="MetricReportDefinition" Type="Intel_RackScale.MetricReportDefinition.v1_0_0.MetricReportDefinition"
                            Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The metric definitions for this metric."/>
          <Annotation Term="OData.LongDescription"
                      String="The value shall be reference to the definition for this metric."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <Property Name="MetricValues" Type="Collection(Intel_RackScale.MetricReport.v1_0_0.MetricValue)">
          <Annotation Term="OData.Description"
                      String="An array of metric values for the metered items of this Metric."/>
          <Annotation Term="OData.LongDescription" String="The values shall be metric values for this MetricReport."/>
        </Property>
      </EntityType>
    </Schema>


  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_INTEL_RACK_SCALE_METRIC_REPORT_V1_HPP */
