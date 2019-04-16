#ifndef PSME_REST_METADATA_CLASS_OFSERVICE_V1_HPP
#define PSME_REST_METADATA_CLASS_OFSERVICE_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string ClassOfService_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!-- Copyright 2015-2018 Storage Networking Industry Association (SNIA), USA. All rights reserved.-->
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
  <edmx:Reference Uri="/redfish/v1/metadata/DataProtectionLineOfService_v1.xml">
    <edmx:Include Namespace="DataProtectionLineOfService"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/DataStorageLineOfService_v1.xml">
    <edmx:Include Namespace="DataStorageLineOfService"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/DataSecurityLineOfService_v1.xml">
    <edmx:Include Namespace="DataSecurityLineOfService"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/IOConnectivityLineOfService_v1.xml">
    <edmx:Include Namespace="IOConnectivityLineOfService"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/IOPerformanceLineOfService_v1.xml">
    <edmx:Include Namespace="IOPerformanceLineOfService"/>
  </edmx:Reference>

  <edmx:DataServices>
    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ClassOfService">

      <EntityType Name="ClassOfService" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="A service option composed of one or more other service options."/>
        <Annotation Term="OData.LongDescription" String="A service option composed of one or more other service options.  ITIL defines a service option as a choice of utility or warranty for a service."/>
      </EntityType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ClassOfService.v1_0_0">

      <EntityType Name="ClassOfService" BaseType="ClassOfService.ClassOfService">
        <Annotation Term="OData.Description" String="A service option composed of one or more service options."/>
        <Annotation Term="OData.LongDescription" String="This resource shall define a service option composed of one or more line of service entities.  ITIL defines a service option as a choice of utility or warranty for a service."/>
        <Property Name="Identifier" Type="Resource.Identifier">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The value identifies this resource."/>
          <Annotation Term="OData.LongDescription" String="The value shall be unique within the managed ecosystem."/>
        </Property>
        <Property Name="ClassOfServiceVersion" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The value identifies the current version of this class of service definition."/>
          <Annotation
            Term="OData.LongDescription"
            String="The version describing the creation or last modification of this service option specification. The string representing the version shall be in the form: M + '.' + N + '.' + U  Where: M - The major version (in numeric form). N - The minor version (in numeric form). U - The update (e.g. errata or patch in numeric form)."/>
        </Property>
      </EntityType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ClassOfService.v1_1_0">
      <EntityType Name="ClassOfService" BaseType="ClassOfService.v1_0_0.ClassOfService">
        <Property Name="Actions" Type="ClassOfService.v1_1_0.Actions" Nullable="false">
          <Annotation Term="OData.Description" String="The available actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
        </Property>
      </EntityType>

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The available actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain the available actions for this resource."/>
        <Property Name="Oem" Type="ClassOfService.v1_1_0.OemActions" Nullable="false"/>
      </ComplexType>

      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="The available OEM specific actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional OEM actions for this resource."/>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ClassOfService.v1_1_1">
      <Annotation Term="OData.Description" String="Converting Line of Service collection reference types from complex types to entity types. Change references to unversioned."/>

      <EntityType Name="ClassOfService" BaseType="ClassOfService.v1_0_0.ClassOfService">
        <Annotation Term="OData.Description" String="A service option composed of one or more service options."/>
        <Annotation Term="OData.LongDescription" String="This resource shall define a service option composed of one or more line of service entities.  ITIL defines a service option as a choice of utility or warranty for a service."/>

        <NavigationProperty Name="DataProtectionLinesOfService" Type="Collection(DataProtectionLineOfService.DataProtectionLineOfService)" ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="A collection of DataProtection line of service elements."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a set of data protection service options.  Within a class of service, one data protection service option shall be present for each replication session."/>
        </NavigationProperty>
        <NavigationProperty Name="DataSecurityLinesOfService" Type="Collection(DataSecurityLineOfService.DataSecurityLineOfService)" ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="A collection of DataSecurity line of service elements."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a set of data security service options."/>
        </NavigationProperty>
        <NavigationProperty Name="DataStorageLinesOfService" Type="Collection(DataStorageLineOfService.DataStorageLineOfService)" ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="A collection of DataStorage line of service elements."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a set of data protection service options."/>
        </NavigationProperty>
        <NavigationProperty Name="IOConnectivityLinesOfService" Type="Collection(IOConnectivityLineOfService.IOConnectivityLineOfService)" ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="A collection of IOConnectivity line of service elements."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a set of IO connectivity service options.  Within a class of service, at most one IO connectivity service option may be present for a value of AccessProtocol."/>
        </NavigationProperty>
        <NavigationProperty Name="IOPerformanceLinesOfService" Type="Collection(IOPerformanceLineOfService.IOPerformanceLineOfService)" ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="A collection of IOPerformance line of service elements."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a set of IO performance service options."/>
        </NavigationProperty>
      </EntityType>

    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_CLASS_OFSERVICE_V1_HPP */
