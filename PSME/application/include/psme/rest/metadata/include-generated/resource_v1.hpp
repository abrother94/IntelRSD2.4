#ifndef PSME_REST_METADATA_RESOURCE_V1_HPP
#define PSME_REST_METADATA_RESOURCE_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string Resource_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!--################################################################################       -->
<!--# Redfish Schema:  Resource  v1.6.0-->
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
  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Measures.V1.xml">
    <edmx:Include Namespace="Org.OData.Measures.V1" Alias="Measures"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/RedfishExtensions_v1.xml">
    <edmx:Include Namespace="RedfishExtensions.v1_0_0" Alias="Redfish"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <!--Type Definitions-->
      <TypeDefinition Name="Id" UnderlyingType="Edm.String">
        <Annotation Term="OData.Description" String="Uniquely identifies the resource within the collection of like resources."/>
        <Annotation Term="OData.LongDescription" String="This property represents an identifier for the resource.  All values for resources described by this schema shall comply to the requirements as described in the Redfish specification."/>
      </TypeDefinition>

      <TypeDefinition Name="Description" UnderlyingType="Edm.String">
        <Annotation Term="OData.Description" String="Provides a description of this resource and is used for commonality  in the schema definitions."/>
        <Annotation Term="OData.LongDescription" String="This object represents the Description property.  All values for resources described by this schema shall comply to the requirements as described in the Redfish specification."/>
      </TypeDefinition>

      <TypeDefinition Name="Name" UnderlyingType="Edm.String">
        <Annotation Term="OData.Description"  String="The name of the resource or array element."/>
        <Annotation Term="OData.LongDescription" String="This object represents the Name property.  All values for resources described by this schema shall comply to the requirements as described in the Redfish specification. The value of this string shall be of the format for the reserved word *Name*."/>
      </TypeDefinition>

      <TypeDefinition Name="UUID" UnderlyingType="Edm.Guid"/>

      <!--Base Complex type for Links properties-->
      <ComplexType Name="Links" Abstract="true">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="Oem" Type="Resource.Oem" Nullable="false">
          <Annotation Term="OData.Description" String="Oem extension object."/>
          <Annotation Term="OData.LongDescription" String="This object represents the Oem property.  All values for resources described by this schema shall comply to the requirements as described in the Redfish specification."/>
        </Property>
      </ComplexType>

      <!--Complex type that serves as a "property bag" for OEM properties-->
      <ComplexType Name="Oem">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="Redfish.DynamicPropertyPatterns">
          <Collection>
            <Record>
              <PropertyValue Property="Pattern" String="[A-Za-z0-9_.:]+"/>
              <PropertyValue Property="Type" String="Resource.OemObject"/>
            </Record>
          </Collection>
        </Annotation>
        <Annotation Term="OData.Description" String="Oem extension object."/>
        <Annotation Term="OData.LongDescription" String="This object represents the Oem properties.  All values for resources described by this schema shall comply to the requirements as described in the Redfish specification."/>
      </ComplexType>

      <!--Base type for OEM property-->
      <ComplexType Name="OemObject">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="Base type for an Oem object."/>
        <Annotation Term="OData.LongDescription" String="This object represents the base type for an Oem property.  All values for resources described by this schema shall comply to the requirements as described in the Redfish specification."/>
      </ComplexType>

      <!--Unversioned Base Types-->

      <EntityType Name="ItemOrCollection" Abstract="true"/>

      <!--Base type for Resources and ReferenceableMembers-->
      <EntityType Name="Item" BaseType="Resource.ItemOrCollection" Abstract="true">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This is the base type for resources and referenceable members."/>
        <Property Name="Oem" Type="Resource.Oem" Nullable="false">
          <Annotation Term="OData.Description" String="This is the manufacturer/provider specific extension moniker used to divide the Oem object into sections."/>
          <Annotation Term="OData.LongDescription" String="The value of this string shall be of the format for the reserved word *Oem*."/>
        </Property>
      </EntityType>

      <EntityType Name="ReferenceableMember" BaseType="Resource.Item" Abstract="true"/>

      <EntityType Name="Resource" BaseType="Resource.Item" Abstract="true"/>

      <EntityType Name="ResourceCollection" BaseType="Resource.ItemOrCollection" Abstract="true"/>

      <!--Shared types-->

      <!--This object represents the standard status structure for resources.-->
      <ComplexType Name="Status">
        <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This type describes the status and health of a resource and its children."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any status or health properties of a resource."/>
        <Property Name="State" Type="Resource.State">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This indicates the known state of the resource, such as if it is enabled."/>
          <Annotation Term="OData.LongDescription" String="This property shall represent if this component is available or not and why.  Enabled indicates the resource is available.  Disabled indicates the resource has been intentionally made unavailable but it can be enabled.  Offline indicates the resource is unavailable intentionally and requires action to be made available.  InTest indicates that the component is undergoing testing.  Starting indicates that the resource is on its way to becoming available.  Absent indicates the resources is physically unavailable."/>
        </Property>
        <Property Name="HealthRollup" Type="Resource.Health">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This represents the overall health state from the view of this resource."/>
          <Annotation Term="OData.LongDescription" String="This property shall represent the HealthState of the resource and its dependent resources.  The values shall conform to those defined in the Redfish specification."/>
        </Property>
        <Property Name="Health" Type="Resource.Health">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This represents the health state of this resource in the absence of its dependent resources."/>
          <Annotation Term="OData.LongDescription" String="This property shall represent the HealthState of the resource without considering its dependent resources. The values shall conform to those defined in the Redfish specification."/>
        </Property>
        <Property Name="Oem" Type="Resource.Oem" Nullable="false"/>
      </ComplexType>

      <!--This indicates the known state of the resource, such as if it is enabled.-->
      <EnumType Name="State">
        <Member Name="Enabled">
          <Annotation Term="OData.Description" String="This function or resource has been enabled."/>
        </Member>
        <Member Name="Disabled">
          <Annotation Term="OData.Description" String="This function or resource has been disabled."/>
        </Member>
        <Member Name="StandbyOffline">
          <Annotation Term="OData.Description" String="This function or resource is enabled, but awaiting an external action to activate it."/>
        </Member>
        <Member Name="StandbySpare">
          <Annotation Term="OData.Description" String="This function or resource is part of a redundancy set and is awaiting a failover or other external action to activate it."/>
        </Member>
        <Member Name="InTest">
          <Annotation Term="OData.Description" String="This function or resource is undergoing testing."/>
        </Member>
        <Member Name="Starting">
          <Annotation Term="OData.Description" String="This function or resource is starting."/>
        </Member>
        <Member Name="Absent">
          <Annotation Term="OData.Description" String="This function or resource is not present or not detected."/>
        </Member>
        <Member Name="UnavailableOffline">
          <Annotation Term="OData.Description" String="This function or resource is present but cannot be used."/>
        </Member>
        <Member Name="Deferring">
          <Annotation Term="OData.Description" String="The element will not process any commands but will queue new requests."/>
        </Member>
        <Member Name="Quiesced">
          <Annotation Term="OData.Description" String="The element is enabled but only processes a restricted set of commands."/>
        </Member>
        <Member Name="Updating">
          <Annotation Term="OData.Description" String="The element is updating and may be unavailable or degraded."/>
        </Member>
      </EnumType>

      <!--This represents the state of the health of a resource.-->
      <EnumType Name="Health">
        <Member Name="OK">
          <Annotation Term="OData.Description" String="Normal."/>
        </Member>
        <Member Name="Warning">
          <Annotation Term="OData.Description" String="A condition exists that requires attention."/>
        </Member>
        <Member Name="Critical">
          <Annotation Term="OData.Description" String="A critical condition exists that requires immediate attention."/>
        </Member>
      </EnumType>

      <!--Common RestType parameter values for Reset Action-->
      <EnumType Name="ResetType">
        <Member Name="On">
          <Annotation Term="OData.Description" String="Turn the unit on."/>
        </Member>
        <Member Name="ForceOff">
          <Annotation Term="OData.Description" String="Turn the unit off immediately (non-graceful shutdown)."/>
        </Member>
        <Member Name="GracefulShutdown">
          <Annotation Term="OData.Description" String="Perform a graceful shutdown and power off."/>
        </Member>
        <Member Name="GracefulRestart">
          <Annotation Term="OData.Description" String="Perform a graceful shutdown followed by a restart of the system."/>
        </Member>
        <Member Name="ForceRestart">
          <Annotation Term="OData.Description" String="Perform an immediate (non-graceful) shutdown, followed by a restart."/>
        </Member>
        <Member Name="Nmi">
          <Annotation Term="OData.Description" String="Generate a Diagnostic Interrupt (usually an NMI on x86 systems) to cease normal operations, perform diagnostic actions and typically halt the system."/>
        </Member>
        <Member Name="ForceOn">
          <Annotation Term="OData.Description" String="Turn the unit on immediately."/>
        </Member>
        <Member Name="PushPowerButton">
          <Annotation Term="OData.Description" String="Simulate the pressing of the physical power button on this unit."/>
        </Member>
        <Member Name="PowerCycle">
          <Annotation Term="OData.Description" String="Perform a power cycle of the unit."/>
        </Member>
      </EnumType>

      <ComplexType Name="Identifier" Abstract="true">
        <Annotation Term="OData.Description" String="This type describes any additional identifiers for a resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional identifiers of a resource."/>
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
      </ComplexType>

      <ComplexType Name="Location" Abstract="true">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This type describes the location of a resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe the location of a resource."/>
      </ComplexType>

      <EnumType Name="IndicatorLED">
        <Member Name="Lit">
          <Annotation Term="OData.Description" String="The Indicator LED is lit."/>
          <Annotation Term="OData.LongDescription" String="This value shall represent the Indicator LED is in a solid on state.  If this value is not supported by the service, the service shall reject PATCH or PUT requests containing this value by returning HTTP 400 (Bad Request)."/>
        </Member>
        <Member Name="Blinking">
          <Annotation Term="OData.Description" String="The Indicator LED is blinking."/>
          <Annotation Term="OData.LongDescription" String="This value shall represent the Indicator LED is in a blinking state where the LED is being turned on and off in repetition.  If this value is not supported by the service, the service shall reject PATCH or PUT requests containing this value by returning HTTP 400 (Bad Request)."/>
        </Member>
        <Member Name="Off">
          <Annotation Term="OData.Description" String="The Indicator LED is off."/>
          <Annotation Term="OData.LongDescription" String="This value shall represent the Indicator LED is in a solid off state.  If this value is not supported by the service, the service shall reject PATCH or PUT requests containing this value by returning HTTP 400 (Bad Request)."/>
        </Member>
      </EnumType>

      <EnumType Name="PowerState">
        <Member Name="On">
          <Annotation Term="OData.Description" String="The state is powered On."/>
        </Member>
        <Member Name="Off">
          <Annotation Term="OData.Description" String="The state is powered Off."/>
        </Member>
        <Member Name="PoweringOn">
          <Annotation Term="OData.Description" String="A temporary state between Off and On."/>
        </Member>
        <Member Name="PoweringOff">
          <Annotation Term="OData.Description" String="A temporary state between On and Off."/>
        </Member>
      </EnumType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_0_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <!--Base entity type for array members-->
      <EntityType Name="ReferenceableMember" BaseType="Resource.ReferenceableMember" Abstract="true">
        <Annotation Term="OData.Description" String="This is the base type for addressable members of an array."/>
        <Annotation Term="OData.LongDescription" String="Array members can be referenced using the value returned in the @odata.id property which may or may not be a dereferenceable URL. The @odata.id of this entity shall be the location of this element within an Item."/>
        <Key>
          <PropertyRef Name="MemberId"/>
        </Key>
        <Property Name="MemberId" Nullable="false" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is the identifier for the member within the collection."/>
          <Annotation Term="OData.LongDescription" String="The value of this string shall uniquely identify the member within the collection."/>
        </Property>
      </EntityType>

      <!--Base entity type for all resources-->
      <EntityType Name="Resource" BaseType="Resource.Resource" Abstract="true">
        <Key>
          <PropertyRef Name="Id"/>
        </Key>
        <Property Name="Id" Type="Resource.Id" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="Redfish.Required"/>
        </Property>
        <Property Name="Description" Type="Resource.Description">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
        </Property>
        <Property Name="Name" Type="Resource.Name" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="Redfish.Required"/>
        </Property>
      </EntityType>

      <!--Base entity type for all resource collection objects-->
      <EntityType Name="ResourceCollection" BaseType="Resource.ResourceCollection" Abstract="true">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Key>
          <PropertyRef Name="Name"/>
        </Key>
        <Property Name="Description" Type="Resource.Description">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
        </Property>
        <Property Name="Name" Type="Resource.Name" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
        </Property>
        <Property Name="Oem" Type="Resource.Oem" Nullable="false">
          <Annotation Term="OData.Description" String="This is the manufacturer/provider specific extension moniker used to divide the Oem object into sections."/>
          <Annotation Term="OData.LongDescription" String="The value of this string shall be of the format for the reserved word *Oem*."/>
        </Property>
      </EntityType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_0_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_0_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_0_4">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_1_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <ComplexType Name="Identifier" BaseType="Resource.Identifier">
        <Property Name="DurableName" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This indicates the world wide, persistent name of the resource."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the world wide unique identifier for the resource. The string shall be in the format described by the value of the Identifier.DurableNameFormat property."/>
        </Property>
        <Property Name="DurableNameFormat" Type="Resource.v1_1_0.DurableNameFormat">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This represents the format of the DurableName property."/>
          <Annotation Term="OData.LongDescription" String="This property shall represent the format of the DurableName property."/>
        </Property>
      </ComplexType>

      <ComplexType Name="Location" BaseType="Resource.Location">
        <Property Name="Info" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="Redfish.Deprecated" String="This property has been Deprecated in favor of new properties defined in Resource.v1_3_0.Location and Resource.v1_5_0.Location."/>
          <Annotation Term="OData.Description" String="This indicates the location of the resource."/>
          <Annotation Term="OData.LongDescription" String="This property shall represent the location of the resource."/>
        </Property>
        <Property Name="InfoFormat" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="Redfish.Deprecated" String="This property has been Deprecated in favor of new properties defined in Resource.v1_3_0.Location and Resource.v1_5_0.Location."/>
          <Annotation Term="OData.Description" String="This represents the format of the Info property."/>
          <Annotation Term="OData.LongDescription" String="This property shall represent the format of the Info property."/>
        </Property>
        <Property Name="Oem" Type="Resource.Oem" Nullable="false"/>
      </ComplexType>

      <EnumType Name="DurableNameFormat">
        <Member Name="NAA">
          <Annotation Term="OData.Description" String="Name Address Authority Format."/>
          <Annotation Term="OData.LongDescription" String="This durable name shall be a hexadecimal representation of the Name Address Authority structure as defined in the T11 Fibre Channel - Framing and Signaling - 3 (FC-FS-3) specification."/>
        </Member>
        <Member Name="iQN">
          <Annotation Term="OData.Description" String="iSCSI Qualified Name."/>
          <Annotation Term="OData.LongDescription" String="This durable name shall be in the iSCSI Qualified Name format as defined in RFC 3720 and RFC 3721."/>
        </Member>
        <Member Name="FC_WWN">
          <Annotation Term="OData.Description" String="Fibre Channel World Wide Name."/>
          <Annotation Term="OData.LongDescription" String="This durable name shall be a hexadecimal representation of the World Wide Name format as defined in the T11 Fibre Channel Physical and Signaling Interface Specification."/>
        </Member>
        <Member Name="UUID">
          <Annotation Term="OData.Description" String="Universally Unique Identifier."/>
          <Annotation Term="OData.LongDescription" String="This durable name shall be the hexadecimal representation of the Universal Unique Identifier as defined in the Internation Telecom Union's OSI networking and system aspects - Naming, Addressing and Registration Specification."/>
        </Member>
        <Member Name="EUI">
          <Annotation Term="OData.Description" String="IEEE-defined 64-bit Extended Unique Identifier."/>
          <Annotation Term="OData.LongDescription" String="This durable name shall be the hexadecimal representation of the IEEE-defined 64-bit Extended Unique Identifier as defined in the IEEE's Guidelines for 64-bit Global Identifier (EUI-64) Specification."/>
        </Member>
        <Member Name="NQN">
          <Annotation Term="OData.Description" String="NVMe Qualified Name."/>
          <Annotation Term="OData.LongDescription" String="This durable name shall be in the NVMe Qualified Name format as defined in the NVN Express over Fabric Specification."/>
        </Member>
        <Member Name="NSID">
          <Annotation Term="OData.Description" String="NVM Namespace Identifier."/>
          <Annotation Term="OData.LongDescription" String="This durable name shall be in the NVM Namespace Identifier format as defined in the NVN Express Specification."/>
        </Member>
      </EnumType>

      <EnumType Name="IndicatorLED">
        <Annotation Term="Redfish.Deprecated" String="This definition has been moved to the unversioned namespace so that external references can pick up changes over time."/>
        <Member Name="Lit">
          <Annotation Term="OData.Description" String="The Indicator LED is lit."/>
          <Annotation Term="OData.LongDescription" String="This value shall represent the Indicator LED is in a solid on state.  If this value is not supported by the service, the service shall reject PATCH or PUT requests containing this value by returning HTTP 400 (Bad Request)."/>
        </Member>
        <Member Name="Blinking">
          <Annotation Term="OData.Description" String="The Indicator LED is blinking."/>
          <Annotation Term="OData.LongDescription" String="This value shall represent the Indicator LED is in a blinking state where the LED is being turned on and off in repetition.  If this value is not supported by the service, the service shall reject PATCH or PUT requests containing this value by returning HTTP 400 (Bad Request)."/>
        </Member>
        <Member Name="Off">
          <Annotation Term="OData.Description" String="The Indicator LED is off."/>
          <Annotation Term="OData.LongDescription" String="This value shall represent the Indicator LED is in a solid off state.  If this value is not supported by the service, the service shall reject PATCH or PUT requests containing this value by returning HTTP 400 (Bad Request)."/>
        </Member>
      </EnumType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_1_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_1_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_1_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_1_4">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_1_5">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add an abstract base type for Identifier and Location, and to deprecate the versioned definition of IndicatorLED to use an unversioned definition."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_2_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EnumType Name="PowerState">
        <Annotation Term="Redfish.Deprecated" String="This definition has been moved to the unversioned namespace so that external references can pick up changes over time."/>
        <Member Name="On">
          <Annotation Term="OData.Description" String="The state is powered On."/>
        </Member>
        <Member Name="Off">
          <Annotation Term="OData.Description" String="The state is powered Off."/>
        </Member>
        <Member Name="PoweringOn">
          <Annotation Term="OData.Description" String="A temporary state between Off and On."/>
        </Member>
        <Member Name="PoweringOff">
          <Annotation Term="OData.Description" String="A temporary state between On and Off."/>
        </Member>
      </EnumType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_2_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_2_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_2_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_2_4">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add an abstract base type for Identifier and Location, and to deprecate the versioned definition of IndicatorLED and PowerState to use an unversioned definition."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_3_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EnumType Name="RackUnits">
        <Annotation Term="OData.Description" String="Defines a rack unit."/>
        <Annotation Term="OData.LongDescription" String="Enumeration literals shall name the type of rack units in use."/>
        <Member Name="OpenU">
          <Annotation Term="OData.Description" String="Defines a rack unit as being equal to 48 mm (1.89 in)."/>
          <Annotation Term="OData.LongDescription" String="Rack units shall be specifie3d in terms of the Open Compute Open Rack specification."/>
        </Member>
        <Member Name="EIA_310">
          <Annotation Term="OData.Description" String="Defines a rack unit as being equal to 1.75 in (44.45 mm)."/>
          <Annotation Term="OData.LongDescription" String="Rack units shall be specified as defined by the EIA-310 standard."/>
        </Member>
      </EnumType>

      <ComplexType Name="PostalAddress">
        <Annotation Term="OData.Description" String="The PostalAddress for a resource."/>
        <Annotation Term="OData.LongDescription" String="Instances shall describe a postal address for a resource. For more information see RFC5139. Depending on use, the instance may represent a past, current, or future location."/>
        <Property Name="Country" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Country."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the Country field as defined in RFC5139."/>
        </Property>
        <Property Name="Territory" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="A top-level subdivision within a country."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the A1 field as defined in RFC5139 when used to name a territory, state, region, province, or prefecture within a country."/>
        </Property>
        <Property Name="District" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="A county, parish, gun (JP), or  district (IN)."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the A2 field as defined in RFC5139.  It is used to name a county, parish, gun (JP), or  district (IN)."/>
        </Property>
        <Property Name="City" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="City, township, or shi (JP)."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the A3 field as defined in RFC5139.  It is used to name a city, township, or shi (JP)."/>
        </Property>
        <Property Name="Division" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="City division, borough, dity district, ward, chou (JP)."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the A4 field as defined in RFC5139.  It is used to name a city division, borough, dity district, ward, chou (JP)."/>
        </Property>
        <Property Name="Neighborhood" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Neighborhood or block."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the A5 field as defined in RFC5139.  It is used to name a neighborhood or block."/>
        </Property>
        <Property Name="LeadingStreetDirection" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="A leading street direction."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the PRD field as defined in RFC5139.  It is used to name a leading street direction, (N, W, SE)."/>
        </Property>
        <Property Name="Street" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Street name."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the A6 field as defined in RFC5139.  It is used to name a street."/>
        </Property>
        <Property Name="TrailingStreetSuffix" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="A trailing street suffix."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the POD field as defined in RFC5139.  It is used to name a trailing street suffix."/>
        </Property>
        <Property Name="StreetSuffix" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Avenue, Platz, Street, Circle."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the STS field as defined in RFC5139.  It is used to name a  street suffix."/>
        </Property>
        <Property Name="HouseNumber" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Numeric portion of house number."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the HNO field as defined in RFC5139.  It is the numeric portion of the house number."/>
        </Property>
        <Property Name="HouseNumberSuffix" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="House number suffix."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the HNS field as defined in RFC5139.  It is used to provide a suffix to a house number, (F, B, 1/2)."/>
        </Property>
        <Property Name="Landmark" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Landmark."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the LMK field as defined in RFC5139.  It is used to identify a landmark or vanity address."/>
        </Property>
        <Property Name="Location" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Room designation or other additional info."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the LOC field as defined in RFC5139.  It is used to provide additional information."/>
        </Property>
        <Property Name="Floor" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Floor."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the FLR field as defined in RFC5139.  It is used to provide a floor designation."/>
        </Property>
        <Property Name="Name" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Name."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the NAM field as defined in RFC5139.  It is used to name the occupant."/>
        </Property>
        <Property Name="PostalCode" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Postal code (or zip code)."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the PC field as defined in RFC5139. The value shall be a Postal code (or zip code)."/>
        </Property>
        <Property Name="Building" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Name of the building."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the BLD field as defined in RFC5139.  The value shall be name a building used to locate the resource."/>
        </Property>
        <Property Name="Unit" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Name or number of the unit (apartment, suite)."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the UNIT field as defined in RFC5139.  The value shall be a name or number of a unit (apartment, suite) used to locate the resource."/>
        </Property>
        <Property Name="Room" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Name or number of the room."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the ROOM field as defined in RFC5139.  The value shall be a name or number of a room used to locate the resource within the unit."/>
        </Property>
        <Property Name="Seat" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Seat (desk, cubicle, workstation)."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the SEAT field as defined in RFC5139.  The value shall be a name or number of a Seat (desk, cubicle, workstation)."/>
        </Property>
        <Property Name="PlaceType" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="A description of the type of place that is addressed."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the PLC field as defined in RFC5139.  Examples include: office, residence,...)."/>
        </Property>
        <Property Name="Community" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Postal community name."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the PCN field as defined in RFC5139.  The value shall be a postal community name."/>
        </Property>
        <Property Name="POBox" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Post office box (P.O. box)."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the POBOX field as defined in RFC5139.  The value shall be a Post office box (P.O. box)."/>
        </Property>
        <Property Name="AdditionalCode" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Additional code."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the ADDCODE field as defined in RFC5139."/>
        </Property>
        <Property Name="Road" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="A primary road or street."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the RD field as defined in RFC5139.  The value designates a primary road or street."/>
        </Property>
        <Property Name="RoadSection" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Road Section."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the RDSEC field as defined in RFC5139.  The value shall be a road section."/>
        </Property>
        <Property Name="RoadBranch" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Road branch."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the RDBR field as defined in RFC5139.  The value shall be a Post office box (P.O. box)road branch."/>
        </Property>
        <Property Name="RoadSubBranch" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Road sub branch."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the RDSUBBR field as defined in RFC5139."/>
        </Property>
        <Property Name="RoadPreModifier" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Road pre-modifier."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the PRM field as defined in RFC5139.  (Old, New)."/>
        </Property>
        <Property Name="RoadPostModifier" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Road post-modifier."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the POM field as defined in RFC5139.  (Extended)."/>
        </Property>
        <Property Name="GPSCoords" Type="Edm.String">
          <Annotation Term="Redfish.Deprecated" String="This property has been Deprecated in favor of Location.v1_6_0.Longitude and Location.v1_6_0.Latitude"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The GPS coordinates of the part."/>
          <Annotation Term="OData.LongDescription" String="The value shall conform the requirements of the ADDCODE field as defined in RFC5139. The value shall be the GPS coordinates of the location. If furnished, this shall be expressed in the format '[-][nn]n.nnnnnn, [-][nn]n.nnnnn', i.e. two numbers, either positive or negative, with six decimal places of precision, comma-separated."/>
        </Property>
      </ComplexType>

      <ComplexType Name="Placement">
        <Annotation Term="OData.Description" String="The placement within the addressed location."/>
        <Annotation Term="OData.LongDescription" String="The value shall describe a location within a resource.  Examples include a shelf in a rack."/>
        <Property Name="Row" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Name of row."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the name of the row."/>
        </Property>
        <Property Name="Rack" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Name of a rack location within a row."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the name of the rack within a row."/>
        </Property>
        <Property Name="RackOffsetUnits" Type="Resource.v1_3_0.RackUnits">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The type of Rack Units in use."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a RackUnit enumeration literal indicating the type of rack units in use."/>
        </Property>
        <Property Name="RackOffset" Type="Edm.Int64" DefaultValue="0">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Vertical location of the item in terms of RackOffsetUnits."/>
          <Annotation Term="OData.LongDescription" String="Vertical location of the item in the rack. Rack offset units shall be measured from bottom to top starting with 0."/>
        </Property>
      </ComplexType>

      <ComplexType Name="Location" BaseType="Resource.v1_1_0.Location">
        <Annotation Term="OData.Description" String="The location of a resource."/>
        <Annotation Term="OData.LongDescription" String="Instances shall describe a location for a resource. For more information see RFC5139. Depending on use, the instance may represent a past, current, or future location."/>
        <Property Name="PostalAddress" Type="Resource.v1_3_0.PostalAddress">
          <Annotation Term="OData.Description" String="Postal address of the addressed resource."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a postal address of the resource."/>
        </Property>
        <Property Name="Placement" Type="Resource.v1_3_0.Placement">
          <Annotation Term="OData.Description" String="A place within the addressed location."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a place within the addressed location."/>
        </Property>
      </ComplexType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_3_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_3_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_3_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add an abstract base type for Identifier and Location, and to deprecate the versioned definition of IndicatorLED and PowerState to use an unversioned definition."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_4_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add PowerCycle enumeration to ResetType."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_4_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_4_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add an abstract base type for Identifier and Location, and to deprecate the versioned definition of IndicatorLED and PowerState to use an unversioned definition."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_5_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add PartLocation to Location."/>

      <EnumType Name="LocationType">
        <Annotation Term="OData.Description" String="Defines the location types for PartLocation."/>
        <Annotation Term="OData.LongDescription" String="Enumeration literals shall name the type of location in use."/>
        <Member Name="Slot">
          <Annotation Term="OData.Description" String="Defines a slot as the type of location."/>
          <Annotation Term="OData.LongDescription" String="Slot shall be used to indicate the type of PartLocation is of type slot."/>
        </Member>
        <Member Name="Bay">
          <Annotation Term="OData.Description" String="Defines a bay as the type of location."/>
          <Annotation Term="OData.LongDescription" String="Bay shall be used to indicate the type of PartLocation is of type bay."/>
        </Member>
        <Member Name="Connector">
          <Annotation Term="OData.Description" String="Defines a connector as the type of location."/>
          <Annotation Term="OData.LongDescription" String="Connector shall be used to indicate the type of PartLocation is of type connector."/>
        </Member>
        <Member Name="Socket">
          <Annotation Term="OData.Description" String="Defines a socket as the type of location."/>
          <Annotation Term="OData.LongDescription" String="Socket shall be used to indicate the type of PartLocation is of type socket."/>
        </Member>
      </EnumType>

      <EnumType Name="Reference">
        <Annotation Term="OData.Description" String="Defines a reference area for the location of the part."/>
        <Annotation Term="OData.LongDescription" String="Enumeration literals shall name the reference for the part location."/>
        <Member Name="Top">
          <Annotation Term="OData.Description" String="Defines the part as being in the top of the unit."/>
          <Annotation Term="OData.LongDescription" String="Top shall be used to specify the part location is in the top of the unit."/>
        </Member>
        <Member Name="Bottom">
          <Annotation Term="OData.Description" String="Defines the part as being in the bottom of the unit."/>
          <Annotation Term="OData.LongDescription" String="Top shall be used to specify the part location is in the bottom of the unit."/>
        </Member>
        <Member Name="Front">
          <Annotation Term="OData.Description" String="Defines the part as being in the front of the unit."/>
          <Annotation Term="OData.LongDescription" String="Top shall be used to specify the part location is in the front of the unit."/>
        </Member>
        <Member Name="Rear">
          <Annotation Term="OData.Description" String="Defines the part as being in the rear of the unit."/>
          <Annotation Term="OData.LongDescription" String="Top shall be used to specify the part location is in the rear of the unit."/>
        </Member>
        <Member Name="Left">
          <Annotation Term="OData.Description" String="Defines the part as being in the left of the unit."/>
          <Annotation Term="OData.LongDescription" String="Top shall be used to specify the part location is in the left of the unit."/>
        </Member>
        <Member Name="Right">
          <Annotation Term="OData.Description" String="Defines the part as being in the right of the unit."/>
          <Annotation Term="OData.LongDescription" String="Top shall be used to specify the part location is in the right of the unit."/>
        </Member>
        <Member Name="Middle">
          <Annotation Term="OData.Description" String="Defines the part as being in the middle of the unit."/>
          <Annotation Term="OData.LongDescription" String="Top shall be used to specify the part location is in the middle of the unit."/>
        </Member>
      </EnumType>

      <EnumType Name="Orientation">
        <Annotation Term="OData.Description" String="Defines a orientation for the ordering of the ordinal value of the part location."/>
        <Annotation Term="OData.LongDescription" String="Enumeration literals shall name the orientation for the location type ordering in determining the LocationOrdinalValue."/>
        <Member Name="FrontToBack">
          <Annotation Term="OData.Description" String="Defines the ordering for the LocationOrdinalValue is front to back."/>
          <Annotation Term="OData.LongDescription" String="This value shall be used to specify the ordering for LocationOrdinalValue is front to back."/>
        </Member>
        <Member Name="BackToFront">
          <Annotation Term="OData.Description" String="Defines the ordering for the LocationOrdinalValue is back to front."/>
          <Annotation Term="OData.LongDescription" String="This value shall be used to specify the ordering for LocationOrdinalValue is back to front."/>
        </Member>
        <Member Name="TopToBottom">
          <Annotation Term="OData.Description" String="Defines the ordering for the LocationOrdinalValue is top to bottom."/>
          <Annotation Term="OData.LongDescription" String="This value shall be used to specify the ordering for LocationOrdinalValue is top to bottom."/>
        </Member>
        <Member Name="BottomToTop">
          <Annotation Term="OData.Description" String="Defines the ordering for the LocationOrdinalValue is bottom to top."/>
          <Annotation Term="OData.LongDescription" String="This value shall be used to specify the ordering for LocationOrdinalValue is bottom to top."/>
        </Member>
        <Member Name="LeftToRight">
          <Annotation Term="OData.Description" String="Defines the ordering for the LocationOrdinalValue is left to right."/>
          <Annotation Term="OData.LongDescription" String="This value shall be used to specify the ordering for LocationOrdinalValue is left to right."/>
        </Member>
        <Member Name="RightToLeft">
          <Annotation Term="OData.Description" String="Defines the ordering for the LocationOrdinalValue is right to left."/>
          <Annotation Term="OData.LongDescription" String="This value shall be used to specify the ordering for LocationOrdinalValue is right to left."/>
        </Member>
      </EnumType>

      <ComplexType Name="PartLocation">
        <Annotation Term="OData.Description" String="The part location within the placement."/>
        <Annotation Term="OData.LongDescription" String="The value shall describe a location within a resource.  This representation shall be used to indicate the location within the Placement."/>
        <Property Name="ServiceLabel" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is the label of the part location, such as a silk screened name or a printed label."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the label assigned for service at the part location."/>
        </Property>
        <Property Name="LocationType" Type="Resource.v1_5_0.LocationType">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The type of location of the part, such as slot, bay, socket and slot."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a LocationType enumeration literal indicating the type of rack units in use."/>
        </Property>
        <Property Name="LocationOrdinalValue" Type="Edm.Int64" DefaultValue="0">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The number that represents the location of the part.  If LocationType is slot and this unit is in slot 2 then the LocationOrdinalValue will be 2."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the number that represents the location of the part based on the LocationType.  LocationOrdinalValue shall be measured based on the Orientation value starting with 0."/>
        </Property>
        <Property Name="Reference" Type="Resource.v1_5_0.Reference">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The reference point for the part location.  This is used to give guidance as to the general location of the part."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a Reference enumeration literal indicating the general location within the unit of the part."/>
        </Property>
        <Property Name="Orientation" Type="Resource.v1_5_0.Orientation">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The orientation for the ordering of the slot enumeration used by the LocationOrdinalValue property."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a Orientation enumeration literal indicating the orientation for the ordering used by the LocationOrdinalValue property."/>
        </Property>
      </ComplexType>

      <ComplexType Name="Location" BaseType="Resource.v1_3_0.Location">
        <Property Name="PartLocation" Type="Resource.v1_5_0.PartLocation">
          <Annotation Term="OData.Description" String="Postal address of the addressed resource."/>
          <Annotation Term="OData.LongDescription" String="The value shall be a postal address of the resource."/>
        </Property>
      </ComplexType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_5_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add an abstract base type for Identifier and Location, and to deprecate the versioned definition of IndicatorLED and PowerState to use an unversioned definition."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Resource.v1_6_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add GPS Coordinated to Location and enumerations for DurableNameFormat for NVMe fabric extension."/>

      <ComplexType Name="Location" BaseType="Resource.v1_5_0.Location">
        <Property Name="Longitude" Type="Edm.Decimal" DefaultValue="0">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The longitude resource in degrees."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the longitude of the resource specified in degrees using a decimal format and not minutes or seconds."/>
          <Annotation Term="Measures.Unit" String="deg"/>
        </Property>
        <Property Name="Latitude" Type="Edm.Decimal" DefaultValue="0">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The latitude resource."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the latitude of the resource specified in degrees using a decimal format and not minutes or seconds."/>
          <Annotation Term="Measures.Unit" String="deg"/>
        </Property>
        <Property Name="AltitudeMeters" Type="Edm.Decimal" DefaultValue="0">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The altitude of the resource in meters."/>
          <Annotation Term="OData.LongDescription" String="The altitude of the resource in meters."/>
          <Annotation Term="Measures.Unit" String="m"/>
        </Property>
      </ComplexType>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_RESOURCE_V1_HPP */
