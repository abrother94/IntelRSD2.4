#ifndef PSME_REST_METADATA_MEMORY_V1_HPP
#define PSME_REST_METADATA_MEMORY_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string Memory_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!--################################################################################       -->
<!--# Redfish Schema:  Memory  v1.6.0-->
<!--#                                                                                      -->
<!--# For a detailed change log, see the README file contained in the DSP8010 bundle,      -->
<!--# available at http://www.dmtf.org/standards/redfish                                   -->
<!--# Copyright 2014-2018 DMTF.                                                            -->
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
    <edmx:Include Namespace="Validation.v1_0_0" Alias="Validation"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Capabilities.V1.xml">
    <edmx:Include Namespace="Org.OData.Capabilities.V1" Alias="Capabilities"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource"/>
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/MemoryMetrics_v1.xml">
    <edmx:Include Namespace="MemoryMetrics"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Chassis_v1.xml">
    <edmx:Include Namespace="Chassis"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Assembly_v1.xml">
    <edmx:Include Namespace="Assembly"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="Memory" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="This is the schema definition of the Memory and its configuration."/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to represent the Memory in a Redfish implementation."/>
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="Capabilities.InsertRestrictions">
          <Record>
            <PropertyValue Property="Insertable" Bool="false"/>
          </Record>
        </Annotation>
        <Annotation Term="Capabilities.UpdateRestrictions">
          <Record>
            <PropertyValue Property="Updatable" Bool="false"/>
          </Record>
        </Annotation>
        <Annotation Term="Capabilities.DeleteRestrictions">
          <Record>
            <PropertyValue Property="Deletable" Bool="false"/>
          </Record>
        </Annotation>
        <Annotation Term="Redfish.Uris">
          <Collection>
            <String>/redfish/v1/Systems/{ComputerSystemId}/Memory/{MemoryId}</String>
            <String>/redfish/v1/CompositionService/ResourceBlocks/{ResourceBlockId}/Memory/{MemoryId}</String>
            <String>/redfish/v1/CompositionService/ResourceBlocks/{ResourceBlockId}/Systems/{ComputerSystemId}/Memory/{MemoryId}</String>
          </Collection>
        </Annotation>
      </EntityType>

      <Action Name="UnlockUnit" IsBound="true">
        <Annotation Term="OData.Description" String="This defines the action for unlocking given regions."/>
        <Annotation Term="OData.LongDescription" String="This action shall apply the supplied passphrase to the supplied region for the purpose of unlocking the given regions."/>
        <Parameter Name="Memory" Type="Memory.v1_0_0.Actions"/>
        <Parameter Name="RegionId" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Description" String="Memory region ID for which this action to be applied."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the Memory region ID for which this action to be applied."/>
        </Parameter>
        <Parameter Name="Passphrase" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Description" String="Passphrase for doing the operation."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the passphrase used in this actionn."/>
        </Parameter>
      </Action>

      <Action Name="SecureEraseUnit" IsBound="true">
        <Annotation Term="OData.Description" String="This defines the action for securely erasing given regions using the NIST SP800-88 Purge: Cryptograhic Erase."/>
        <Annotation Term="OData.LongDescription" String="This action shall securely erase the supplied region provided the supplied passphrase matches that of the given region using the NIST SP800-88 Purge: Cryptographic Erase. Use the OverwriteUnit method to perform NIST SP800-88 Purge: Overwrite."/>
        <Parameter Name="Memory" Type="Memory.v1_0_0.Actions"/>
        <Parameter Name="RegionId" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Description" String="Memory region ID for which this action to be applied."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the Memory region ID for which this action to be applied."/>
        </Parameter>
        <Parameter Name="Passphrase" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Description" String="Passphrase for doing the operation."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the passphrase used in this action."/>
        </Parameter>
      </Action>

      <Action Name="OverwriteUnit" IsBound="true">
        <Annotation Term="OData.Description" String="This defines the action for securely erasing given regions using the NIST SP800-88 Purge: Overwrite."/>
        <Annotation Term="OData.LongDescription" String="This action shall securely erase the supplied region provided the supplied passphrase matches that of the given region using the NIST SP800-88 Purge: Overwrite. Use the SecureEraseUnit method to perform NIST SP800-88 Purge: Cryptographic Erase."/>
        <Parameter Name="Memory" Type="Memory.v1_0_0.Actions"/>
        <Parameter Name="RegionId" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Description" String="Memory region ID for which this action to be applied."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the Memory region ID for which this action to be applied."/>
        </Parameter>
        <Parameter Name="Passphrase" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Description" String="Passphrase for doing the operation."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the passphrase used in this action."/>
        </Parameter>
      </Action>

      <Action Name="SetPassphrase" IsBound="true">
        <Annotation Term="OData.Description" String="Set passphrase for the given regions."/>
        <Annotation Term="OData.LongDescription" String="This action shall apply the supplied passphrase to the supplied region."/>
        <Parameter Name="Memory" Type="Memory.v1_0_0.Actions"/>
        <Parameter Name="RegionId" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Description" String="Memory region ID for which this action to be applied."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the Memory region ID for which this action to be applied."/>
        </Parameter>
        <Parameter Name="Passphrase" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Description" String="Passphrase for doing the operation."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the passphrase used in this action."/>
        </Parameter>
      </Action>

      <Action Name="DisablePassphrase" IsBound="true">
        <Annotation Term="OData.Description" String="Disable passphrase for given regions."/>
        <Annotation Term="OData.LongDescription" String="This action shall disaple the need for passphrases on the supplied region provided the supplied passphrase matches that of the region."/>
        <Parameter Name="Memory" Type="Memory.v1_0_0.Actions"/>
        <Parameter Name="RegionId" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Description" String="Memory region ID for which this action to be applied."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the Memory region ID for which this action to be applied."/>
        </Parameter>
        <Parameter Name="Passphrase" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Description" String="Passphrase for doing the operation."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the passphrase used in this action."/>
        </Parameter>
      </Action>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_0_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="Memory" BaseType="Memory.Memory">
        <Annotation Term="OData.Description" String="This is the schema definition for definition of a Memory and its configuration."/>
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>

        <Property Name="MemoryType" Type="Memory.v1_0_0.MemoryType">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The type of Memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the type of Memory represented by this resource."/>
        </Property>
        <Property Name="MemoryDeviceType" Type="Memory.v1_0_0.MemoryDeviceType">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Type details of the Memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the Memory Device Type as defined by SMBIOS."/>
        </Property>
        <Property Name="BaseModuleType" Type="Memory.v1_0_0.BaseModuleType">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The base module type of Memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the base module type of Memory."/>
        </Property>
        <Property Name="MemoryMedia" Type="Collection(Memory.v1_0_0.MemoryMedia)" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Media of this Memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the media types of this Memory."/>
        </Property>
        <Property Name="CapacityMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Memory Capacity in mebibytes (MiB)."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the Memory capacity in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="DataWidthBits" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Data Width in bits."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the data width in bits."/>
        </Property>
        <Property Name="BusWidthBits" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Bus Width in bits."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the bus width in bits."/>
        </Property>
        <Property Name="Manufacturer" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The Memory manufacturer."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain a string which identifies the manufacturer of the Memory."/>
        </Property>
        <Property Name="SerialNumber" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The product serial number of this device."/>
          <Annotation Term="OData.LongDescription" String="This property shall indicate the serial number as provided by the manufacturer of this Memory."/>
        </Property>
        <Property Name="PartNumber" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The product part number of this device."/>
          <Annotation Term="OData.LongDescription" String="This property shall indicate the part number as provided by the manufacturer of this Memory."/>
        </Property>
        <Property Name="AllowedSpeedsMHz" Type="Collection(Edm.Int64)" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Speed bins supported by this Memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the speed supported by this Memory."/>
          <Annotation Term="Measures.Unit" String="MHz"/>
        </Property>
        <Property Name="FirmwareRevision" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Revision of firmware on the Memory controller."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the revision of firmware on the Memory controller."/>
        </Property>
        <Property Name="FirmwareApiVersion" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Version of API supported by the firmware."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the version of API supported by the firmware."/>
        </Property>
        <Property Name="FunctionClasses" Type="Collection(Edm.String)" Nullable="false">
          <Annotation Term="Redfish.Deprecated" String="This property has been Deprecated in favor of Memory.v1_0_0.Memory.OperatingMemoryModes or Memory.v1_0_0.Memory.RegionSet.MemoryClassification."/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Function Classes by the Memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the function classes by the Memory."/>
        </Property>
        <Property Name="VendorID" Type="Edm.String">
          <Annotation Term="Redfish.Deprecated" String="This property has been Deprecated in favor of Memory.v1_3_0.ModuleManufacturerID"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Vendor ID."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the vendor ID of the Memory."/>
        </Property>
        <Property Name="DeviceID" Type="Edm.String">
          <Annotation Term="Redfish.Deprecated" String="This property has been Deprecated in favor of Memory.v1_3_0.ModuleProductID"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Device ID."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the device ID of the Memory."/>
        </Property>
        <Property Name="SubsystemVendorID" Type="Edm.String">
          <Annotation Term="Redfish.Deprecated" String="This property has been Deprecated in favor of Memory.v1_3_0.MemorySubsystemControllerManufacturerID"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="SubSystem Vendor ID."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the subsystem Vendor ID of the Memory."/>
        </Property>
        <Property Name="SubsystemDeviceID" Type="Edm.String">
          <Annotation Term="Redfish.Deprecated" String="This property has been Deprecated in favor of Memory.v1_3_0.MemorySubsystemControllerProductID"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Subsystem Device ID."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the subsystem Device ID of the Memory."/>
        </Property>
        <Property Name="MaxTDPMilliWatts" Type="Collection(Edm.Int64)" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Maximum TDPs in milli Watts."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the maximum power budgets supported by the Memory in milli Watts."/>
          <Annotation Term="Measures.Unit" String="mW"/>
        </Property>
        <Property Name="SecurityCapabilities" Type="Memory.v1_0_0.SecurityCapabilities" Nullable="false">
          <Annotation Term="OData.Description" String="This object contains security capabilities of the Memory."/>
          <Annotation Term="OData.LongDescription" String="This object shall contain properties which describe the security capabilities of the Memory."/>
        </Property>
        <Property Name="SpareDeviceCount" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Number of unused spare devices available in the Memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the number of unused spare devices available in the Memory. If memory devices fails, the spare device could be used."/>
        </Property>
        <Property Name="RankCount" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Number of ranks available in the Memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be number of ranks available in the Memory. The ranks could be used for spare or interleave."/>
        </Property>
        <Property Name="DeviceLocator" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Location of the Memory in the platform."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be location of the Memory in the platform, typically marked in the silk screen."/>
        </Property>
        <Property Name="MemoryLocation" Type="Memory.v1_0_0.MemoryLocation" Nullable="false">
          <Annotation Term="OData.Description" String="Memory connection information to sockets and memory controllers."/>
          <Annotation Term="OData.LongDescription" String="This object shall contain properties which describe the Memory connection information to sockets and memory controllers."/>
        </Property>
        <Property Name="ErrorCorrection" Type="Memory.v1_0_0.ErrorCorrection">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Error correction scheme supported for this memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the error correction scheme supported for this memory."/>
        </Property>
        <Property Name="OperatingSpeedMhz" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Operating speed of Memory in MHz or MT/s as appropriate."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the operating speed of Memory in MHz or MT/s (mega-transfers per second) as reported by the memory device. Memory devices which operate at their bus speed shall report the operating speed in MHz (bus speed), while memory device which transfer data faster than their bus speed (e.g. DDR memory) shall report the operating speed in MT/s (mega-transfers/second). In any case, the reported value shall match the conventionally reported values for the technology utilized by the memory device."/>
          <Annotation Term="Measures.Unit" String="MHz"/>
        </Property>
        <Property Name="VolatileRegionSizeLimitMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Total size of volatile regions in mebibytes (MiB)."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the total size of volatile regions in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="PersistentRegionSizeLimitMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Total size of persistent regions in mebibytes (MiB)."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the total size of persistent regions in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="Regions" Type="Collection(Memory.v1_0_0.RegionSet)" Nullable="false">
          <Annotation Term="OData.Description" String="Memory regions information within the Memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the memory region information within the Memory."/>
        </Property>
        <Property Name="OperatingMemoryModes" Type="Collection(Memory.v1_0_0.OperatingMemoryModes)" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Memory modes supported by the Memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the memory modes supported by the Memory."/>
        </Property>
        <Property Name="PowerManagementPolicy" Type="Memory.v1_0_0.PowerManagementPolicy" Nullable="false">
          <Annotation Term="OData.Description" String="Power management policy information."/>
          <Annotation Term="OData.LongDescription" String="This object shall contain properties which describe the power management policy for the current resource."/>
        </Property>
        <Property Name="IsSpareDeviceEnabled" Type="Edm.Boolean" DefaultValue="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Spare device enabled status."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be true if a spare device is enabled for this Memory."/>
        </Property>
        <Property Name="IsRankSpareEnabled" Type="Edm.Boolean" DefaultValue="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Rank spare enabled status."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be true if a rank spare is enabled for this Memory."/>
        </Property>
        <NavigationProperty Name="Metrics" Type="MemoryMetrics.MemoryMetrics" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the Metrics associated with this Memory."/>
          <Annotation Term="OData.LongDescription" String="A reference to the Metrics associated with this Memory."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <Property Name="Actions" Type="Memory.v1_0_0.Actions" Nullable="false">
          <Annotation Term="OData.Description" String="The available actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
        </Property>
      </EntityType>

      <EnumType Name="MemoryType">
        <Member Name="DRAM">
          <Annotation Term="OData.Description" String="The memory module is composed of volatile memory."/>
          <Annotation Term="OData.LongDescription" String="This memory type shall represent volatile DRAM."/>
        </Member>
        <Member Name="NVDIMM_N">
          <Annotation Term="OData.Description" String="The memory module is composed of volatile memory backed by non-volatile memory."/>
          <Annotation Term="OData.LongDescription" String="This memory type shall represent NVDIMM_N as defined by JEDEC."/>
        </Member>
        <Member Name="NVDIMM_F">
          <Annotation Term="OData.Description" String="The memory module is composed of non-volatile memory."/>
          <Annotation Term="OData.LongDescription" String="This memory type shall represent NVDIMM_F as defined by JEDEC."/>
        </Member>
        <Member Name="NVDIMM_P">
          <Annotation Term="OData.Description" String="The memory module is composed of a combination of non-volatile and volatile memory."/>
          <Annotation Term="OData.LongDescription" String="This memory type shall represent NVDIMM_P as defined by JEDEC."/>
        </Member>
        <Member Name="IntelOptane">
          <Annotation Term="OData.Description" String="The memory module is Intel Optane DC Persistent Memory and composed of a combination of non-volatile and volatile memory."/>
          <Annotation Term="OData.LongDescription" String="This memory type shall represent Intel Optane DC Persistent Memory."/>
        </Member>
      </EnumType>

      <EnumType Name="MemoryDeviceType">
        <Member Name="DDR">
          <Annotation Term="OData.Description" String="DDR."/>
        </Member>
        <Member Name="DDR2">
          <Annotation Term="OData.Description" String="DDR2."/>
        </Member>
        <Member Name="DDR3">
          <Annotation Term="OData.Description" String="DDR3."/>
        </Member>
        <Member Name="DDR4">
          <Annotation Term="OData.Description" String="DDR4."/>
        </Member>
        <Member Name="DDR4_SDRAM">
          <Annotation Term="OData.Description" String="DDR4 SDRAM."/>
        </Member>
        <Member Name="DDR4E_SDRAM">
          <Annotation Term="OData.Description" String="DDR4E SDRAM."/>
        </Member>
        <Member Name="LPDDR4_SDRAM">
          <Annotation Term="OData.Description" String="LPDDR4 SDRAM."/>
        </Member>
        <Member Name="DDR3_SDRAM">
          <Annotation Term="OData.Description" String="DDR3 SDRAM."/>
        </Member>
        <Member Name="LPDDR3_SDRAM">
          <Annotation Term="OData.Description" String="LPDDR3 SDRAM."/>
        </Member>
        <Member Name="DDR2_SDRAM">
          <Annotation Term="OData.Description" String="DDR2 SDRAM."/>
        </Member>
        <Member Name="DDR2_SDRAM_FB_DIMM">
          <Annotation Term="OData.Description" String="DDR2 SDRAM FB_DIMM."/>
        </Member>
        <Member Name="DDR2_SDRAM_FB_DIMM_PROBE">
          <Annotation Term="OData.Description" String="DDR2 SDRAM FB_DIMM PROBE."/>
        </Member>
        <Member Name="DDR_SGRAM">
          <Annotation Term="OData.Description" String="DDR SGRAM."/>
        </Member>
        <Member Name="DDR_SDRAM">
          <Annotation Term="OData.Description" String="DDR SDRAM."/>
        </Member>
        <Member Name="ROM">
          <Annotation Term="OData.Description" String="ROM."/>
        </Member>
        <Member Name="SDRAM">
          <Annotation Term="OData.Description" String="SDRAM."/>
        </Member>
        <Member Name="EDO">
          <Annotation Term="OData.Description" String="EDO."/>
        </Member>
        <Member Name="FastPageMode">
          <Annotation Term="OData.Description" String="Fast Page Mode."/>
        </Member>
        <Member Name="PipelinedNibble">
          <Annotation Term="OData.Description" String="Pipelined Nibble."/>
        </Member>
        <Member Name="Logical">
          <Annotation Term="OData.Description" String="Logical Non-volatile device."/>
        </Member>
      </EnumType>

      <EnumType Name="BaseModuleType">
        <Member Name="RDIMM">
          <Annotation Term="OData.Description" String="Registered DIMM."/>
        </Member>
        <Member Name="UDIMM">
          <Annotation Term="OData.Description" String="UDIMM."/>
        </Member>
        <Member Name="SO_DIMM">
          <Annotation Term="OData.Description" String="SO_DIMM."/>
        </Member>
        <Member Name="LRDIMM">
          <Annotation Term="OData.Description" String="Load Reduced."/>
        </Member>
        <Member Name="Mini_RDIMM">
          <Annotation Term="OData.Description" String="Mini_RDIMM."/>
        </Member>
        <Member Name="Mini_UDIMM">
          <Annotation Term="OData.Description" String="Mini_UDIMM."/>
        </Member>
        <Member Name="SO_RDIMM_72b">
          <Annotation Term="OData.Description" String="SO_RDIMM_72b."/>
        </Member>
        <Member Name="SO_UDIMM_72b">
          <Annotation Term="OData.Description" String="SO_UDIMM_72b."/>
        </Member>
        <Member Name="SO_DIMM_16b">
          <Annotation Term="OData.Description" String="SO_DIMM_16b."/>
        </Member>
        <Member Name="SO_DIMM_32b">
          <Annotation Term="OData.Description" String="SO_DIMM_32b."/>
        </Member>
      </EnumType>

      <EnumType Name="MemoryMedia">
        <Member Name="DRAM">
          <Annotation Term="OData.Description" String="DRAM media."/>
        </Member>
        <Member Name="NAND">
          <Annotation Term="OData.Description" String="NAND media."/>
        </Member>
        <Member Name="Proprietary">
          <Annotation Term="OData.Description" String="Proprietary media."/>
        </Member>
      </EnumType>

      <ComplexType Name="SecurityCapabilities">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This type contains security capabilities of a Memory entity."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain properties which describe the security capabilities of a Memory entity."/>
        <Property Name="PassphraseCapable" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Memory passphrase set capability."/>
          <Annotation Term="OData.LongDescription" String="Memory passphrase set capability."/>
        </Property>
        <Property Name="MaxPassphraseCount" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Maximum number of passphrases supported for this Memory."/>
          <Annotation Term="OData.LongDescription" String="Maximum number of passphrases supported for this Memory."/>
        </Property>
        <Property Name="SecurityStates" Type="Collection(Memory.v1_0_0.SecurityStates)" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Security states supported by the Memory."/>
          <Annotation Term="OData.LongDescription" String="Security states supported by the Memory."/>
        </Property>
      </ComplexType>

      <EnumType Name="SecurityStates">
        <Member Name="Enabled">
          <Annotation Term="OData.Description" String="Secure mode is enabled."/>
        </Member>
        <Member Name="Disabled">
          <Annotation Term="OData.Description" String="Secure mode is disabled."/>
        </Member>
        <Member Name="Unlocked">
          <Annotation Term="OData.Description" String="Secure mode is enabled and access to the data is unlocked."/>
        </Member>
        <Member Name="Locked">
          <Annotation Term="OData.Description" String="Secure mode is enabled and access to the data is locked."/>
        </Member>
        <Member Name="Frozen">
          <Annotation Term="OData.Description" String="Secure state is frozen and can not be modified until reset."/>
        </Member>
        <Member Name="Passphraselimit">
          <Annotation Term="OData.Description" String="Number of attempts to unlock the Memory exceeded limit."/>
        </Member>
      </EnumType>

      <ComplexType Name="MemoryLocation">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="Memory connection information to sockets and memory controllers."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain properties which describe the Memory connection information to sockets and memory controllers."/>
        <Property Name="Socket" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Socket number in which Memory is connected."/>
          <Annotation Term="OData.LongDescription" String="Socket number in which Memory is connected."/>
        </Property>
        <Property Name="MemoryController" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Memory controller number in which Memory is connected."/>
          <Annotation Term="OData.LongDescription" String="Memory controller number in which Memory is connected."/>
        </Property>
        <Property Name="Channel" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Channel number in which Memory is connected."/>
          <Annotation Term="OData.LongDescription" String="Channel number in which Memory is connected."/>
        </Property>
        <Property Name="Slot" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Slot number in which Memory is connected."/>
          <Annotation Term="OData.LongDescription" String="Slot number in which Memory is connected."/>
        </Property>
      </ComplexType>

      <EnumType Name="ErrorCorrection">
        <Member Name="NoECC">
          <Annotation Term="OData.Description" String="No ECC available."/>
        </Member>
        <Member Name="SingleBitECC">
          <Annotation Term="OData.Description" String="Single bit Data error can be corrected by ECC."/>
        </Member>
        <Member Name="MultiBitECC">
          <Annotation Term="OData.Description" String="Multi-bit Data errors can be corrected by ECC."/>
        </Member>
        <Member Name="AddressParity">
          <Annotation Term="OData.Description" String="Address Parity errors can be corrected."/>
        </Member>
      </EnumType>

      <ComplexType Name="RegionSet">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="Memory region information within a Memory entity."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe the memory region information within a Memory entity."/>
        <Property Name="RegionId" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Unique region ID representing a specific region within the Memory."/>
          <Annotation Term="OData.LongDescription" String="Unique region ID representing a specific region within the Memory."/>
        </Property>
        <Property Name="MemoryClassification" Type="Memory.v1_0_0.MemoryClassification">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Classification of memory occupied by the given memory region."/>
          <Annotation Term="OData.LongDescription" String="Classification of memory occupied by the given memory region."/>
        </Property>
        <Property Name="OffsetMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Offset with in the Memory that corresponds to the starting of this memory region in mebibytes (MiB)."/>
          <Annotation Term="OData.LongDescription" String="Offset with in the Memory that corresponds to the starting of this memory region in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="SizeMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Size of this memory region in mebibytes (MiB)."/>
          <Annotation Term="OData.LongDescription" String="Size of this memory region in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="PassphraseState" Type="Edm.Boolean">
          <Annotation Term="Redfish.Deprecated" String="This property has been Deprecated in favor of Memory.v1_5_0.Memory.RegionSet.PassphraseEnabled."/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="State of the passphrase for this region."/>
          <Annotation Term="OData.LongDescription" String="State of the passphrase for this region."/>
        </Property>
      </ComplexType>

      <EnumType Name="MemoryClassification">
        <Member Name="Volatile">
          <Annotation Term="OData.Description" String="Volatile memory."/>
        </Member>
        <Member Name="ByteAccessiblePersistent">
          <Annotation Term="OData.Description" String="Byte accessible persistent memory."/>
        </Member>
        <Member Name="Block">
          <Annotation Term="OData.Description" String="Block accesible memory."/>
        </Member>
      </EnumType>

      <EnumType Name="OperatingMemoryModes">
        <Member Name="Volatile">
          <Annotation Term="OData.Description" String="Volatile memory."/>
        </Member>
        <Member Name="PMEM">
          <Annotation Term="OData.Description" String="Persistent memory, byte accesible through system address space."/>
        </Member>
        <Member Name="Block">
          <Annotation Term="OData.Description" String="Block accessible system memory."/>
        </Member>
      </EnumType>

      <ComplexType Name="PowerManagementPolicy">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="Power management policy information."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain properties which describe the power management policy for the current resource."/>
        <Property Name="PolicyEnabled" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Power management policy enabled status."/>
          <Annotation Term="OData.LongDescription" String="Power management policy enabled status."/>
        </Property>
        <Property Name="MaxTDPMilliWatts" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Maximum TDP in milli watts."/>
          <Annotation Term="OData.LongDescription" String="Maximum TDP in milli watts."/>
          <Annotation Term="Measures.Unit" String="mW"/>
        </Property>
        <Property Name="PeakPowerBudgetMilliWatts" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Peak power budget in milli watts."/>
          <Annotation Term="OData.LongDescription" String="Peak power budget in milli watts."/>
          <Annotation Term="Measures.Unit" String="mW"/>
        </Property>
        <Property Name="AveragePowerBudgetMilliWatts" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Average power budget in milli watts."/>
          <Annotation Term="OData.LongDescription" String="Average power budget in milli watts."/>
          <Annotation Term="Measures.Unit" String="mW"/>
        </Property>
      </ComplexType>

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The available actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain the available actions for this resource."/>
        <Property Name="Oem" Type="Memory.v1_0_0.OemActions" Nullable="false">
          <Annotation Term="OData.Description" String="This property contains the available OEM specific actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain any additional OEM actions for this resource."/>
        </Property>
      </ComplexType>

      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="The available OEM specific actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional OEM actions for this resource."/>
      </ComplexType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_0_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="Memory" BaseType="Memory.v1_0_0.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_0_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="Memory" BaseType="Memory.v1_0_1.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_0_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add requirements on the action parameters to show they are mandatory via Nullable=false.  It was also created to update the description of OperatingSpeedMHz."/>
      <EntityType Name="Memory" BaseType="Memory.v1_0_2.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_0_4">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add Units annotations on various properties.  It was also created to force the regeneration of JSON Schema so that OData properties are marked as required, and integer properties are marked as integer rather than number."/>
      <EntityType Name="Memory" BaseType="Memory.v1_0_3.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_1_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="Memory" BaseType="Memory.v1_0_1.Memory">
        <Property Name="Status" Type="Resource.Status" Nullable="false">
          <Annotation Term="OData.Description" String="This property describes the status and health of the resource and its children."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain any status or health properties of the resource."/>
        </Property>
      </EntityType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_1_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="Memory" BaseType="Memory.v1_1_0.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_1_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add requirements on the action parameters to show they are mandatory via Nullable=false.  It was also created to update the description of OperatingSpeedMHz."/>
      <EntityType Name="Memory" BaseType="Memory.v1_1_1.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_1_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add Units annotations on various properties.  It was also created to force the regeneration of JSON Schema so that OData properties are marked as required, and integer properties are marked as integer rather than number."/>
      <EntityType Name="Memory" BaseType="Memory.v1_1_2.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_2_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="Memory" BaseType="Memory.v1_1_1.Memory">
        <Property Name="VolatileRegionNumberLimit" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Total number of volatile regions this Memory can support."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the total number of volatile regions this Memory can support."/>
        </Property>
        <Property Name="PersistentRegionNumberLimit" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Total number of persistent regions this Memory can support."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the total number of persistent regions this Memory can support."/>
        </Property>
        <Property Name="VolatileRegionSizeMaxMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Maximum size of a single volatile region in mebibytes (MiB)."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the maximum size of a single volatile regions in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="PersistentRegionSizeMaxMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Maximum size of a single persistent region in mebibytes (MiB)."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the maximum size of a single persistent regions in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="AllocationIncrementMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The size of the smallest unit of allocation for a memory region in mebibytes (MiB)."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the allocation increment for regions, measured in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="AllocationAlignmentMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The boundary which memory regions are allocated on, measured in mebibytes (MiB)."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be thealignment boundary on which memory regions are allocated, measured in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="Links" Type="Memory.v1_2_0.Links" Nullable="false">
          <Annotation Term="OData.Description" String="Contains references to other resources that are related to this resource."/>
          <Annotation Term="OData.LongDescription" String="The Links property, as described by the Redfish Specification, shall contain references to resources that are related to, but not contained by (subordinate to), this resource."/>
        </Property>
      </EntityType>

      <ComplexType Name="Links" BaseType="Resource.Links">
        <Annotation Term="OData.Description" String="Contains references to other resources that are related to this resource."/>
        <Annotation Term="OData.LongDescription" String="This type, as described by the Redfish Specification, shall contain references to resources that are related to, but not contained by (subordinate to), this resource."/>
        <NavigationProperty Name="Chassis" Type="Chassis.Chassis" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the Chassis which contains this Memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a reference to a resource of type Chassis that represent the physical container associated with this Memory."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_2_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add requirements on the action parameters to show they are mandatory via Nullable=false.  It was also created to update the description of OperatingSpeedMHz."/>
      <EntityType Name="Memory" BaseType="Memory.v1_2_0.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_2_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add Units annotations on various properties.  It was also created to force the regeneration of JSON Schema so that OData properties are marked as required, and integer properties are marked as integer rather than number."/>
      <EntityType Name="Memory" BaseType="Memory.v1_2_1.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_3_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="Memory" BaseType="Memory.v1_2_0.Memory">
        <Property Name="ModuleManufacturerID" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The manufacturer ID of this memory module."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the two byte manufacturer ID of this memory module as defined by JEDEC in JEP-106."/>
          <Annotation Term="Validation.Pattern" String="^0[xX](([a-fA-F]|[0-9]){2}){2}$"/>
        </Property>
        <Property Name="ModuleProductID" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The product ID of this memory module."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the two byte product ID of this memory module as defined by the manufacturer."/>
          <Annotation Term="Validation.Pattern" String="^0[xX](([a-fA-F]|[0-9]){2}){2}$"/>
        </Property>
        <Property Name="MemorySubsystemControllerManufacturerID" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The manufacturer ID of the memory subsystem controller of this memory module."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the two byte manufacturer ID of the memory subsystem controller of this memory module as defined by JEDEC in JEP-106."/>
          <Annotation Term="Validation.Pattern" String="^0[xX](([a-fA-F]|[0-9]){2}){2}$"/>
        </Property>
        <Property Name="MemorySubsystemControllerProductID" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The product ID of the memory subsystem controller of this memory module."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the two byte product ID of the memory subsystem controller of this memory module as defined by the manufacturer."/>
          <Annotation Term="Validation.Pattern" String="^0[xX](([a-fA-F]|[0-9]){2}){2}$"/>
        </Property>
      </EntityType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_3_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add requirements on the action parameters to show they are mandatory via Nullable=false.  It was also created to update the description of OperatingSpeedMHz."/>
      <EntityType Name="Memory" BaseType="Memory.v1_3_0.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_3_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add Units annotations on various properties.  It was also created to force the regeneration of JSON Schema so that OData properties are marked as required, and integer properties are marked as integer rather than number."/>
      <EntityType Name="Memory" BaseType="Memory.v1_3_1.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_4_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="Memory" BaseType="Memory.v1_3_1.Memory">
        <Property Name="VolatileSizeMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Total size of the volitile portion memory in MiB."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the total size of the volatile portion memory in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="NonVolatileSizeMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Total size of the non-volatile portion memory in MiB."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the total size of the non-volatile portion memory in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="CacheSizeMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Total size of the cache portion memory in MiB."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the total size of the cache portion memory in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="LogicalSizeMiB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Total size of the logical memory in MiB."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the total size of the logical memory in MiB."/>
          <Annotation Term="Measures.Unit" String="MiBy"/>
        </Property>
        <Property Name="Location" Type="Resource.Location" Nullable="false">
          <Annotation Term="OData.Description" String="The Location of the memory."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain location information of the associated memory."/>
        </Property>
        <NavigationProperty Name="Assembly" Type="Assembly.Assembly" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A reference to the Assembly resource associated with this memory."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a resource of type Assembly."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </EntityType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_4_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to update descriptions to match the editorial style used in other Redfish schemas."/>
      <EntityType Name="Memory" BaseType="Memory.v1_4_0.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_4_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add Units annotations on various properties.  It was also created to force the regeneration of JSON Schema so that OData properties are marked as required, and integer properties are marked as integer rather than number."/>
      <EntityType Name="Memory" BaseType="Memory.v1_4_1.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_5_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="Memory" BaseType="Memory.v1_4_1.Memory"/>

      <ComplexType Name="RegionSet" BaseType="Memory.v1_0_0.RegionSet">
        <Property Name="PassphraseEnabled" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Indicates if the passphrase is enabled for this region."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean indicating if the passphrase is enabled for this region."/>
        </Property>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_5_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add Units annotations on various properties.  It was also created to force the regeneration of JSON Schema so that OData properties are marked as required, and integer properties are marked as integer rather than number."/>
      <EntityType Name="Memory" BaseType="Memory.v1_5_0.Memory"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Memory.v1_6_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to change the LongDescription of SecureEraseUnit.  It was also created to define a new OverwriteUnit action.  It also adds IntelOptane to the MemoryType list."/>
      <EntityType Name="Memory" BaseType="Memory.v1_5_1.Memory"/>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_MEMORY_V1_HPP */
