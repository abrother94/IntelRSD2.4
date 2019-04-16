#ifndef PSME_REST_METADATA_DATA_PROTECTION_LOS_CAPABILITIES_V1_HPP
#define PSME_REST_METADATA_DATA_PROTECTION_LOS_CAPABILITIES_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string DataProtectionLoSCapabilities_v1_XML =
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
  <edmx:Reference Uri="/redfish/v1/metadata/ClassOfService_v1.xml">
    <edmx:Include Namespace="ClassOfService"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/StorageReplicaInfo_v1.xml">
    <edmx:Include Namespace="StorageReplicaInfo"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/DataProtectionLineOfService_v1.xml">
    <edmx:Include Namespace="DataProtectionLineOfService"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="DataProtectionLoSCapabilities">
      <EntityType Name="DataProtectionLoSCapabilities" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="Describe data protection capabilities"/>
        <Annotation Term="OData.LongDescription" String="The capabilities to protect data from loss by the use of a replica. The requirements must be met collectively by the communication path and the replica. There will be one instance associated to a class of service for each replica. Each replica has its own class of service that describes its characteristics."/>
      </EntityType>

      <EnumType Name="RecoveryAccessScope">
        <Annotation Term="OData.Description" String="An enumeration that represents the relative time required to make a replica available as a source."/>
        <Annotation Term="OData.LongDescription" String="The enumeration literals shall represent the relative time required to make a replica available as a source. "/>
        <Member Name="OnlineActive">
          <Annotation Term="OData.Description" String="Active access to synchronous replicas."/>
          <Annotation Term="OData.LongDescription" String="Access to synchronous replicas shall be instantaneous."/>
        </Member>
        <Member Name="OnlinePassive">
          <Annotation Term="OData.Description" String="Passive access to replicas via the same front-end interconnect."/>
          <Annotation Term="OData.LongDescription" String="Access to a synchronous replica shall be consistent with switching access to a different path the same front-end interconnect.  A restore step shall not be required."/>
        </Member>
        <Member Name="Nearline">
          <Annotation Term="OData.Description" String="Access to replica via a different front-end interconnect. A restore step is required before recovery can commence."/>
          <Annotation
            Term="OData.LongDescription"
            String="Access to a replica shall be consistent with switching access to a different path through a different front-end interconnection infrastructure.  Some inconsistency may occur.  A restore step may be required before recovery can commence."/>
        </Member>
        <Member Name="Offline">
          <Annotation Term="OData.Description" String="No direct connection to the replica. (i.e. To a bunker containing backup media.)"/>
          <Annotation Term="OData.LongDescription" String="Access to a replica may take a significant amount of time.  No direct connection to the replica is assumed. Some inconsistency loss may occur.  A restore step is likely to be required."/>
        </Member>
      </EnumType>

      <EnumType Name="FailureDomainScope">
        <Annotation Term="OData.Description" String="Values of this enumeration represent a geographic scope of a failure domain."/>
        <Annotation Term="OData.LongDescription" String="The enumeration literals of this enumeration shall represent a geographic scope in which all components within that scope have similar vulnerabilities."/>
        <Member Name="Server">
          <Annotation Term="OData.Description" String="A CPU/memory complex."/>
          <Annotation Term="OData.LongDescription" String="Components of a CPU/memory complex that share the same infrastructure."/>
        </Member>
        <Member Name="Rack">
          <Annotation Term="OData.Description" String="A container for Servers, Networking, and Storage."/>
          <Annotation Term="OData.LongDescription" String="A container within a datacenter that provides communication, power, or cooling to a set of components."/>
        </Member>
        <Member Name="RackGroup">
          <Annotation Term="OData.Description" String="A set of Racks that share common infrastructure."/>
          <Annotation Term="OData.LongDescription" String="A set of racks that may share common communication, power, or cooling."/>
        </Member>
        <Member Name="Row">
          <Annotation Term="OData.Description" String="An adjacent set of racks."/>
          <Annotation Term="OData.LongDescription" String="A set of adjacent racks or rackgroups that may share common communication, power, or cooling."/>
        </Member>
        <Member Name="Datacenter">
          <Annotation Term="OData.Description" String="A co-located set of servers, including network and storage that share communication, power, or cooling infrastructure."/>
          <Annotation Term="OData.LongDescription" String="A facility that provides communication, power, or cooling infrastructure to a co-located set of servers, networking and storage."/>
        </Member>
        <Member Name="Region">
          <Annotation Term="OData.Description" String="A geographical or politically isolated set of resources."/>
          <Annotation Term="OData.LongDescription" String="A set of resources that are required to be either geographically or politically isolated from resources not in the resources."/>
        </Member>
      </EnumType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="DataProtectionLoSCapabilities.v1_0_0">
      <EntityType Name="DataProtectionLoSCapabilities" BaseType="DataProtectionLoSCapabilities.DataProtectionLoSCapabilities">
        <Annotation Term="OData.Description" String="Describe data protection capabilities"/>
        <Annotation
          Term="OData.LongDescription"
          String="The capabilities to protect data from loss by the use of a replica. The requirements shall be met collectively by the communication path and the replica. There should be one instance associated to a class of service for each replica. Each replica independently should have a class of service that describes its characteristics."/>
        <Property Name="Identifier" Type="Resource.Identifier">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The value identifies this resource."/>
          <Annotation Term="OData.LongDescription" String="The value shall be unique within the managed ecosystem."/>
        </Property>
        <Property Name="SupportedRecoveryGeographicObjectives" Type="Collection(DataProtectionLoSCapabilities.FailureDomainScope)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Supported types of failure domains."/>
          <Annotation Term="OData.LongDescription" String="The value of each entry shall specify a supported failure domain."/>
        </Property>
        <Property Name="SupportedRecoveryPointObjectiveTimes" Type="Collection(Edm.String)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Supported time intervals defining how much source information can be lost on failure."/>
          <Annotation Term="OData.LongDescription" String="The value of each entry shall specify a supported ISO 8601 time interval defining the maximum source information that may be lost on failure. In the case that IsIsolated = false, failure of the domain is not a consideration."/>
        </Property>
        <Property Name="SupportedRecoveryTimeObjectives" Type="Collection(DataProtectionLoSCapabilities.RecoveryAccessScope)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Supported expectations for time to access an alternate replica."/>
          <Annotation Term="OData.LongDescription" String="The value of each entry shall specify an enumerated value that indicates a supported expectation for the time required to access an alternate replica. In the case that IsIsolated = false, failure of the domain is not a consideration."/>
        </Property>
        <Property Name="SupportedReplicaTypes" Type="Collection(StorageReplicaInfo.ReplicaType)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Supported replica types."/>
          <Annotation Term="OData.LongDescription" String="The value of each entry shall specify a supported replica type"/>
        </Property>
        <Property Name="SupportedMinLifetimes" Type="Collection(Edm.String)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Supported minimum lifetime that replica must be maintained."/>
          <Annotation Term="OData.LongDescription" String="The value of each entry shall be an ISO 8601 duration that specifies the minimum lifetime required for the replica."/>
        </Property>
        <Property Name="SupportsIsolated" Type="Edm.Boolean" DefaultValue="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Allocating a replica in a separate fault domain is supported."/>
          <Annotation Term="OData.LongDescription" String="A value of true shall indicate that allocating a replica in a separate fault domain is supported. The default value for this property is false."/>
        </Property>
        <Property Name="Links" Type="DataProtectionLoSCapabilities.v1_0_0.Links" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Contains links to other resources that are related to this resource."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contains links to other resources that are not contained in this resource."/>
        </Property>
        <NavigationProperty Name="SupportedLinesOfService" Type="Collection(DataProtectionLineOfService.DataProtectionLineOfService)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Collection of known and supported DataProtectionLinesOfService."/>
          <Annotation Term="OData.LongDescription" String="The collection shall contain known and supported DataProtectionLinesOfService."/>
          <Annotation Term="OData.AutoExpand"/>
        </NavigationProperty>
      </EntityType>

      <ComplexType Name="Links" BaseType="Resource.Links">
        <NavigationProperty Name="SupportedReplicaOptions" Type="Collection(ClassOfService.ClassOfService)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Collection of known and supported replica Classes of Service."/>
          <Annotation Term="OData.LongDescription" String="The collection shall contain known and supported replica Classes of Service."/>
        </NavigationProperty>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="DataProtectionLoSCapabilities.v1_0_1">
      <EntityType Name="DataProtectionLoSCapabilities" BaseType="DataProtectionLoSCapabilities.v1_0_0.DataProtectionLoSCapabilities">
        <Annotation Term="OData.Description" String="Updated RecoveryAccessScope enumeration types."/>
      </EntityType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="DataProtectionLoSCapabilities.v1_1_0">
      <EntityType Name="DataProtectionLoSCapabilities" BaseType="DataProtectionLoSCapabilities.v1_0_1.DataProtectionLoSCapabilities">
        <Property Name="Actions" Type="DataProtectionLoSCapabilities.v1_1_0.Actions" Nullable="false">
          <Annotation Term="OData.Description" String="The available actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
        </Property>
      </EntityType>

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The available actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain the available actions for this resource."/>
        <Property Name="Oem" Type="DataProtectionLoSCapabilities.v1_1_0.OemActions" Nullable="false"/>
      </ComplexType>

      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="The available OEM specific actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional OEM actions for this resource."/>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="DataProtectionLoSCapabilities.v1_1_1">
      <EntityType Name="DataProtectionLoSCapabilities" BaseType="DataProtectionLoSCapabilities.v1_1_0.DataProtectionLoSCapabilities">
        <Annotation Term="OData.Description" String="Use Redfish Location type, and change DataProtectionLineOfService to EntityType.  Move enums to unversioned namespace. Change references to unversioned."/>
      </EntityType>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_DATA_PROTECTION_LOS_CAPABILITIES_V1_HPP */
