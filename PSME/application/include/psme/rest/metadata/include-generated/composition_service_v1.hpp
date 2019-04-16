#ifndef PSME_REST_METADATA_COMPOSITION_SERVICE_V1_HPP
#define PSME_REST_METADATA_COMPOSITION_SERVICE_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string CompositionService_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!--################################################################################       -->
<!--# Redfish Schema:  CompositionService   v1.0.1-->
<!--#                                                                                      -->
<!--# For a detailed change log, see the README file contained in the DSP8010 bundle,      -->
<!--# available at http://www.dmtf.org/standards/redfish                                   -->
<!--# Copyright 2014-2017 Distributed Management Task Force, Inc. (DMTF).                  -->
<!--# For the full DMTF copyright policy, see http://www.dmtf.org/about/policies/copyright -->
<!--################################################################################       -->
<!---->
<edmx:Edmx xmlns:edmx="http://docs.oasis-open.org/odata/ns/edmx" Version="4.0">

  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Core.V1.xml">
    <edmx:Include Namespace="Org.OData.Core.V1" Alias="OData"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Capabilities.V1.xml">
    <edmx:Include Namespace="Org.OData.Capabilities.V1" Alias="Capabilities"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/RedfishExtensions_v1.xml">
    <edmx:Include Namespace="RedfishExtensions.v1_0_0" Alias="Redfish"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource"/>
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/ResourceBlockCollection_v1.xml">
    <edmx:Include Namespace="ResourceBlockCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/ZoneCollection_v1.xml">
    <edmx:Include Namespace="ZoneCollection"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="CompositionService">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="CompositionService" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="The CompositionService schema defines a Composition Service which represents the properties for the service and links to the resources available for composition."/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to represent the Composition Service Properties for a Redfish implementation."/>
        <Annotation Term="Capabilities.InsertRestrictions">
          <Record>
            <PropertyValue Property="Insertable" Bool="false"/>
          </Record>
        </Annotation>
        <Annotation Term="Capabilities.UpdateRestrictions">
          <Record>
            <PropertyValue Property="Updatable" Bool="true"/>
            <Annotation Term="OData.Description" String="The Composition Service can be updated to change some properties such as the ServiceEnabled flag."/>
          </Record>
        </Annotation>
        <Annotation Term="Capabilities.DeleteRestrictions">
          <Record>
            <PropertyValue Property="Deletable" Bool="false"/>
          </Record>
        </Annotation>
      </EntityType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="CompositionService.v1_0_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="CompositionService" BaseType="CompositionService.CompositionService">
        <Property Name="Status" Type="Resource.Status" Nullable="false"/>
        <Property Name="ServiceEnabled" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="This indicates whether this service is enabled."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean indicating whether this service is enabled."/>
        </Property>
        <Property Name="Actions" Type="CompositionService.v1_0_0.Actions" Nullable="false">
          <Annotation Term="OData.Description" String="The available actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
        </Property>
        <NavigationProperty Name="ResourceBlocks" Type="ResourceBlockCollection.ResourceBlockCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The resource blocks available on the service."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the link to a collection of type ResourceBlockCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="ResourceZones" Type="ZoneCollection.ZoneCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The resource zones available on the service."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the link to a collection of type ZoneCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </EntityType>

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The available actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain the available actions for this resource."/>
        <Property Name="Oem" Type="CompositionService.v1_0_0.OemActions" Nullable="false"/>
      </ComplexType>

      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="The available OEM specific actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional OEM actions for this resource."/>
      </ComplexType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="CompositionService.v1_0_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to perform editoral updates of descriptions defined in this schema."/>
      <EntityType Name="CompositionService" BaseType="CompositionService.v1_0_0.CompositionService"/>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_COMPOSITION_SERVICE_V1_HPP */
