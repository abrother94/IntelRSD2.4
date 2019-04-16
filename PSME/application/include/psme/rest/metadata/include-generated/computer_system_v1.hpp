#ifndef PSME_REST_METADATA_COMPUTER_SYSTEM_V1_HPP
#define PSME_REST_METADATA_COMPUTER_SYSTEM_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string ComputerSystem_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!--################################################################################       -->
<!--# Redfish Schema:  ComputerSystem  v1.5.0-->
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
    <edmx:Include Namespace="Validation.v1_0_0" Alias="Validation"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource"/>
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Chassis_v1.xml">
    <edmx:Include Namespace="Chassis"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/LogServiceCollection_v1.xml">
    <edmx:Include Namespace="LogServiceCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/EthernetInterfaceCollection_v1.xml">
    <edmx:Include Namespace="EthernetInterfaceCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/SimpleStorageCollection_v1.xml">
    <edmx:Include Namespace="SimpleStorageCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/ProcessorCollection_v1.xml">
    <edmx:Include Namespace="ProcessorCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/SecureBoot_v1.xml">
    <edmx:Include Namespace="SecureBoot"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Bios_v1.xml">
    <edmx:Include Namespace="Bios"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/MemoryCollection_v1.xml">
    <edmx:Include Namespace="MemoryCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/MemoryDomainCollection_v1.xml">
    <edmx:Include Namespace="MemoryDomainCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Manager_v1.xml">
    <edmx:Include Namespace="Manager"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/StorageCollection_v1.xml">
    <edmx:Include Namespace="StorageCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/PCIeDevice_v1.xml">
    <edmx:Include Namespace="PCIeDevice"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/PCIeFunction_v1.xml">
    <edmx:Include Namespace="PCIeFunction"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Endpoint_v1.xml">
    <edmx:Include Namespace="Endpoint"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/HostedStorageServices_v1.xml">
    <edmx:Include Namespace="HostedStorageServices"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/NetworkInterfaceCollection_v1.xml">
    <edmx:Include Namespace="NetworkInterfaceCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/ResourceBlock_v1.xml">
    <edmx:Include Namespace="ResourceBlock"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/BootOptionCollection_v1.xml">
    <edmx:Include Namespace="BootOptionCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Redundancy_v1.xml">
    <edmx:Include Namespace="Redundancy"/>
  </edmx:Reference>

  <edmx:DataServices>

    <!-- This schema defines a computer system and its respective properties.-->
    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="ComputerSystem" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="The ComputerSystem schema represents a general purpose machine or system (as opposed to an appliance) instance and the software-visible resources (items within the data plane) such as memory, CPU and other devices that can be accessed from that machine.  Details of those resources or subsystems are also linked through this resource."/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to represent resources that represent a computing system (as opposed to an appliance) in the Redfish specification."/>
        <Annotation Term="Capabilities.InsertRestrictions">
          <Record>
            <PropertyValue Property="Insertable" Bool="false"/>
          </Record>
        </Annotation>
        <Annotation Term="Capabilities.UpdateRestrictions">
          <Record>
            <PropertyValue Property="Updatable" Bool="true"/>
            <Annotation Term="OData.Description" String="A Computer System can be updated to change properties such as the AssetTag, IndicatorLED and some Boot parameters."/>
          </Record>
        </Annotation>
        <Annotation Term="Capabilities.DeleteRestrictions">
          <Record>
            <PropertyValue Property="Deletable" Bool="true"/>
            <Annotation Term="OData.Description" String="A Composed Computer System can be deleted when a client would like to retire it."/>
          </Record>
        </Annotation>
      </EntityType>

      <Action Name="Reset" IsBound="true">
        <Parameter Name="ComputerSystem" Type="ComputerSystem.v1_0_0.Actions"/>
        <Parameter Name="ResetType" Type="Resource.ResetType">
          <Annotation Term="OData.Description" String="The type of reset to be performed."/>
          <Annotation Term="OData.LongDescription" String="This parameter shall define the type of reset to be performed.  The service may accept a request without the parameter and perform an implementation specific default reset."/>
        </Parameter>
        <Annotation Term="OData.Description" String="This action is used to reset the system."/>
        <Annotation Term="OData.LongDescription" String="This action shall perform a reset of the ComputerSystem.  For systems which implement ACPI Power Button functionality, the PushPowerButton value shall perform or emulate an ACPI Power Button push.  The ForceOff value shall remove power from the system or perform an ACPI Power Button Override (commonly known as a 4-second hold of the Power Button).  The ForceRestart value shall perform a ForceOff action followed by a On action."/>
      </Action>

      <Action Name="SetDefaultBootOrder" IsBound="true">
        <Parameter Name="ComputerSystem" Type="ComputerSystem.v1_0_0.Actions"/>
        <Annotation Term="OData.Description" String="This action is used to set the Boot Order to the default settings."/>
        <Annotation Term="OData.LongDescription" String="This action shall perform a set the BootOrder to the default values."/>
      </Action>

      <EnumType Name="BootSource">
        <Member Name="None">
          <Annotation Term="OData.Description" String="Boot from the normal boot device."/>
        </Member>
        <Member Name="Pxe">
          <Annotation Term="OData.Description" String="Boot from the Pre-Boot EXecution (PXE) environment."/>
        </Member>
        <Member Name="Floppy">
          <Annotation Term="OData.Description" String="Boot from the floppy disk drive."/>
        </Member>
        <Member Name="Cd">
          <Annotation Term="OData.Description" String="Boot from the CD/DVD disc."/>
        </Member>
        <Member Name="Usb">
          <Annotation Term="OData.Description" String="Boot from a USB device as specified by the system BIOS."/>
        </Member>
        <Member Name="Hdd">
          <Annotation Term="OData.Description" String="Boot from a hard drive."/>
        </Member>
        <Member Name="BiosSetup">
          <Annotation Term="OData.Description" String="Boot to the BIOS Setup Utility."/>
        </Member>
        <Member Name="Utilities">
          <Annotation Term="OData.Description" String="Boot the manufacturer's Utilities program(s)."/>
        </Member>
        <Member Name="Diags">
          <Annotation Term="OData.Description" String="Boot the manufacturer's Diagnostics program."/>
        </Member>
        <Member Name="UefiShell">
          <Annotation Term="OData.Description" String="Boot to the UEFI Shell."/>
        </Member>
        <Member Name="UefiTarget">
          <Annotation Term="OData.Description" String="Boot to the UEFI Device specified in the UefiTargetBootSourceOverride property."/>
        </Member>
        <Member Name="SDCard">
          <Annotation Term="OData.Description" String="Boot from an SD Card."/>
        </Member>
        <Member Name="UefiHttp">
          <Annotation Term="OData.Description" String="Boot from a UEFI HTTP network location."/>
        </Member>
        <Member Name="RemoteDrive">
          <Annotation Term="OData.Description" String="Boot from a remote drive (e.g. iSCSI)."/>
        </Member>
        <Member Name="UefiBootNext">
          <Annotation Term="OData.Description" String="Boot to the UEFI Device specified in the BootNext property."/>
        </Member>
      </EnumType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_0_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.ComputerSystem">
        <Annotation Term="OData.Description" String="This schema defines a computer system and its respective properties.  A computer system represents a machine (physical or virtual) and the local resources such as memory, cpu and other devices that can be accessed from that machine."/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to represent resources that represent a computing system in the Redfish specification."/>
        <Property Name="SystemType" Type="ComputerSystem.v1_0_0.SystemType" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The type of computer system represented by this resource."/>
          <Annotation Term="OData.LongDescription" String="An enumeration that indicates the kind of system that this resource represents."/>
        </Property>
        <Property Name="Links" Type="ComputerSystem.v1_0_0.Links" Nullable="false">
          <Annotation Term="OData.Description" String="Contains references to other resources that are related to this resource."/>
          <Annotation Term="OData.LongDescription" String="The Links property, as described by the Redfish Specification, shall contain references to resources that are related to, but not contained by (subordinate to), this resource."/>
        </Property>
        <Property Name="AssetTag" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The user definable tag that can be used to track this computer system for inventory or other client purposes."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the value of the asset tag of the system."/>
        </Property>
        <Property Name="Manufacturer" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The manufacturer or OEM of this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain a value that represents the manufacturer of the system."/>
        </Property>
        <Property Name="Model" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The product name for this system, without the manufacturer name."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the information about how the manufacturer references this system. This is typically the product name, without the manufacturer name."/>
        </Property>
        <Property Name="SKU" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The manufacturer SKU for this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the Stock Keeping Unit (SKU) for the system."/>
        </Property>
        <Property Name="SerialNumber" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The serial number for this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the serial number for the system."/>
        </Property>
        <Property Name="PartNumber" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The part number for this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the part number for the system as defined by the manufacturer."/>
        </Property>
        <Property Name="UUID" Type="Resource.UUID">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The universal unique identifier (UUID) for this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be used to contain a universal unique identifier number for the system. RFC4122 describes methods that can be used to create the value. The value should be considered to be opaque. Client software should only treat the overall value as a universally unique identifier and should not interpret any sub-fields within the UUID. If the system supports SMBIOS, the value of the property should be formed by following the SMBIOS 2.6+ recommendation for converting the SMBIOS 16-byte UUID structure into the redfish canonical xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx string format so that the property value matches the byte order presented by current OS APIs such as WMI and dmidecode."/>
        </Property>
        <Property Name="HostName" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The DNS Host Name, without any domain information."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the host name for this system, as reported by the operating system or hypervisor.  This value is typically provided to the Manager by a service running in the host operating system."/>
        </Property>
        <Property Name="IndicatorLED" Type="ComputerSystem.v1_0_0.IndicatorLED">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The state of the indicator LED, used to identify the system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the indicator light state for the indicator light associated with this system."/>
        </Property>
        <Property Name="PowerState" Type="ComputerSystem.v1_0_0.PowerState">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is the current power state of the system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the power state of the system."/>
        </Property>
        <Property Name="Boot" Type="ComputerSystem.v1_0_0.Boot"  Nullable="false">
          <Annotation Term="OData.Description" String="Information about the boot settings for this system."/>
          <Annotation Term="OData.LongDescription" String="This object shall contain properties which describe boot information for the current resource. Changes to this object do not alter the BIOS persistent boot order configuration."/>
        </Property>
        <Property Name="BiosVersion" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The version of the system BIOS or primary system firmware."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the version string of the currently installed and running BIOS (for x86 systems).  For other systems, the value may contain a version string representing the primary system firmware."/>
        </Property>
        <Property Name="ProcessorSummary" Type="ComputerSystem.v1_0_0.ProcessorSummary"  Nullable="false">
          <Annotation Term="OData.Description" String="This object describes the central processors of the system in general detail."/>
          <Annotation Term="OData.LongDescription" String="This object shall contain properties which describe the central processors for the current resource."/>
        </Property>
        <Property Name="MemorySummary" Type="ComputerSystem.v1_0_0.MemorySummary"  Nullable="false">
          <Annotation Term="OData.Description" String="This object describes the central memory of the system in general detail."/>
          <Annotation Term="OData.LongDescription" String="This object shall contain properties which describe the central memory for the current resource."/>
        </Property>
        <Property Name="Actions" Type="ComputerSystem.v1_0_0.Actions" Nullable="false">
          <Annotation Term="OData.Description" String="The available actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
        </Property>
        <NavigationProperty Name="Processors" Type="ProcessorCollection.ProcessorCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the collection of Processors associated with this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type ProcessorCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="EthernetInterfaces" Type="EthernetInterfaceCollection.EthernetInterfaceCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the collection of Ethernet interfaces associated with this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type EthernetInterfaceCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="SimpleStorage" Type="SimpleStorageCollection.SimpleStorageCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the collection of storage devices associated with this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type SimpleStorageCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="LogServices" Type="LogServiceCollection.LogServiceCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the collection of Log Services associated with this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type LogServiceCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <Property Name="Status" Type="Resource.Status" Nullable="false"/>
      </EntityType>

      <ComplexType Name="Links" BaseType="Resource.Links">
        <Annotation Term="OData.Description" String="Contains references to other resources that are related to this resource."/>
        <Annotation Term="OData.LongDescription" String="This type, as described by the Redfish Specification, shall contain references to resources that are related to, but not contained by (subordinate to), this resource."/>
        <NavigationProperty Name="Chassis" Type="Collection(Chassis.Chassis)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the chassis in which this system is contained."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall reference a resource of type Chassis that represents the physical container associated with this resource."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="ManagedBy" Type="Collection(Manager.Manager)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the Managers responsible for this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall reference a resource of type manager that represents the resource with management responsibility for this resource."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="PoweredBy" Type="Collection(Resource.Item)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of ID[s] of resources that power this computer system. Normally the ID will be a chassis or a specific set of Power Supplies."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of IDs containing pointers consistent with JSON pointer syntax to the resource that powers this computer system."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="CooledBy" Type="Collection(Resource.Item)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of ID[s] of resources that cool this computer system. Normally the ID will be a chassis or a specific set of fans."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of IDs containing pointers consistent with JSON pointer syntax to the resource that powers this computer system."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The available actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain the available actions for this resource."/>
        <Property Name="Oem" Type="ComputerSystem.v1_0_0.OemActions" Nullable="false"/>
      </ComplexType>

      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="The available OEM specific actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional OEM actions for this resource."/>
      </ComplexType>

      <EnumType Name="SystemType">
        <Member Name="Physical">
          <Annotation Term="OData.Description" String="A computer system."/>
          <Annotation Term="OData.LongDescription" String="A SystemType of Physical is typically used when representating the hardware aspects of a system such as is done by a management controller."/>
        </Member>
        <Member Name="Virtual">
          <Annotation Term="OData.Description" String="A virtual machine instance running on this system."/>
          <Annotation Term="OData.LongDescription" String="A SystemType of Virtual is typically used when representating a system that is actually a virtual machine instance."/>
        </Member>
        <Member Name="OS">
          <Annotation Term="OData.Description" String="An operating system instance."/>
          <Annotation Term="OData.LongDescription" String="A SystemType of OS is typically used when representating an OS or hypervisor view of the system."/>
        </Member>
        <Member Name="PhysicallyPartitioned">
          <Annotation Term="OData.Description" String="A hardware-based partition of a computer system."/>
          <Annotation Term="OData.LongDescription" String="A SystemType of PhysicallyPartition is typically used when representating a single system constructed from one or more physical systems via a firmware or hardware-based service."/>
        </Member>
        <Member Name="VirtuallyPartitioned">
          <Annotation Term="OData.Description" String="A virtual or software-based partition of a computer system."/>
          <Annotation Term="OData.LongDescription" String="A SystemType of VirtuallyPartition is typically used when representating a single system constructed from one or more virtual systems via a software-based service."/>
        </Member>
        <Member Name="Composed">
          <Annotation Term="OData.Description" String="A computer system that has been created by binding resource blocks together."/>
          <Annotation Term="OData.LongDescription" String="A SystemType of Composed is typically used when representating a single system constructed from disaggregated resource via the Redfish Composition service."/>
        </Member>
      </EnumType>

      <!-- These are all supported LED statuses. -->
      <EnumType Name="IndicatorLED">
        <Member Name="Unknown">
          <Annotation Term="OData.Description" String="The state of the Indicator LED cannot be determined."/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated in favor of returning null if the state is unknown."/>
          <Annotation Term="OData.LongDescription" String="This value shall represent the Indicator LED is in an unknown state.  The service shall reject PATCH or PUT requests containing this value by returning HTTP 400 (Bad Request)."/>
        </Member>
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
          <Annotation Term="OData.Description" String="The system is powered on."/>
        </Member>
        <Member Name="Off">
          <Annotation Term="OData.Description" String="The system is powered off, although some components may continue to have AUX power such as management controller."/>
        </Member>
        <Member Name="PoweringOn">
          <Annotation Term="OData.Description" String="A temporary state between Off and On. This temporary state can be very short."/>
        </Member>
        <Member Name="PoweringOff">
          <Annotation Term="OData.Description" String="A temporary state between On and Off. The power off action can take time while the OS is in the shutdown process."/>
        </Member>
      </EnumType>

      <ComplexType Name="Boot">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This object contains the boot information for the current resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain properties which describe boot information for a system."/>
        <Property Name="BootSourceOverrideTarget" Type="ComputerSystem.BootSource">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The current boot source to be used at next boot instead of the normal boot device, if BootSourceOverrideEnabled is true."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the source to boot the system from, overriding the normal boot order. The valid values for this property are specified through the Redfish.AllowableValues annotation. Pxe indicates to PXE boot from the primary NIC; Floppy, Cd, Usb, Hdd indicates to boot from their devices respectively. BiosSetup indicates to boot into the native BIOS screen setup. Utilities and Diags indicate to boot from the local utilities or diags partitions. UefiTarget indicates to boot from the UEFI device path found in UefiTargetBootSourceOverride. UefiBootNext indicates to boot from the UEFI BootOptionReference found in BootNext."/>
        </Property>
        <Property Name="BootSourceOverrideEnabled" Type="ComputerSystem.v1_0_0.BootSourceOverrideEnabled">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Describes the state of the Boot Source Override feature."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be Once if this is a one time boot override and Continuous if this selection should remain active until cancelled. If the property value is set to Once, the value will be reset back to Disabled after the BootSourceOverrideTarget actions have been completed."/>
        </Property>
        <Property Name="UefiTargetBootSourceOverride" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="This property is the UEFI Device Path of the device to boot from when BootSourceOverrideTarget is UefiTarget."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the UEFI device path of the override boot target. The valid values for this property are specified through the Redfish.AllowableValues annotation. BootSourceOverrideEnabled = Continuous is not supported for UEFI Boot Source Override as this setting is defined in UEFI as a one time boot only."/>
        </Property>
      </ComplexType>

      <EnumType Name="BootSource">
        <Annotation Term="Redfish.Deprecated" String="This definition has been moved to the unversioned namespace so that external references can pick up changes over time."/>
        <Member Name="None">
          <Annotation Term="OData.Description" String="Boot from the normal boot device."/>
        </Member>
        <Member Name="Pxe">
          <Annotation Term="OData.Description" String="Boot from the Pre-Boot EXecution (PXE) environment."/>
        </Member>
        <Member Name="Floppy">
          <Annotation Term="OData.Description" String="Boot from the floppy disk drive."/>
        </Member>
        <Member Name="Cd">
          <Annotation Term="OData.Description" String="Boot from the CD/DVD disc."/>
        </Member>
        <Member Name="Usb">
          <Annotation Term="OData.Description" String="Boot from a USB device as specified by the system BIOS."/>
        </Member>
        <Member Name="Hdd">
          <Annotation Term="OData.Description" String="Boot from a hard drive."/>
        </Member>
        <Member Name="BiosSetup">
          <Annotation Term="OData.Description" String="Boot to the BIOS Setup Utility."/>
        </Member>
        <Member Name="Utilities">
          <Annotation Term="OData.Description" String="Boot the manufacturer's Utilities program(s)."/>
        </Member>
        <Member Name="Diags">
          <Annotation Term="OData.Description" String="Boot the manufacturer's Diagnostics program."/>
        </Member>
        <Member Name="UefiShell">
          <Annotation Term="OData.Description" String="Boot to the UEFI Shell."/>
        </Member>
        <Member Name="UefiTarget">
          <Annotation Term="OData.Description" String="Boot to the UEFI Device specified in the UefiTargetBootSourceOverride property."/>
        </Member>
        <Member Name="SDCard">
          <Annotation Term="OData.Description" String="Boot from an SD Card."/>
        </Member>
        <Member Name="UefiHttp">
          <Annotation Term="OData.Description" String="Boot from a UEFI HTTP network location."/>
        </Member>
        <Member Name="RemoteDrive">
          <Annotation Term="OData.Description" String="Boot from a remote drive (e.g. iSCSI)."/>
        </Member>
        <Member Name="UefiBootNext">
          <Annotation Term="OData.Description" String="Boot to the UEFI Device specified in the BootNext property."/>
        </Member>
      </EnumType>

      <EnumType Name="BootSourceOverrideEnabled">
        <Member Name="Disabled">
          <Annotation Term="OData.Description" String="The system will boot normally."/>
        </Member>
        <Member Name="Once">
          <Annotation Term="OData.Description" String="On its next boot cycle, the system will boot (one time) to the Boot Source Override Target. The value of BootSourceOverrideEnabled is then reset back to Disabled."/>
        </Member>
        <Member Name="Continuous">
          <Annotation Term="OData.Description" String="The system will boot to the target specified in the BootSourceOverrideTarget until this property is set to Disabled."/>
        </Member>
      </EnumType>

      <ComplexType Name="ProcessorSummary">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This object describes the central processors of the system in general detail."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain properties which describe the central processors for a system."/>
        <Property Name="Count" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The number of physical processors in the system."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the number of physical central processors in the system."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
        <Property Name="Model" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The processor model for the primary or majority of processors in this system."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the processor model for the central processors in the system, per the description in the Processor Information - Processor Family section of the SMBIOS Specification DSP0134 2.8 or later."/>
        </Property>
        <Property Name="Status" Type="Resource.Status"  Nullable="false"/>
      </ComplexType>

      <ComplexType Name="MemorySummary">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This object describes the memory of the system in general detail."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain properties which describe the central memory for a system."/>
        <Property Name="TotalSystemMemoryGiB" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The total configured operating system-accessible memory (RAM), measured in GiB."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the amount of configured system general purpose volatile (RAM) memory as measured in gibibytes."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
        <Property Name="Status" Type="Resource.Status"  Nullable="false"/>
      </ComplexType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_0_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_0_0.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_0_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_0_1.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_0_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_0_2.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_0_4">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_0_3.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_0_5">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated and to remove the Nullable facet on NavigationProperties of type Collection."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_0_4.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_0_6">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_0_5.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_0_7">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add non-normative LongDescriptions to the EnumType SystemType, and to fix the description of ProcessorSummary Count and Model.  It was also created to correct the Descriptions and LongDescriptions used in the defined Actions."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_0_6.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_1_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_0_2.ComputerSystem">
        <Property Name="TrustedModules" Type="Collection(ComputerSystem.v1_1_0.TrustedModules)" Nullable="false">
          <Annotation Term="OData.Description" String="This object describes the array of Trusted Modules in the system."/>
          <Annotation Term="OData.LongDescription" String="This object shall contain an array of objects with properties which describe the truted modules for the current resource."/>
        </Property>
        <NavigationProperty Name="SecureBoot" Type="SecureBoot.SecureBoot" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the UEFI SecureBoot resource associated with this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a resource of type SecureBoot."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="Bios" Type="Bios.Bios" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the BIOS settings associated with this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a resource of type Bios that lists the BIOS settings for this system."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="Memory" Type="MemoryCollection.MemoryCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the collection of Memory associated with this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type MemoryCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="Storage" Type="StorageCollection.StorageCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the collection of storage devices associated with this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type StorageCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </EntityType>

      <ComplexType Name="MemorySummary" BaseType="ComputerSystem.v1_0_0.MemorySummary">
        <Property Name="MemoryMirroring" Type="ComputerSystem.v1_1_0.MemoryMirroring">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The ability and type of memory mirroring supported by this system."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the ability and type of memory mirring supported by this system."/>
        </Property>
      </ComplexType>

      <EnumType Name="MemoryMirroring">
        <Member Name="System">
          <Annotation Term="OData.Description" String="The system supports DIMM mirroring at the System level.  Individual DIMMs are not paired for mirroring in this mode."/>
        </Member>
        <Member Name="DIMM">
          <Annotation Term="OData.Description" String="The system supports DIMM mirroring at the DIMM level.  Individual DIMMs can be mirrored."/>
        </Member>
        <Member Name="Hybrid">
          <Annotation Term="OData.Description" String="The system supports a hybrid mirroring at the system and DIMM levels.  Individual DIMMs can be mirrored."/>
        </Member>
        <Member Name="None">
          <Annotation Term="OData.Description" String="The system does not support DIMM mirroring."/>
        </Member>
      </EnumType>

      <ComplexType Name="Boot" BaseType="ComputerSystem.v1_0_0.Boot">
        <Property Name="BootSourceOverrideMode" Type="ComputerSystem.v1_1_0.BootSourceOverrideMode">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The BIOS Boot Mode (either Legacy or UEFI) to be used when BootSourceOverrideTarget boot source is booted from."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be Legacy for non-UEFI BIOS boot or UEFI for UEFI boot from boot source specified in BootSourceOverrideTarget property."/>
        </Property>
      </ComplexType>

      <EnumType Name="BootSourceOverrideMode">
        <Member Name="Legacy">
          <Annotation Term="OData.Description" String="The system will boot in non-UEFI boot mode to the Boot Source Override Target."/>
        </Member>
        <Member Name="UEFI">
          <Annotation Term="OData.Description" String="The system will boot in UEFI boot mode to the Boot Source Override Target."/>
        </Member>
      </EnumType>

      <ComplexType Name="TrustedModules">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This object describes the inventory of a Trusted Modules installed in the system."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe a truted module for a system."/>
        <Property Name="FirmwareVersion" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The firmware version of this Trusted Module."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the firwmare version as defined by the manufacturer for the Trusted Module."/>
        </Property>
        <Property Name="InterfaceType" Type="ComputerSystem.v1_1_0.InterfaceType">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This property indicates the interface type of the Trusted Module."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the interface type of the installed Trusted Module."/>
        </Property>
        <Property Name="Status" Type="Resource.Status"  Nullable="false"/>
        <Property Name="Oem" Type="Resource.Oem" Nullable="false"/>
      </ComplexType>

      <EnumType Name="InterfaceType">
        <Member Name="TPM1_2">
          <Annotation Term="OData.Description" String="Trusted Platform Module (TPM) 1.2."/>
        </Member>
        <Member Name="TPM2_0">
          <Annotation Term="OData.Description" String="Trusted Platform Module (TPM) 2.0."/>
        </Member>
        <Member Name="TCM1_0">
          <Annotation Term="OData.Description" String="Trusted Cryptography Module (TCM) 1.0."/>
        </Member>
      </EnumType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_1_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_1_0.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_1_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_1_1.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_1_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to remove the Nullable facet on NavigationProperties of type Collection."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_1_2.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_1_4">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_1_3.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_1_5">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add non-normative LongDescriptions to the EnumType SystemType, and to fix the description of ProcessorSummary Count and Model.  It was also created to correct the Descriptions and LongDescriptions used in the defined Actions."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_1_4.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_2_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_1_1.ComputerSystem">
        <Property Name="HostingRoles" Type="Collection(ComputerSystem.v1_2_0.HostingRole)" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The hosing roles that this computer system supports."/>
          <Annotation Term="OData.LongDescription" String="The values of this collection shall be the hosting roles supported by this computer system."/>
        </Property>
        <NavigationProperty Name="PCIeDevices" Type="Collection(PCIeDevice.PCIeDevice)" ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to a collection of PCIe Devices used by this computer system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type PCIeDevice."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="PCIeFunctions" Type="Collection(PCIeFunction.PCIeFunction)" ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to a collection of PCIe Functions used by this computer system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type PCIeFunction."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <Property Name="HostedServices" Type="ComputerSystem.v1_2_0.HostedServices" Nullable="false">
          <Annotation Term="OData.Description" String="The services that this computer system supports."/>
          <Annotation Term="OData.LongDescription" String="The values of this collection shall describe services supported by this computer system."/>
        </Property>
        <NavigationProperty Name="MemoryDomains" Type="MemoryDomainCollection.MemoryDomainCollection" ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the collection of Memory Domains associated with this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type MemoryDomainCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </EntityType>

      <ComplexType Name="HostedServices">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This object describes services that may be running or installed on the system."/>
        <Annotation Term="OData.LongDescription" String="The values of this collection shall describe services supported by a computer system."/>
        <NavigationProperty Name="StorageServices" Type="HostedStorageServices.HostedStorageServices" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to a collection of storage services supported by this computer system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type HostedStorageServices."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <Property Name="Oem" Type="Resource.Oem" Nullable="false"/>
      </ComplexType>

      <EnumType Name="HostingRole">
       <Annotation Term="OData.Description" String="The enumerations of HostingRoles specify different features that the hosting ComputerSystem supports."/>
       <Member Name="ApplicationServer">
          <Annotation Term="OData.Description" String="The system hosts functionality that supports general purpose applications."/>
        </Member>
        <Member Name="StorageServer">
          <Annotation Term="OData.Description" String="The system hosts functionality that supports the system acting as a storage server."/>
        </Member>
        <Member Name="Switch">
          <Annotation Term="OData.Description" String="The system hosts functionality that supports the system acting as a switch."/>
        </Member>
      </EnumType>

      <ComplexType Name="Links" BaseType="ComputerSystem.v1_0_0.Links">
        <NavigationProperty Name="Endpoints" Type="Collection(Endpoint.Endpoint)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the endpoints that connect to this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a reference to the resources that this system is associated with and shall reference a resource of type Endpoint."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_2_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_2_0.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_2_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated and to remove the Nullable facet on NavigationProperties of type Collection."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_2_1.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_2_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_2_2.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_2_4">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add non-normative LongDescriptions to the EnumType SystemType, and to fix the description of ProcessorSummary Count and Model.  It was also created to correct the Descriptions and LongDescriptions used in the defined Actions."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_2_3.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_3_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_2_1.ComputerSystem">
        <NavigationProperty Name="NetworkInterfaces" Type="NetworkInterfaceCollection.NetworkInterfaceCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the collection of Network Interfaces associated with this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type NetworkInterfaceCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </EntityType>

      <ComplexType Name="TrustedModules" BaseType="ComputerSystem.v1_1_0.TrustedModules">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="FirmwareVersion2" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The 2nd firmware version of this Trusted Module, if applicable."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the 2nd firmware version, if applicable, as defined by the manufacturer for the Trusted Module."/>
        </Property>
        <Property Name="InterfaceTypeSelection" Type="ComputerSystem.v1_3_0.InterfaceTypeSelection">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The Interface Type selection supported by this Trusted Module."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the Interface Type Selection method (for example to switch between TPM1_2 and TPM2_0) that is supported by this TrustedModule."/>
        </Property>
      </ComplexType>

      <EnumType Name="InterfaceTypeSelection">
       <Annotation Term="OData.Description" String="The enumerations of InterfaceTypeSelection specify the method for switching the TrustedModule InterfaceType, for instance between TPM1_2 and TPM2_0, if supported."/>
       <Member Name="None">
          <Annotation Term="OData.Description" String="The TrustedModule does not support switching the InterfaceType."/>
        </Member>
        <Member Name="FirmwareUpdate">
          <Annotation Term="OData.Description" String="The TrustedModule supports switching InterfaceType via a firmware update."/>
        </Member>
        <Member Name="BiosSetting">
          <Annotation Term="OData.Description" String="The TrustedModule supports switching InterfaceType via platform software, such as a BIOS configuration Attribute."/>
        </Member>
        <Member Name="OemMethod">
          <Annotation Term="OData.Description" String="The TrustedModule supports switching InterfaceType via an OEM proprietary mechanism."/>
        </Member>
      </EnumType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_3_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated and to remove the Nullable facet on NavigationProperties of type Collection."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_3_0.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_3_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_3_1.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_3_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add non-normative LongDescriptions to the EnumType SystemType, and to fix the description of ProcessorSummary Count and Model.  It was also created to correct the Descriptions and LongDescriptions used in the defined Actions."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_3_2.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_4_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_3_1.ComputerSystem"/>

      <ComplexType Name="MemorySummary" BaseType="ComputerSystem.v1_1_0.MemorySummary">
        <Property Name="TotalSystemPersistentMemoryGiB" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The total configured, system-accessible persistent memory, measured in GiB."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the total amount of configured persistent memory available to the system as measured in gibibytes."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
      </ComplexType>

      <ComplexType Name="Links" BaseType="ComputerSystem.v1_2_0.Links">
        <NavigationProperty Name="ResourceBlocks" Type="Collection(ResourceBlock.ResourceBlock)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="An array of references to the Resource Blocks that are used in this Computer System."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of references of type ResourceBlock that show the Resource Blocks that are used in this Computer System."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_4_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_4_0.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_4_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add non-normative LongDescriptions to the EnumType SystemType, and to fix the description of ProcessorSummary Count and Model.  It was also created to correct the Descriptions and LongDescriptions used in the defined Actions."/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_4_1.ComputerSystem"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="ComputerSystem.v1_5_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="ComputerSystem" BaseType="ComputerSystem.v1_4_2.ComputerSystem">
        <NavigationProperty Name="Redundancy" Type="Collection(Redundancy.Redundancy)" ContainsTarget="true">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to a collection of Redundancy entities that each name a set of computer systems that provide redundancy for this ComputerSystem."/>
          <Annotation Term="OData.LongDescription" String="If present, each entry shall reference a redundancy entity that specifies a kind and level of redundancy and a collection (RedundancySet) of other ComputerSystems that provide the specified redundancy to this ComputerSystem."/>
          <Annotation Term="OData.AutoExpand"/>
        </NavigationProperty>
        <Property Name="HostWatchdogTimer" Type="ComputerSystem.v1_5_0.WatchdogTimer" Nullable="false">
          <Annotation Term="OData.Description" String="This object describes the Host Watchdog Timer functionality for this system."/>
          <Annotation Term="OData.LongDescription" String="This object shall contain properties which describe the host watchdog timer functionality for this ComputerSystem."/>
        </Property>
        <Property Name="SubModel" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The sub-model for this system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the information about the sub-model (or config) of the system. This shall not include the model/product name or the manufacturer name."/>
        </Property>
      </EntityType>

      <ComplexType Name="Boot" BaseType="ComputerSystem.v1_1_0.Boot">
        <NavigationProperty Name="BootOptions" Type="BootOptionCollection.BootOptionCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the collection of the UEFI Boot Options associated with this Computer System."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type BootOptionCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <Property Name="BootNext" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="This property is the BootOptionReference of the Boot Option to perform a one time boot from when BootSourceOverrideTarget is UefiBootNext."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the BootOptionReference of the UEFI Boot Option for one time boot, as defined by the UEFI Specification. The valid values for this property are specified in the values of the BootOrder array. BootSourceOverrideEnabled = Continuous is not supported for UEFI BootNext as this setting is defined in UEFI as a one-time boot only."/>
        </Property>
        <Property Name="BootOrder" Type="Collection(Edm.String)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Ordered array of BootOptionReference strings representing the persistent Boot Order associated with this computer system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an ordered array of BootOptionReference strings representing the persistent Boot Order of this computer system. For UEFI systems, this is the UEFI BootOrder as defined by the UEFI Specification."/>
        </Property>
      </ComplexType>

      <ComplexType Name="ProcessorSummary" BaseType="ComputerSystem.v1_0_0.ProcessorSummary">
        <Property Name="LogicalProcessorCount" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The number of logical processors in the system."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the number of logical central processors in the system."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
      </ComplexType>

      <ComplexType Name="Links" BaseType="ComputerSystem.v1_4_0.Links">
        <NavigationProperty Name="ConsumingComputerSystems" Type="Collection(ComputerSystem.ComputerSystem)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to ComputerSystems that are realized, in whole or in part, from this ComputerSystem."/>
          <Annotation Term="OData.LongDescription" String="The value shall be an array of references to ComputerSystems that are realized, in whole or in part, from this ComputerSystem."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="SupplyingComputerSystems" Type="Collection(ComputerSystem.ComputerSystem)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to ComputerSystems that contribute, in whole or in part, to the implementation of this ComputerSystem."/>
          <Annotation Term="OData.LongDescription" String="The value shall be an array of references to ComputerSystems that contribute, in whole or in part, to the implementation of this ComputerSystem."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="WatchdogTimer">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This type describes the Host Watchdog Timer functionality for this system."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain properties which describe the host watchdog timer functionality for this ComputerSystem."/>
        <Property Name="FunctionEnabled" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="This indicates if the Host Watchdog Timer functionality has been enabled. Additional host-based software is necessary to activate the timer function."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall indicate whether the host watchdog timer functionality has been enabled or not.  This property indicates only that the functionality is enabled or disabled by the user, and updates to this property shall not initiate a watchdog timer countdown."/>
          <Annotation Term="Redfish.Required"/>
        </Property>
        <Property Name="WarningAction" Type="ComputerSystem.v1_5_0.WatchdogWarningActions">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="This property indicates the action to perform when the Watchdog Timer is close (typically 3-10 seconds) to reaching its timeout value."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the action to perform prior to the expiration of the Watchdog Timer. This action typically occurs 3-10 seconds prior to the timeout value, but the exact timing is dependent on the implementation."/>
        </Property>
        <Property Name="TimeoutAction" Type="ComputerSystem.v1_5_0.WatchdogTimeoutActions">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="This property indicates the action to perform when the Watchdog Timer reaches its timeout value."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the action to perform upon the  expiration of the Watchdog Timer."/>
          <Annotation Term="Redfish.Required"/>
        </Property>
        <Property Name="Status" Type="Resource.Status" Nullable="false"/>
        <Property Name="Oem" Type="Resource.Oem" Nullable="false"/>
      </ComplexType>

      <EnumType Name="WatchdogWarningActions">
        <Annotation Term="OData.Description" String="The enumerations of WatchdogWarningActions specify the choice of action to take when the Host Watchdog Timer is close (typically 3-10 seconds) to reaching its timeout value."/>
        <Member Name="None">
          <Annotation Term="OData.Description" String="No action taken."/>
        </Member>
        <Member Name="DiagnosticInterrupt">
          <Annotation Term="OData.Description" String="Raise a (typically non-maskable) Diagnostic Interrupt."/>
        </Member>
        <Member Name="SMI">
          <Annotation Term="OData.Description" String="Raise a Systems Management Interrupt (SMI)."/>
        </Member>
        <Member Name="MessagingInterrupt">
          <Annotation Term="OData.Description" String="Raise a legacy IPMI messaging interrupt."/>
        </Member>
        <Member Name="SCI">
          <Annotation Term="OData.Description" String="Raise an interrupt using the ACPI System Control Interrupt (SCI)."/>
        </Member>
        <Member Name="OEM">
          <Annotation Term="OData.Description" String="Perform an OEM-defined action."/>
        </Member>
      </EnumType>

      <EnumType Name="WatchdogTimeoutActions">
        <Annotation Term="OData.Description" String="The enumerations of WatchdogTimeoutActions specify the choice of action to take when the Host Watchdog Timer reaches its timeout value."/>
        <Member Name="None">
          <Annotation Term="OData.Description" String="No action taken."/>
        </Member>
        <Member Name="ResetSystem">
          <Annotation Term="OData.Description" String="Reset the system."/>
        </Member>
        <Member Name="PowerCycle">
          <Annotation Term="OData.Description" String="Power cycle the system."/>
        </Member>
        <Member Name="PowerDown">
          <Annotation Term="OData.Description" String="Power down the system."/>
        </Member>
        <Member Name="OEM">
          <Annotation Term="OData.Description" String="Perform an OEM-defined action."/>
        </Member>
      </EnumType>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_COMPUTER_SYSTEM_V1_HPP */
