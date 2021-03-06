#ifndef PSME_REST_METADATA_STORAGE_SERVICE_V1_HPP
#define PSME_REST_METADATA_STORAGE_SERVICE_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string StorageService_v1_XML =
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
    <edmx:Include Namespace="Validation.v1_0_0" Alias="Validation"/>
  </edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
		<edmx:Include Namespace="Resource"/>
		<edmx:Include Namespace="Resource.v1_0_0" />
	</edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/ComputerSystem_v1.xml">
		<edmx:Include Namespace="ComputerSystem"/>
	</edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Chassis_v1.xml">
    <edmx:Include Namespace="Chassis"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Redundancy_v1.xml">
    <edmx:Include Namespace="Redundancy"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/StorageCollection_v1.xml">
    <edmx:Include Namespace="StorageCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/DriveCollection_v1.xml">
    <edmx:Include Namespace="DriveCollection"/>
  </edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/StorageGroupCollection_v1.xml">
		<edmx:Include Namespace="StorageGroupCollection"/>
	</edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/VolumeCollection_v1.xml">
		<edmx:Include Namespace="VolumeCollection"/>
	</edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/FileSystemCollection_v1.xml">
		<edmx:Include Namespace="FileSystemCollection"/>
	</edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/EndpointCollection_v1.xml">
		<edmx:Include Namespace="EndpointCollection"/>
	</edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/DataProtectionLoSCapabilities_v1.xml">
    <edmx:Include Namespace="DataProtectionLoSCapabilities" />
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/DataStorageLoSCapabilities_v1.xml">
    <edmx:Include Namespace="DataStorageLoSCapabilities" />
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/DataSecurityLoSCapabilities_v1.xml">
    <edmx:Include Namespace="DataSecurityLoSCapabilities" />
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/IOConnectivityLoSCapabilities_v1.xml">
    <edmx:Include Namespace="IOConnectivityLoSCapabilities" />
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/IOPerformanceLoSCapabilities_v1.xml">
    <edmx:Include Namespace="IOPerformanceLoSCapabilities" />
  </edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/StoragePoolCollection_v1.xml">
		<edmx:Include Namespace="StoragePoolCollection"/>
	</edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/ClassOfService_v1.xml">
		<edmx:Include Namespace="ClassOfService"/>
	</edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/ClassOfServiceCollection_v1.xml">
		<edmx:Include Namespace="ClassOfServiceCollection"/>
	</edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/EndpointGroupCollection_v1.xml">
		<edmx:Include Namespace="EndpointGroupCollection"/>
	</edmx:Reference>

  <edmx:DataServices>
    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="StorageService">

      <EntityType Name="StorageService" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="A storage service."/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to represent resources that are managed by a storage service."/>
      </EntityType>

      <Action Name="SetEncryptionKey" IsBound="true">
        <Parameter Name="Storage" Type="StorageService.v1_0_0.Actions"/>
        <Parameter Name="EncryptionKey" Type="Edm.String">
          <Annotation Term="OData.Description" String="The encryption key to set on the storage subsytem"/>
          <Annotation Term="OData.LongDescription" String="This defines the property name for the action."/>
        </Parameter>
        <Annotation Term="OData.Description" String="This action is used to set the encryption key for the storage subsystem."/>
        <Annotation Term="OData.LongDescription" String="This defines the name of the custom action supported on this resource."/>
      </Action>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="StorageService.v1_0_0">

		<EntityType Name="StorageService" BaseType="StorageService.StorageService">
            <Annotation Term="OData.Description" String="Collection of resources that are managed and exposed to hosts as a group."/>
            <Annotation Term="OData.LongDescription" String="Collection of resources that the system can make available to one or more host systems.  The collection can contain: block, file, or object storage; local system access points through which the collection is made available; hosts, or host access points to which the collection is made available."/>
            <Property Name="Identifier" Type="Resource.Identifier">
             <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite" />
              <Annotation Term="OData.Description" String="The value identifies this resource." />
              <Annotation Term="OData.LongDescription" String="The value identifies this resource.  The value shall be unique within the managed ecosystem." />
            </Property>
            <Property Name="Status" Type="Resource.Status"/>
            <Property Name="Links" Type="StorageService.v1_0_0.Links" Nullable="false">
                <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
                <Annotation Term="OData.Description" String="Contains links to other resources that are related to this resource."/>
            </Property>
            <NavigationProperty Name="StorageGroups" Type="StorageGroupCollection.StorageGroupCollection" ContainsTarget="true">
                <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
                <Annotation Term="OData.Description" String="StorageGroups."/>
                <Annotation Term="OData.LongDescription" String="The value of each enty in the array shall reference a StorageGroup."/>
                <Annotation Term="OData.AutoExpandReferences"/>
            </NavigationProperty>
            <NavigationProperty Name="EndpointGroups" Type="EndpointGroupCollection.EndpointGroupCollection" ContainsTarget="true">
                <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
                <Annotation Term="OData.Description" String="Client and Server endpoint groups."/>
                <Annotation Term="OData.LongDescription" String="The value of each entry in the array shall reference an EndpointGroup."/>
                <Annotation Term="OData.AutoExpandReferences"/>
            </NavigationProperty>
            <NavigationProperty ContainsTarget="true" Name="ClientEndpointGroups" Type="EndpointGroupCollection.EndpointGroupCollection">
                <Annotation EnumMember="OData.Permission/ReadWrite" Term="OData.Permissions" />
                <Annotation String="Client endpoint groups." Term="OData.Description" />
                <Annotation String="The value of each entry in the array shall reference an EndpointGroup." Term="OData.LongDescription" />
                <Annotation Term="OData.AutoExpandReferences" />
            </NavigationProperty>
            <NavigationProperty ContainsTarget="true" Name="ServerEndpointGroups" Type="EndpointGroupCollection.EndpointGroupCollection">
                <Annotation EnumMember="OData.Permission/ReadWrite" Term="OData.Permissions" />
                <Annotation String="Server endpoint groups." Term="OData.Description" />
                <Annotation String="The value of each entry in the array shall reference a EndpointGroup." Term="OData.LongDescription" />
                <Annotation Term="OData.AutoExpandReferences" />
            </NavigationProperty>
            <NavigationProperty Name="Volumes" Type="VolumeCollection.VolumeCollection" Nullable="false" ContainsTarget="true">
                <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
                <Annotation Term="OData.Description" String="Volumes."/>
                <Annotation Term="OData.LongDescription" String="An array of references to Volumes managed by this storage service."/>
                <Annotation Term="OData.AutoExpandReferences"/>
            </NavigationProperty>
            <NavigationProperty Name="FileSystems" Type="FileSystemCollection.FileSystemCollection" Nullable="false" ContainsTarget="true">
                <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
                <Annotation Term="OData.Description" String="FileSystems."/>
                <Annotation Term="OData.LongDescription" String="An array of references to FileSystems managed by this storage service."/>
                <Annotation Term="OData.AutoExpandReferences"/>
            </NavigationProperty>
            <NavigationProperty Name="StoragePools" Type="StoragePoolCollection.StoragePoolCollection" Nullable="false" ContainsTarget="true">
                <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
                <Annotation Term="OData.Description" String="StoragePools."/>
                <Annotation Term="OData.LongDescription" String="An array of references to StoragePools."/>
                <Annotation Term="OData.AutoExpandReferences"/>
            </NavigationProperty>
            <NavigationProperty Name="Drives" Type="DriveCollection.DriveCollection" Nullable="false"  ContainsTarget="true">
              <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
              <Annotation Term="OData.Description" String="The set of drives managed by this storage service."/>
              <Annotation Term="OData.LongDescription" String="A collection that indicates all the drives managed by this storage service."/>
              <Annotation Term="OData.AutoExpandReferences"/>
            </NavigationProperty>
            <NavigationProperty Name="Endpoints" Type="EndpointCollection.EndpointCollection" ContainsTarget="true">
                <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
                <Annotation Term="OData.Description" String="Endpoints."/>
                <Annotation Term="OData.LongDescription" String="The value of each enty in the array shall reference an Endpoint managed by this service."/>
                <Annotation Term="OData.AutoExpandReferences"/>
            </NavigationProperty>
            <Property Name="Actions" Type="StorageService.v1_0_0.Actions" Nullable="false">
              <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
              <Annotation Term="OData.Description" String="The available actions for this resource."/>
              <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
            </Property>
            <NavigationProperty Name="Redundancy" Type="Collection(Redundancy.Redundancy)">
              <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
              <Annotation Term="OData.Description" String="Redundancy information for the storage subsystem"/>
              <Annotation Term="OData.AutoExpand"/>
            </NavigationProperty>
			<NavigationProperty Name="ClassesOfService" Type="ClassOfServiceCollection.ClassOfServiceCollection" ContainsTarget="true">
				<Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
				<Annotation Term="OData.Description" String="The ClassesOfService that all storage in this StorageService can support."/>
				<Annotation Term="OData.LongDescription" String="The value of each enty in the array shall reference a ClassOfService supported by this service."/>
				<Annotation Term="OData.AutoExpandReferences"/>
			</NavigationProperty>
		</EntityType>

		  <ComplexType Name="Links" BaseType="Resource.Links">
			<NavigationProperty Name="HostingSystem" Type="Resource.Resource">
			  <Annotation Term="OData.Description" String="The hosting system or storage controller hosting this storage service."/>
			  <Annotation Term="OData.LongDescription" String="The value shall reference the ComputerSystem or StorageController that hosts this service."/>
			</NavigationProperty>
			<NavigationProperty Name="DefaultClassOfService" Type="ClassOfService.ClassOfService">
			  <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite" />
			  <Annotation Term="OData.Description" String="The default class of service for entities allocated by this storage service." />
			  <Annotation Term="OData.LongDescription"
			  String="If present, this property shall reference the default class of service for entities allocated by this storage service. This default may be overridden by the DefaultClassOfService property values within contained StoragePools."/>
			  <Annotation Term="OData.AutoExpandReferences" />
			</NavigationProperty>
		   <NavigationProperty Name="DataProtectionLoSCapabilities" Type="DataProtectionLoSCapabilities.DataProtectionLoSCapabilities">
			  <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite" />
			  <Annotation Term="OData.Description" String="The data protection capabilities of this service." />
			  <Annotation Term="OData.LongDescription" String="The value shall reference the data protection capabilities of this service." />
			</NavigationProperty>
			<NavigationProperty Name="DataSecurityLoSCapabilities" Type="DataSecurityLoSCapabilities.DataSecurityLoSCapabilities">
			  <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite" />
			  <Annotation Term="OData.Description" String="The data security capabilities of this service." />
			  <Annotation Term="OData.LongDescription" String="The value shall reference the data security capabilities of this service." />
			</NavigationProperty>
			<NavigationProperty Name="DataStorageLoSCapabilities" Type="DataStorageLoSCapabilities.DataStorageLoSCapabilities">
			  <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite" />
			  <Annotation Term="OData.Description" String="The data storage capabilities of this service."/>
			  <Annotation Term="OData.LongDescription" String="The value shall reference the data storage capabilities of this service." />
			</NavigationProperty>
			<NavigationProperty Name="IOConnectivityLoSCapabilities" Type="IOConnectivityLoSCapabilities.IOConnectivityLoSCapabilities">
			  <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite" />
			  <Annotation Term="OData.Description" String="The IO connectivity capabilities of this service." />
			  <Annotation Term="OData.LongDescription" String="The value shall reference the IO connectivity capabilities of this service." />
			</NavigationProperty>
			<NavigationProperty Name="IOPerformanceLoSCapabilities" Type="IOPerformanceLoSCapabilities.IOPerformanceLoSCapabilities">
			  <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite" />
			  <Annotation Term="OData.Description" String="The IO performance capabilities of this service." />
			  <Annotation Term="OData.LongDescription" String="The value shall reference the IO performance capabilities of this service." />
			</NavigationProperty>
		  </ComplexType>

		  <ComplexType Name="Actions">
			<Annotation Term="OData.AdditionalProperties" Bool="false"/>
			<Property Name="Oem" Type="StorageService.v1_0_0.OemActions" Nullable="false"/>
		  </ComplexType>

		  <ComplexType Name="OemActions">
			<Annotation Term="OData.AdditionalProperties" Bool="true"/>
		  </ComplexType>

		</Schema>

        <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="StorageService.v1_0_1">

          <EntityType Name="StorageService" BaseType="StorageService.v1_0_0.StorageService">
			<NavigationProperty Name="StorageSubsystems" Type="StorageCollection.StorageCollection" ContainsTarget="true" Nullable="false">
			  <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
			  <Annotation Term="OData.Description" String="A reference to storage subsystems managed by this storage service."/>
			  <Annotation Term="OData.LongDescription" String="The value shall be a link to a collection of type StorageCollection having members that represent storage subsystems managed by this storage service."/>
			  <Annotation Term="OData.AutoExpandReferences"/>
			</NavigationProperty>
	      </EntityType>
	    </Schema>

		<Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="StorageService.v1_0_2">
			<EntityType Name="StorageService" BaseType="StorageService.v1_0_1.StorageService">
				<Annotation Term="OData.Description" String="Combined Client/ServerEndpointGroups into single EndpointGroups property.  The GroupType property of EndpointGroup already distinguishes between use for Server or Client. Change references to unversioned."/>
			</EntityType>
		</Schema>

		<Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="StorageService.v1_1_0">
			<EntityType Name="StorageService" BaseType="StorageService.v1_0_2.StorageService">
				<Annotation Term="OData.Description" String="Modified the type of HostingSystem to Resource.Resource. Also modfied the description and the long description to include either the storage system or StorageController source."/>
			</EntityType>
		</Schema>

	</edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_STORAGE_SERVICE_V1_HPP */
