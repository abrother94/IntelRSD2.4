#ifndef PSME_REST_METADATA_STORAGE_GROUP_V1_HPP
#define PSME_REST_METADATA_STORAGE_GROUP_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string StorageGroup_v1_XML =
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
	<edmx:Reference Uri="/redfish/v1/metadata/Volume_v1.xml">
		<edmx:Include Namespace="Volume"/>
	</edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/ClassOfService_v1.xml">
		<edmx:Include Namespace="ClassOfService"/>
	</edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/StorageReplicaInfo_v1.xml">
		<edmx:Include Namespace="StorageReplicaInfo"/>
	</edmx:Reference>
	<edmx:Reference Uri="/redfish/v1/metadata/EndpointGroup_v1.xml">
		<edmx:Include Namespace="EndpointGroup"/>
	</edmx:Reference>
	<edmx:DataServices>
		<Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="StorageGroup">

			<EntityType Name="StorageGroup" BaseType="Resource.v1_0_0.Resource" Abstract="true">
				<Annotation Term="OData.Description" String="Collection of resources that are managed and exposed to hosts as a group."/>
				<Annotation
					Term="OData.LongDescription"
					String="Collection of resources that the system can make available to one or more host systems. The collection can contain: block, file, or object storage; local system access points through which the collection is made available; hosts, or host access points to which the collection is made available."/>
			</EntityType>
			<Action Name="ExposeVolumes" IsBound="true">
				<Annotation Term="Redfish.Deprecated" String="The Expose and Hide Volume actions are redundant with REST PATCH/PUT operations."/>
				<Annotation Term="OData.Description" String="Expose the storage volumes of this group."/>
				<Annotation
					Term="OData.LongDescription"
					String="Exposes the storage of this group via the target endpoints named in the ServerEndpointGroups to the initiator endpoints named in the ClientEndpointGroups.  The property VolumesAreExposed shall be set to true when this action is completed."/>
				<Parameter Name="StorageGroup" Type="StorageGroup.v1_0_0.Actions"/>
			</Action>
			<Action Name="HideVolumes" IsBound="true">
				<Annotation Term="Redfish.Deprecated" String="The Expose and Hide Volume actions are redundant with REST PATCH/PUT operations."/>
				<Annotation Term="OData.Description" String="Hide the storage volumes of this group."/>
				<Annotation Term="OData.LongDescription" String="Hide the storage of this group from the initiator endpoints named in the ClientEndpointGroups. The property VolumesAreExposed shall be set to false when this action is completed."/>
				<Parameter Name="StorageGroup" Type="StorageGroup.v1_0_0.Actions"/>
			</Action>
		</Schema>

		<Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="StorageGroup.v1_0_0">
			<EntityType Name="StorageGroup" BaseType="StorageGroup.StorageGroup">
				<Annotation Term="OData.Description" String="Collection of resources that are managed and exposed to hosts as a group."/>
				<Annotation Term="OData.LongDescription" String="A storage group collects a set of related storage entities (volumes, file systems...) The collection should be useful for managing the storage of a set of related client applications."/>
				<Property Name="Identifier" Type="Resource.Identifier">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
					<Annotation Term="OData.Description" String="The value identifies this resource."/>
					<Annotation Term="OData.LongDescription" String="The value shall be unique within the managed ecosystem."/>
				</Property>
				<Property Name="AccessState" Type="EndpointGroup.AccessState">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
					<Annotation Term="OData.Description" String="AccessState for this storage group."/>
					<Annotation Term="OData.LongDescription" String="The value of this property shall describe the access characteristics of this storage group. All associated logical units through all aggregated ports shall share this access state."/>
				</Property>
				<Property Name="MembersAreConsistent" Type="Edm.Boolean" DefaultValue="false">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
					<Annotation Term="OData.Description" String="Members are kept in a consistent state."/>
					<Annotation Term="OData.LongDescription" String="The value of this property shall be set to true if all members are in a consistent state. The default value for this property is false."/>
				</Property>
				<Property Name="VolumesAreExposed" Type="Edm.Boolean" DefaultValue="false">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
					<Annotation Term="OData.Description" String="Storage volumes are exposed to paths defined by the client and server endpoints."/>
					<Annotation Term="OData.LongDescription" String="The value of this property shall be set to true if storage volumes are exposed to the paths defined by the client and server endpoints.  The default value for this property is false."/>
				</Property>
				<Property Name="Status" Type="Resource.Status"/>
				<Property Name="Links" Type="StorageGroup.v1_0_0.Links" Nullable="false">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
					<Annotation Term="OData.Description" String="Contains links to other resources that are related to this resource."/>
					<Annotation Term="OData.LongDescription" String="This structure shall contain references to resources that are not contained within this resource."/>
				</Property>
				<Property Name="ReplicaInfos" Type="Collection(StorageReplicaInfo.ReplicaInfo)">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
					<Annotation Term="OData.Description" String="Describes this storage group in its role as a source and/or target for replication."/>
					<Annotation Term="OData.LongDescription" String="This property shall describe the replication relationship between this storage group and a corresponding source and/or target storage group."/>
				</Property>
				<NavigationProperty Name="ClientEndpointGroups" Type="Collection(EndpointGroup.EndpointGroup)" ContainsTarget="true">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
					<Annotation Term="OData.Description" String="Groups of client endpoints in this storage group."/>
					<Annotation
						Term="OData.LongDescription"
						String="An array of references to groups of client-side endpoints that may be used to make requests to the storage exposed by this StorageGroup. If null, the implementation may allow access to the storage via any client-side endpoint.  If empty, the implementation shall not allow access to the storage via any client-side endpoint."/>
					<Annotation Term="OData.AutoExpandReferences"/>
				</NavigationProperty>
				<NavigationProperty Name="ServerEndpointGroups" Type="Collection(EndpointGroup.EndpointGroup)" ContainsTarget="true">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
					<Annotation Term="OData.Description" String="Groups of server endpoints in this storage group."/>
					<Annotation
						Term="OData.LongDescription"
						String="An array of references to groups of server-side endpoints that may be used to make requests to the storage exposed by this storage group.  If null, the implementation may allow access to the storage via any server-side endpoint.  If empty, the implementation shall not allow access to the storage via any server-side endpoint."/>
					<Annotation Term="OData.AutoExpandReferences"/>
				</NavigationProperty>
				<NavigationProperty Name="Volumes" Type="Collection(Volume.Volume)">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
					<Annotation Term="OData.Description" String="Volumes in this storage group."/>
					<Annotation Term="OData.LongDescription" String="An array of references to volumes managed by this storage group."/>
					<Annotation Term="OData.AutoExpandReferences"/>
				</NavigationProperty>
				<Property Name="Actions" Type="StorageGroup.v1_0_0.Actions" Nullable="false">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
					<Annotation Term="OData.Description" String="The available actions for this resource."/>
					<Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
				</Property>
			</EntityType>
			<ComplexType Name="Links" BaseType="Resource.Links">
				<NavigationProperty Name="ParentStorageGroups" Type="Collection(StorageGroup.v1_0_0.StorageGroup)">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
					<Annotation Term="OData.Description" String="Parent StorageGroups."/>
					<Annotation Term="OData.LongDescription" String="An array of references to StorageGroups that incorporate this StorageGroup"/>
					<Annotation Term="OData.AutoExpandReferences"/>
				</NavigationProperty>
				<NavigationProperty Name="ChildStorageGroups" Type="Collection(StorageGroup.v1_0_0.StorageGroup)">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
					<Annotation Term="OData.Description" String="Child StorageGroups."/>
					<Annotation Term="OData.LongDescription" String="An array of references to StorageGroups are incorporated into this StorageGroup"/>
					<Annotation Term="OData.AutoExpandReferences"/>
				</NavigationProperty>
				<NavigationProperty Name="ClassOfService" Type="ClassOfService.ClassOfService">
					<Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
					<Annotation Term="OData.Description" String="The ClassOfService that all storage in this StorageGroup conforms to."/>
					<Annotation Term="OData.LongDescription" String="The ClassOfService that all storage in this StorageGroup conforms to."/>
					<Annotation Term="OData.AutoExpandReferences"/>
				</NavigationProperty>
			</ComplexType>
			<ComplexType Name="Actions">
				<Annotation Term="OData.AdditionalProperties" Bool="false"/>
				<Property Name="Oem" Type="StorageGroup.v1_0_0.OemActions" Nullable="false"/>
			</ComplexType>
			<ComplexType Name="OemActions">
				<Annotation Term="OData.AdditionalProperties" Bool="true"/>
			</ComplexType>
		</Schema>
		<Schema Namespace="StorageGroup.v1_0_1" xmlns="http://docs.oasis-open.org/odata/ns/edm">
			<Annotation Term="OData.Description" String="The Expose and Hide Volume actions are redundant with REST PATCH/PUT operations.  Also, the extra level of a EndpointGroupCollection is not needed. Change references to unversioned."/>
		</Schema>

	</edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_STORAGE_GROUP_V1_HPP */
