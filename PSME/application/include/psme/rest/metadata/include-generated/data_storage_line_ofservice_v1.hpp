#ifndef PSME_REST_METADATA_DATA_STORAGE_LINE_OFSERVICE_V1_HPP
#define PSME_REST_METADATA_DATA_STORAGE_LINE_OFSERVICE_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string DataStorageLineOfService_v1_XML =
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
  <edmx:Reference Uri="/redfish/v1/metadata/DataProtectionLoSCapabilities_v1.xml">
    <edmx:Include Namespace="DataProtectionLoSCapabilities"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/DataStorageLoSCapabilities_v1.xml">
    <edmx:Include Namespace="DataStorageLoSCapabilities"/>
  </edmx:Reference>
  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="DataStorageLineOfService">

      <EntityType Name="DataStorageLineOfService" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="Describe data storage capabilities"/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to describe storage availability and provisioning capabilities."/>
      </EntityType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="DataStorageLineOfService.v1_0_0">

      <EntityType Name="DataStorageLineOfService" BaseType="DataStorageLineOfService.DataStorageLineOfService">
        <Annotation Term="OData.Description" String="Describe data storage capabilities."/>
        <Annotation Term="OData.LongDescription" String="This structure may be used to describe a service option covering storage provisioning and availability."/>
        <Property Name="RecoveryTimeObjectives" Type="DataProtectionLoSCapabilities.RecoveryAccessScope">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Expectations for time to access the primary store after disaster recover."/>
          <Annotation
            Term="OData.LongDescription"
            String="The enumeration literal specifies the time after a disaster that the client shall regain conformant service level access to the primary store, typical values are 'immediate' or 'offline'. The expectation is that the services required to implement this capability are part of the advertising system."/>
        </Property>
        <Property Name="ProvisioningPolicy" Type="DataStorageLoSCapabilities.ProvisioningPolicy">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Provisioning policy for storage."/>
          <Annotation Term="OData.LongDescription" String="The enumeration literal shall define the provisioning policy for storage."/>
        </Property>
        <Property Name="IsSpaceEfficient" Type="Edm.Boolean" DefaultValue="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="True implies compression or deduplication of storage."/>
          <Annotation Term="OData.LongDescription" String="A value of true shall indicate that the storage is compressed or deduplicated. The default value for this property is false."/>
        </Property>
	  </EntityType>
	</Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="DataStorageLineOfService.v1_1_0">
      <Annotation Term="OData.Description" String="Add AccessCapabilities to DataStorageLineOfService. Change references to unversioned."/>

      <EntityType Name="DataStorageLineOfService" BaseType="DataStorageLineOfService.v1_0_0.DataStorageLineOfService">
        <Annotation Term="OData.Description" String="Describe data storage capabilities."/>
        <Annotation Term="OData.LongDescription" String="This structure may be used to describe a service option covering storage provisioning and availability."/>
        <Property Name="AccessCapabilities" Type="Collection(DataStorageLoSCapabilities.StorageAccessCapability)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Required access capabilities."/>
          <Annotation Term="OData.LongDescription" String="Each entry specifies a required storage access capability."/>
        </Property>
      </EntityType>
	</Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_DATA_STORAGE_LINE_OFSERVICE_V1_HPP */
