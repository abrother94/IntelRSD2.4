#ifndef PSME_REST_METADATA_DATA_STORAGE_LOS_CAPABILITIES_V1_HPP
#define PSME_REST_METADATA_DATA_STORAGE_LOS_CAPABILITIES_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string DataStorageLoSCapabilities_v1_XML =
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
  <edmx:Reference Uri="/redfish/v1/metadata/DataStorageLineOfService_v1.xml">
    <edmx:Include Namespace="DataStorageLineOfService"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="DataStorageLoSCapabilities">
      <EntityType Name="DataStorageLoSCapabilities" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="Describe data storage capabilities"/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to describe storage availability and provisioning capabilities."/>
      </EntityType>

      <EnumType Name="ProvisioningPolicy">
        <Annotation Term="OData.Description" String="Space provisioning policy."/>
        <Annotation Term="OData.LongDescription" String="The enumeration literals may be used to specify space provisioning policy."/>
        <Member Name="Fixed">
          <Annotation Term="OData.Description" String="Storage is fully allocated"/>
          <Annotation Term="OData.LongDescription" String="This enumeration literal specifies storage shall be fully allocated."/>
        </Member>
        <Member Name="Thin">
          <Annotation Term="OData.Description" String="Storage may be over allocated."/>
          <Annotation Term="OData.LongDescription" String="This enumeration literal specifies storage may be over allocated."/>
        </Member>
      </EnumType>

      <EnumType Name="StorageAccessCapability">
        <Annotation Term="OData.Description" String="Values of StorageAccessCapability describe abilities to read or write storage."/>
        <Annotation Term="OData.LongDescription" String="StorageAccessCapability enumeration literals may be used to describe abilities to read or write storage."/>
        <Member Name="Read">
          <Annotation Term="OData.Description" String="Read."/>
          <Annotation Term="OData.LongDescription" String="This enumeration literal shall indicate that the storage may be read."/>
        </Member>
        <Member Name="Write">
          <Annotation Term="OData.Description" String="Write Many."/>
          <Annotation Term="OData.LongDescription" String="This enumeration literal shall indicate that the storage may be written multiple times."/>
        </Member>
        <Member Name="WriteOnce">
          <Annotation Term="OData.Description" String="WriteOnce."/>
          <Annotation Term="OData.LongDescription" String="This enumeration literal shall indicate that the storage may be written only once."/>
        </Member>
        <Member Name="Append">
          <Annotation Term="OData.Description" String="AppendOnly."/>
          <Annotation Term="OData.LongDescription" String="This enumeration literal shall indicate that the storage may be written only to append."/>
        </Member>
        <Member Name="Streaming">
          <Annotation Term="OData.Description" String="Streaming."/>
          <Annotation Term="OData.LongDescription" String="This enumeration literal shall indicate that the storage may be read sequentially."/>
        </Member>
        <Member Name="Execute">
          <Annotation Term="OData.Description" String="Execute access is allowed by the file share."/>
          <Annotation Term="OData.LongDescription" String="This value shall indicate that Execute access is allowed by the file share."/>
        </Member>
      </EnumType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="DataStorageLoSCapabilities.v1_0_0">
      <EntityType Name="DataStorageLoSCapabilities" BaseType="DataStorageLoSCapabilities.DataStorageLoSCapabilities">
        <Annotation Term="OData.Description" String="Describe data storage capabilities."/>
        <Annotation Term="OData.LongDescription" String="Each instance of DataStorageLoSCapabilities describes capabilities of the system to support various data storage service options."/>
        <Property Name="Identifier" Type="Resource.Identifier">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The value identifies this resource."/>
          <Annotation Term="OData.LongDescription" String="The value shall be unique within the managed ecosystem."/>
        </Property>
        <Property Name="SupportedAccessCapabilities" Type="Collection(DataStorageLoSCapabilities.StorageAccessCapability)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Supported access capabilities."/>
          <Annotation Term="OData.LongDescription" String="Each entry specifies a storage access capability."/>
        </Property>
        <Property Name="SupportedRecoveryTimeObjectives" Type="Collection(DataProtectionLoSCapabilities.RecoveryAccessScope)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Supported expectations for time to access the primary store after recovery."/>
          <Annotation Term="OData.LongDescription" String="This collection specifies supported expectations for time to access the primary store after recovery."/>
        </Property>
        <Property Name="SupportedProvisioningPolicies" Type="Collection(DataStorageLoSCapabilities.ProvisioningPolicy)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Thin allows over allocation of storage."/>
          <Annotation Term="OData.LongDescription" String="This collection specifies supported storage allocation policies."/>
        </Property>
        <Property Name="SupportsSpaceEfficiency" Type="Edm.Boolean" DefaultValue="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Allows compression or deduplication of storage."/>
          <Annotation Term="OData.LongDescription" String="The value specifies whether storage compression or deduplication is supported. The default value for this property is false."/>
        </Property>
        <NavigationProperty Name="SupportedLinesOfService" Type="Collection(DataStorageLineOfService.DataStorageLineOfService)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Collection of known and supported DataStorageLinesOfService."/>
          <Annotation Term="OData.LongDescription" String="The collection shall contain known and supported DataStorageLinesOfService."/>
          <Annotation Term="OData.AutoExpand"/>
        </NavigationProperty>
      </EntityType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="DataStorageLoSCapabilities.v1_1_0">
      <EntityType Name="DataStorageLoSCapabilities" BaseType="DataStorageLoSCapabilities.v1_0_0.DataStorageLoSCapabilities">
        <Property Name="Actions" Type="DataStorageLoSCapabilities.v1_1_0.Actions" Nullable="false">
          <Annotation Term="OData.Description" String="The available actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
        </Property>
      </EntityType>

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The available actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain the available actions for this resource."/>
        <Property Name="Oem" Type="DataStorageLoSCapabilities.v1_1_0.OemActions" Nullable="false"/>
      </ComplexType>

      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="The available OEM specific actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional OEM actions for this resource."/>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="DataStorageLoSCapabilities.v1_1_1">
      <Annotation Term="OData.Description" String="Change DataStorageLineOfService to EntityType.  Change references to unversioned. "/>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_DATA_STORAGE_LOS_CAPABILITIES_V1_HPP */