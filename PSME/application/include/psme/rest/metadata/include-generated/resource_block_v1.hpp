#ifndef PSME_REST_METADATA_RESOURCE_BLOCK_V1_HPP
#define PSME_REST_METADATA_RESOURCE_BLOCK_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string ResourceBlock_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!--################################################################################       -->
<!--# Redfish Schema:  ResourceBlock  v1.1.0-->
<!--#                                                                                      -->
<!--# For a detailed change log, see the README file contained in the DSP8010 bundle,      -->
<!--# available at http://www.dmtf.org/standards/redfish                                   -->
<!--# Copyright 2014-2018 Distributed Management Task Force, Inc. (DMTF).                  -->
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
    <edmx:Include Namespace="Validation.v1_0_0" Alias="Validation"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource"/>
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Chassis_v1.xml">
    <edmx:Include Namespace="Chassis"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/ComputerSystem_v1.xml">
    <edmx:Include Namespace="ComputerSystem"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/EthernetInterface_v1.xml">
    <edmx:Include Namespace="EthernetInterface"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Memory_v1.xml">
    <edmx:Include Namespace="Memory"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/NetworkInterface_v1.xml">
    <edmx:Include Namespace="NetworkInterface"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Processor_v1.xml">
    <edmx:Include Namespace="Processor"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/SimpleStorage_v1.xml">
    <edmx:Include Namespace="SimpleStorage"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Storage_v1.xml">
    <edmx:Include Namespace="Storage"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Zone_v1.xml">
    <edmx:Include Namespace="Zone"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ResourceBlock">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="ResourceBlock" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="This is the schema definition of the Resource Block, its components, and affinity to composed devices."/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to represent a Resource Block for a Redfish implementation."/>
        <Annotation Term="Capabilities.InsertRestrictions">
          <Record>
            <PropertyValue Property="Insertable" Bool="false"/>
          </Record>
        </Annotation>
        <Annotation Term="Capabilities.UpdateRestrictions">
          <Record>
            <PropertyValue Property="Updatable" Bool="true"/>
            <Annotation Term="OData.Description" String="Resource Blocks can be updated to change the reservation setting and other writable properties."/>
          </Record>
        </Annotation>
        <Annotation Term="Capabilities.DeleteRestrictions">
          <Record>
            <PropertyValue Property="Deletable" Bool="false"/>
          </Record>
        </Annotation>
      </EntityType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ResourceBlock.v1_0_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="ResourceBlock" BaseType="ResourceBlock.ResourceBlock">
        <Annotation Term="OData.Description" String="This schema defines a Resource Block resource."/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to represent a Resource Block for a Redfish implementation."/>
        <Property Name="Status" Type="Resource.Status" Nullable="false"/>
        <Property Name="CompositionStatus" Type="ResourceBlock.v1_0_0.CompositionStatus" Nullable="false">
          <Annotation Term="OData.Description" String="This property describes the composition status details for this Resource Block."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain composition status information about this Resource Block."/>
          <Annotation Term="Redfish.Required"/>
        </Property>
        <Property Name="ResourceBlockType" Type="Collection(ResourceBlock.v1_0_0.ResourceBlockType)" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This property represents the types of resources available on this Resource Block."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of enumerated values describing type of resources available."/>
          <Annotation Term="Redfish.Required"/>
        </Property>
        <Property Name="Links" Type="ResourceBlock.v1_0_0.Links" Nullable="false">
          <Annotation Term="OData.Description" String="Contains references to other resources that are related to this resource."/>
          <Annotation Term="OData.LongDescription" String="The Links property, as described by the Redfish Specification, shall contain references to resources that are related to, but not contained by (subordinate to), this resource."/>
        </Property>
        <Property Name="Actions" Type="ResourceBlock.v1_0_0.Actions" Nullable="false">
          <Annotation Term="OData.Description" String="The available actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
        </Property>
        <NavigationProperty Name="Processors" Type="Collection(Processor.Processor)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the Processors available in this Resource Block."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type Processor that are in this Resource Block."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="Memory" Type="Collection(Memory.Memory)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the Memory available in this Resource Block."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type Memory that are in this Resource Block."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="Storage" Type="Collection(Storage.Storage)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the Storage available in this Resource Block."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type Storage that are in this Resource Block."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="SimpleStorage" Type="Collection(SimpleStorage.SimpleStorage)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the Simple Storage available in this Resource Block."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type SimpleStorage that are in this Resource Block."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="EthernetInterfaces" Type="Collection(EthernetInterface.EthernetInterface)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the Ethernet Interfaces available in this Resource Block."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type EthernetInterface that are in this Resource Block."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="NetworkInterfaces" Type="Collection(NetworkInterface.NetworkInterface)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the Network Interfaces available in this Resource Block."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type NetworkInterface that are in this Resource Block."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="ComputerSystems" Type="Collection(ComputerSystem.ComputerSystem)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the Computer Systems available in this Resource Block."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type ComputerSystem that are in this Resource Block."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </EntityType>

      <ComplexType Name="Links" BaseType="Resource.Links">
        <Annotation Term="OData.Description" String="Contains references to other resources that are related to this resource."/>
        <Annotation Term="OData.LongDescription" String="This type, as described by the Redfish Specification, shall contain references to resources that are related to, but not contained by (subordinate to), this resource."/>
        <NavigationProperty Name="ComputerSystems" Type="Collection(ComputerSystem.ComputerSystem)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the Computer Systems that are composed from this Resource Block."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type ComputerSystem that represent the Computer Systems composed from this Resource Block."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="Chassis" Type="Collection(Chassis.Chassis)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the Chassis in which this Resource Block is contained."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type Chassis that represent the physical container associated with this Resource Block."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="Zones" Type="Collection(Zone.Zone)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the Zones in which this Resource Block is bound."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type Zone that represent the binding constraints associated with this Resource Block."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The available actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain the available actions for this resource."/>
        <Property Name="Oem" Type="ResourceBlock.v1_0_0.OemActions" Nullable="false"/>
      </ComplexType>

      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="The available OEM specific actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional OEM actions for this resource."/>
      </ComplexType>

      <EnumType Name="ResourceBlockType">
        <Member Name="Compute">
          <Annotation Term="OData.Description" String="This Resource Block contains both Processor and Memory resources in a manner that creates a compute complex."/>
        </Member>
        <Member Name="Processor">
          <Annotation Term="OData.Description" String="This Resource Block contains Processor resources."/>
        </Member>
        <Member Name="Memory">
          <Annotation Term="OData.Description" String="This Resource Block contains Memory resources."/>
        </Member>
        <Member Name="Network">
          <Annotation Term="OData.Description" String="This Resource Block contains Network resources, such as Ethernet Interfaces."/>
        </Member>
        <Member Name="Storage">
          <Annotation Term="OData.Description" String="This Resource Block contains Storage resources, such as Storage and Simple Storage."/>
        </Member>
        <Member Name="ComputerSystem">
          <Annotation Term="OData.Description" String="This Resource Block contains ComputerSystem resources."/>
        </Member>
      </EnumType>

      <ComplexType Name="CompositionStatus">
        <Annotation Term="OData.Description" String="Composition status of the Resource Block."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain properties that describe the high level composition status of the Resource Block."/>
        <Property Name="Reserved" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="This represents if the Resource Block is reserved by any client."/>
          <Annotation Term="OData.LongDescription" String="This property shall be a boolean that is set by client once the Resource Block is identified to be composed.  It shall provide multiple clients a way to negotiate its ownership.  This will help clients to know if a Resource Block is reserved by other client."/>
        </Property>
        <Property Name="CompositionState" Type="ResourceBlock.v1_0_0.CompositionState">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This property represents the current state of the Resource Block from a composition perspective."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an enumerated value describing composition state of the Resource Block."/>
          <Annotation Term="Redfish.Required"/>
        </Property>
      </ComplexType>

      <EnumType Name="CompositionState">
        <Member Name="Composing">
          <Annotation Term="OData.Description" String="Intermediate state indicating composition is in progress."/>
        </Member>
        <Member Name="ComposedAndAvailable">
          <Annotation Term="OData.Description" String="Indicates the Resource Block is currently participating in one or more compositions, and is available to be used in more compositions."/>
        </Member>
        <Member Name="Composed">
          <Annotation Term="OData.Description" String="Final successful state of a Resource Block which has participated in composition."/>
        </Member>
        <Member Name="Unused">
          <Annotation Term="OData.Description" String="Indicates the Resource Block is free and can participate in composition."/>
        </Member>
        <Member Name="Failed">
          <Annotation Term="OData.Description" String="The final composition resulted in failure and manual intervention may be required to fix it."/>
        </Member>
      </EnumType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ResourceBlock.v1_1_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="ResourceBlock" BaseType="ResourceBlock.v1_0_0.ResourceBlock"/>

      <ComplexType Name="CompositionStatus" BaseType="ResourceBlock.v1_0_0.CompositionStatus">
        <Property Name="SharingCapable" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Indicates if this Resource Block is capable of participating in multiple compositions simultaneously."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean indicating whether this Resource Block is capable of participating in multiple compositions simultaneously.  If this property is not provided, it shall be assumed that this Resource Block is not capable of being shared."/>
        </Property>
        <Property Name="SharingEnabled" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Indicates if this Resource Block is allowed to participate in multiple compositions simultaneously."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean indicating whether this Resource Block is allowed to participate in multiple compositions simultaneously.  The service shall reject modifications of this property with HTTP 400 Bad Request if this Resource Block already being used as part of a composed resource.  If this property is set to false, the service shall not use the ComposedAndAvailable state for this Resource Block."/>
        </Property>
        <Property Name="MaxCompositions" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The maximum number of compositions in which this Resource Block is capable of participating simultaneously."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a number indicating the maximum number of compositions in which this Resource Block is capable of participating simultaneously.  Services may have additional constraints that prevent this value from being achieved, such as due to system topology and current composed resource utilization.  If SharingCapable is set to false, this value shall be set to 1.  The service shall support this property if SharingCapable supported."/>
          <Annotation Term="Validation.Minimum" Int="1"/>
        </Property>
        <Property Name="NumberOfCompositions" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The number of compositions in which this Resource Block is currently participating."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the number of compositions in which this Resource Block is currently participating."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
      </ComplexType>

    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_RESOURCE_BLOCK_V1_HPP */
