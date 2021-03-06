#ifndef PSME_REST_METADATA_INTEL_RACK_SCALE_OEM_V1_HPP
#define PSME_REST_METADATA_INTEL_RACK_SCALE_OEM_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string IntelRackScaleOem_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
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
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/IntelRackScaleExtensions_v1.xml">
    <edmx:Include Namespace="IntelRackScale.Extensions"/>
  </edmx:Reference>

<!--# Include schemas for referred resources-->

 <edmx:Reference Uri="/redfish/v1/metadata/AccelerationFunction_v1.xml">
    <edmx:Include Namespace="AccelerationFunction"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/AccelerationFunctionCollection_v1.xml">
    <edmx:Include Namespace="AccelerationFunctionCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/ComposedNodeCollection_v1.xml">
    <edmx:Include Namespace="ComposedNodeCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/ComputerSystem_v1.xml">
    <edmx:Include Namespace="ComputerSystem"/>
    <edmx:Include Namespace="ComputerSystem.v1_0_0"/>
    <edmx:Include Namespace="ComputerSystem.v1_1_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/ComputerSystemMetrics_v1.xml">
    <edmx:Include Namespace="ComputerSystemMetrics"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/DriveMetrics_v1.xml">
    <edmx:Include Namespace="DriveMetrics"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Endpoint_v1.xml">
    <edmx:Include Namespace="Endpoint"/>
    <edmx:Include Namespace="Endpoint.v1_1_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/EthernetSwitchPort_v1.xml">
    <edmx:Include Namespace="EthernetSwitchPort"/>
    <edmx:Include Namespace="EthernetSwitchPort.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/EthernetInterface_v1.xml">
    <edmx:Include Namespace="EthernetInterface"/>
    <edmx:Include Namespace="EthernetInterface.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/EthernetSwitch_v1.xml">
    <edmx:Include Namespace="EthernetSwitch.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/EthernetSwitchCollection_v1.xml">
    <edmx:Include Namespace="EthernetSwitchCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Fabric_v1.xml">
    <edmx:Include Namespace="Fabric"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/IPAddresses_v1.xml">
    <edmx:Include Namespace="IPAddresses"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Manager_v1.xml">
    <edmx:Include Namespace="Manager"/>
    <edmx:Include Namespace="Manager.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/PCIeDevice_v1.xml">
    <edmx:Include Namespace="PCIeDevice"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/PCIeFunction_v1.xml">
    <edmx:Include Namespace="PCIeFunction"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Port_v1.xml">
    <edmx:Include Namespace="Port"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/PortMetrics_v1.xml">
    <edmx:Include Namespace="PortMetrics"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Power_v1.xml">
    <edmx:Include Namespace="Power"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Processor_v1.xml">
    <edmx:Include Namespace="Processor"/>
    <edmx:Include Namespace="Processor.v1_1_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Intel_RackScaleProcessorMetrics_v1.xml">
    <edmx:Include Namespace="Intel_RackScale.ProcessorMetrics"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Protocol_v1.xml">
    <edmx:Include Namespace="Protocol"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Storage_v1.xml">
    <edmx:Include Namespace="Storage"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/StoragePool_v1.xml">
    <edmx:Include Namespace="StoragePool"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/StorageService_v1.xml">
    <edmx:Include Namespace="StorageService"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/StorageServiceCollection_v1.xml">
    <edmx:Include Namespace="StorageServiceCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Switch_v1.xml">
    <edmx:Include Namespace="Switch"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Intel_RackScaleTelemetryService_v1.xml">
    <edmx:Include Namespace="Intel_RackScale.TelemetryService"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Thermal_v1.xml">
    <edmx:Include Namespace="Thermal"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/VolumeMetrics_v1.xml">
    <edmx:Include Namespace="VolumeMetrics"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Zone_v1.xml">
    <edmx:Include Namespace="Zone"/>
  </edmx:Reference>

  <edmx:DataServices>
    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Intel.Oem">

      <ComplexType Name="UserDefinedTags">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="An object holding tags assigned to a resource by the user."/>
        <Annotation Term="OData.LongDescription" String="An object holding tags assigned to a resource by the user."/>
      </ComplexType>

      <ComplexType Name="Resource" BaseType="Resource.OemObject">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="TaggedValues" Type="Intel.Oem.UserDefinedTags" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description"
                      String="This property contains user-assigned tags for a resource"/>
          <Annotation Term="OData.LongDescription"
                      String="This property contains user-assigned tags for a resource"/>
        </Property>
      </ComplexType>

      <ComplexType Name="Chassis" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="Location" Type="Intel.Oem.Location">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="Chassis location in relation to it’s parent."/>
          <Annotation Term="OData.LongDescription"
                      String="Chassis location in relation to it’s parent."/>
        </Property>
      </ComplexType>

      <ComplexType Name="RackChassis" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="Location" Type="Intel.Oem.Location">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
        </Property>
        <Property Name="RMMPresent" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="This indicate if Rack Management Module is present in Rack chassis."/>
          <Annotation Term="OData.LongDescription"
                      String="This indicate if Rack Management Module is present in Rack chassis."/>
          <Annotation Term="Redfish.Deprecated" String="This value is not used anymore."/>
        </Property>
        <Property Name="RackSupportsDisaggregatedPowerCooling" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="This indicate if Rack chassis support disaggregated power and cooling feature."/>
          <Annotation Term="OData.LongDescription"
                      String="This indicate if Rack chassis support disaggregated power and cooling feature."/>
        </Property>
        <Property Name="UUID" Type="Resource.UUID">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Universal Unique Identifier for this resource."/>
          <Annotation Term="OData.LongDescription"
                      String="Universal Unique Identifier for this resource."/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated in favor of Chassis UUID."/>
        </Property>
        <Property Name="GeoTag" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="String containing geographical identification metadata."/>
          <Annotation Term="OData.LongDescription"
                      String="String containing geographical identification metadata. Usually consist of latitude and longitude."/>
        </Property>
      </ComplexType>

      <ComplexType Name="Location">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="Id" Type="Edm.String">
          <Annotation Term="IntelRackScale.Extensions.Nontrivial"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="String containing physical location ID of this chassis."/>
          <Annotation Term="OData.LongDescription" String="String containing physical location ID of this chassis."/>
          <Annotation Term="Validation.Pattern" String="^(?!\s*$).+"/>
        </Property>
        <Property Name="ParentId" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="String containing  physical location ID of parent chassis."/>
          <Annotation Term="OData.LongDescription" String="String containing  physical location ID of parent chassis."/>
          <Annotation Term="Validation.Pattern" String="^(?!\s*$).+"/>
        </Property>
      </ComplexType>

      <ComplexType Name="Manager" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="Trusted" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="Indicates if the service represented by this Manager resource has been authenticated by its managing service (e.g., PODM)."/>
          <Annotation Term="OData.LongDescription"
                      String="Indicates if the service represented by this Manager resource has been authenticated by its managing service (e.g., PODM)."/>
        </Property>
      </ComplexType>

      <ComplexType Name="ManagerLinks" BaseType="Resource.OemObject">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <NavigationProperty Name="ManagerForServices" Type="Collection(StorageService.StorageService)">
          <Annotation Term="OData.AutoExpandReferences"/>
          <Annotation Term="OData.Description" String="This property is an array of references to services that this manager has control over."/>
        </NavigationProperty>
        <NavigationProperty Name="ManagerForEthernetSwitches" Type="Collection(EthernetSwitch.v1_0_0.EthernetSwitch)">
          <Annotation Term="OData.AutoExpandReferences"/>
          <Annotation Term="OData.Description" String="This property is an array of references to ethernet switches that this manager has control over."/>
        </NavigationProperty>
        <NavigationProperty Name="ManagerForSwitches" Type="Collection(EthernetSwitch.v1_0_0.EthernetSwitch)">
          <Annotation Term="OData.AutoExpandReferences"/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated in favor of ManagerForEthernetSwitches."/>
          <Annotation Term="OData.Description" String="This property is an array of references to switches that this manager has control over."/>
        </NavigationProperty>
        <NavigationProperty Name="ManagerForFabrics" Type="Collection(Fabric.Fabric)">
          <Annotation Term="OData.AutoExpandReferences"/>
          <Annotation Term="OData.Description" String="This property is an array of references to fabrics that this manager has control over."/>
        </NavigationProperty>
      </ComplexType>

      <TypeDefinition Name="Protocol" UnderlyingType="Edm.String">
        <Annotation Term="Redfish.Enumeration">
          <Collection>
            <Record>
              <PropertyValue Property="Member" String="FPGA-oF"/>
              <Annotation Term="OData.Description" String="FPGA over Fabrics Protocol."/>
              <Annotation Term="OData.LongDescription" String="This value shall mean that this device conforms to the FPGA over Fabrics Protocol as defined by the FPGA over Fabrics Specification."/>
            </Record>
          </Collection>
        </Annotation>
      </TypeDefinition>

      <ComplexType Name="Fabric" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="FabricType" Type="Intel.Oem.Protocol">
          <Annotation Term="OData.Description"
                      String="Additional specification for OEM FabricType."/>
          <Annotation Term="OData.LongDescription"
                      String="Additional specification for OEM FabricType. Shall be specified if the Redfish FabricType is OEM."/>
        </Property>
      </ComplexType>

      <ComplexType Name="FabricLinks" BaseType="Resource.OemObject">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <NavigationProperty Name="ManagedBy" Type="Collection(Manager.Manager)">
          <Annotation Term="OData.Description"
                      String="Collection of managers managing the service."/>
          <Annotation Term="OData.LongDescription"
                      String="Collection of managers managing the service."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="ComputerSystem" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="PCIeConnectionId" Type="Collection(Edm.String)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="This property is an array of IDs of cable or cables connected to this port."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall contain an array of string identifying cable(s) connected to this port. This is crucial for topology discovery."/>
        </Property>
        <Property Name="PciDevices" Type="Collection(Intel.Oem.PciDevice)" Nullable="false">
          <Annotation Term="OData.Description" String="This indicates array of PCI devices present in computer system."/>
          <Annotation Term="OData.LongDescription"
                      String="This indicates array of PCI devices present in computer system"/>
        </Property>
        <Property Name="ProcessorSockets" Type="Edm.Int64">
          <Annotation Term="OData.Description" String="This indicates number of processor sockets available in system."/>
          <Annotation Term="OData.LongDescription"
                      String="This indicates number of memory sockets available in system"/>
        </Property>
        <Property Name="MemorySockets" Type="Edm.Int64">
          <Annotation Term="OData.Description" String="This indicates number of memory sockets available in system."/>
          <Annotation Term="OData.LongDescription"
                      String="This indicates number of memory sockets available in system"/>
        </Property>
        <Property Name="UserModeEnabled" Type="Edm.Boolean">
          <Annotation Term="OData.Description" String="This indicates if platform user mode is enabled."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall represent current platform mode. When enabled update of FW components should be blocked on in-band interfaces."/>
        </Property>
        <Property Name="TrustedExecutionTechnologyEnabled" Type="Edm.Boolean">
          <Annotation Term="OData.Description" String="This indicates if TXT mode is enabled."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall represent current Trusted Execution Technology state."/>
        </Property>
        <NavigationProperty Name="Metrics" Type="ComputerSystemMetrics.ComputerSystemMetrics" ContainsTarget="true"
                            Nullable="false">
          <Annotation Term="OData.Description" String="A reference to the Metrics associated with this ComputerSystem."/>
          <Annotation Term="OData.LongDescription"
                      String="A reference to the Metrics associated with this ComputerSystem."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <Property Name="PerformanceConfiguration" Type="Intel.Oem.SystemCpuPerformanceConfiguration">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This property shall be used to manage the current and available performance configurations."/>
          <Annotation Term="OData.LongDescription" String="This property shall be used to manage the current and available performance configurations."/>
        </Property>
      </ComplexType>

      <EnumType Name="SystemPerformanceConfigurationType">
        <Member Name="StaticSpeedSelect">
          <Annotation Term="OData.Description" String="Boot time core count and base frequency adjustment."/>
        </Member>
        <Member Name="PrioritizedBaseFrequency">
          <Annotation Term="OData.Description" String="Boot time switch between number of high and low priority cores."/>
        </Member>
      </EnumType>

      <ComplexType Name="SystemPerformanceConfiguration" Abstract="true">
        <Property Name="ConfigurationId" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" String="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Id of this configuration."/>
          <Annotation Term="OData.LongDescription" String="Unique Control value that identifies this specific configuration. The BIOS uses this control value during boot to decide which of the performance configurations it must enable in hardware."/>
        </Property>
        <Property Name="Type" Type="Intel.Oem.SystemPerformanceConfigurationType">
          <Annotation Term="OData.Permissions" String="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Type of this configuration."/>
          <Annotation Term="OData.LongDescription" String="This property shall specify which processor feature allows for this performace configuration."/>
        </Property>
        <Property Name="TDPPerCpu" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Maximal Thermal Design Power in Watts."/>
          <Annotation Term="OData.LongDescription" String="Maximal Thermal Design Power per processor in Watts for this configuration."/>
          <Annotation Term="Measures.Unit" String="W"/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
        <Property Name="MaxCpuJunctionTemp" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Maximum CPU junction temperature."/>
          <Annotation Term="OData.LongDescription" String="Maximum temperature allowed for the CPUs in this configuration."/>
          <Annotation Term="Measures.Unit" String="Cel"/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
      </ComplexType>

      <ComplexType Name="SpeedSelectConfiguration" BaseType="Intel.Oem.SystemPerformanceConfiguration">
        <Property Name="ActiveCoresPerCpu" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" String="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Number of active cores per CPU."/>
          <Annotation Term="OData.LongDescription" String="Number of active cores per CPU."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
        <Property Name="BaseCoreFrequency" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" String="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Base frequency of active cores."/>
          <Annotation Term="OData.LongDescription" String="Base frequency of active cores."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
          <Annotation Term="Measures.Unit" String="MHz"/>
        </Property>
      </ComplexType>

      <ComplexType Name="PrioritizedBaseFrequency" BaseType="Intel.Oem.SystemPerformanceConfiguration">
        <Property Name="HighPriorityCoreCountPerCpu" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="High priority core count per CPU."/>
          <Annotation Term="OData.LongDescription" String="Identifies the number of high priority cores per CPU in this configuration."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
        <Property Name="HighPriorityBaseCoreFrequency" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Base frequency for high priority cores."/>
          <Annotation Term="OData.LongDescription" String="Base frequency for the high priority cores in this configuration."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
          <Annotation Term="Measures.Unit" String="MHz"/>
        </Property>
        <Property Name="LowPriorityCoreCountPerCpu" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Low priority core count per CPU."/>
          <Annotation Term="OData.LongDescription" String="Identifies the number of low priority cores per CPU in this configuration."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
        <Property Name="LowPriorityBaseCoreFrequency" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Base frequency for low priority cores."/>
          <Annotation Term="OData.LongDescription" String="Base frequency for the low priority cores in this configuration."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
          <Annotation Term="Measures.Unit" String="MHz"/>
        </Property>
      </ComplexType>

      <ComplexType Name="SystemCpuPerformanceConfiguration">
        <Property Name="CurrentConfigurationId" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" String="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The Id of the active configuration."/>
          <Annotation Term="OData.LongDescription" String="This property shall match the ConfigurationId of the configuration which is currently active."/>
        </Property>
        <Property Name="Configurations" Type="Collection(Intel.Oem.SystemPerformanceConfiguration)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Collection of available system performance configurations."/>
          <Annotation Term="OData.LongDescription" String="Collection of available system performance configurations."/>
        </Property>
      </ComplexType>

      <ComplexType Name="Memory" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="VoltageVolt" Type="Edm.Decimal">
          <Annotation Term="OData.Description" String="This indicates current voltage of memory module."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall represent current voltage of memory module"/>
        </Property>
      </ComplexType>

      <ComplexType Name="MemoryMetrics" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="TemperatureCelsius" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Temperature of the Memory resource."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be temperature of the Memory resource in Celsius."/>
          <Annotation Term="Measures.Unit" String="Cel"/>
        </Property>
        <Property Name="ControllerTemperatureCelsius" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Temperature of the Memory Controller resource."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be temperature of the Memory controller in Celsius."/>
          <Annotation Term="Measures.Unit" String="Cel"/>
        </Property>
        <Property Name="BandwidthPercent" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Memory Bandwidth in Percent."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be Memory Utilization on specific Memory module in Percent."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
          <Annotation Term="Validation.Maximum" Int="100"/>
        </Property>
        <Property Name="ThrottledCyclesPercent" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="The percentage of memory cycles that were throttled due to power limiting."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be the percentage of memory cycles that were throttled due to power limiting."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
          <Annotation Term="Validation.Maximum" Int="100"/>
        </Property>
        <Property Name="ConsumedPowerWatt" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Power consumed by Memory domain resource."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be global power for specific Memory module (e.g. DIMM) in Watts."/>
          <Annotation Term="Measures.Unit" String="W"/>
        </Property>
        <Property Name="ThermalMarginCelsius" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Memory Thermal Margin in degree Celsius."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be a difference between current memory module temperature and optimal temperature for the module in degree Celsius."/>
          <Annotation Term="Measures.Unit" String="Cel"/>
        </Property>
        <Property Name="Health" Type="Collection(Edm.String)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Memory module Health as a discrete sensor reading."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be Memory module Health as a discrete sensor reading."/>
        </Property>
        <Property Name="ECCErrorsCount" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Number of ECC Errors found on this Memory module."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be a number of ECC Errors found on this Memory module. It's up to implementer if only UnCorrectable or both Correctable and Uncorrectable errors are shown per Module resource."/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated in favor of CurrentPeriod and LifeTime."/>
        </Property>
        <Property Name="CurrentPeriod" Type="Intel.Oem.MemoryMetricsCurrentPeriod" Nullable="false">
          <Annotation Term="OData.Description" String="This object contains the Memory metrics since last reset or ClearCurrentPeriod action."/>
          <Annotation Term="OData.LongDescription"
                      String="This object shall contain properties which describe the CurrentPeriod metrics for the current resource."/>
        </Property>
        <Property Name="LifeTime" Type="Intel.Oem.MemoryMetricsLifeTime" Nullable="false">
          <Annotation Term="OData.Description" String="This object contains OEM Memory metrics for the lifetime of the Memory."/>
          <Annotation Term="OData.LongDescription"
                      String="This object shall contain properties which describe the LifeTime metrics for the current resource."/>
        </Property>
      </ComplexType>

      <ComplexType Name="MemoryMetricsCurrentPeriod">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This object contains the Memory metrics since last reset or ClearCurrentPeriod action."/>
        <Annotation Term="OData.LongDescription"
                    String="This object shall contain properties which describe the CurrentPeriod metrics for the current resource."/>
        <Property Name="UptimeSeconds" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The current uptime of the Memory module for the current power cycle in seconds."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be the current uptime of the Memory module for the current power cycle in seconds."/>
        </Property>
        <Property Name="HostReadRequests" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The number of read requests the Memory module has serviced for the current power cycle."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be the number of read requests the Memory module has serviced for the current power cycle."/>
        </Property>
        <Property Name="HostWriteRequests" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The number of writes requests the Memory module has serviced for the current power cycle."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be the number of writes requests the Memory module has serviced for the current power cycle."/>
        </Property>
        <Property Name="ECCCorrectedErrors" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Number of Corrected ECC Errors found on this Memory module "/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be a number of Corrected ECC Errors found on this Memory module."/>
        </Property>
      </ComplexType>

      <ComplexType Name="MemoryMetricsLifeTime">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This object contains the Memory metrics for the lifetime of the Memory."/>
        <Annotation Term="OData.LongDescription"
                    String="This type shall describe the metrics of the memory since manufacturing."/>
        <Property Name="UnsafeShutdownCount" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="Unsafe Shutdown Count of a Memory module."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall be a number of times the Memory module has undergo unsafe shutdown."/>
        </Property>
        <Property Name="PowerCycles" Type="Edm.Decimal">
           <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
            <Annotation Term="OData.Description" String="The number of power cycles over the lifetime of the Memory module."/>
            <Annotation Term="OData.LongDescription"
                        String="The value of this property shall be number of power cycles over the lifetime of the Memory module."/>
        </Property>
        <Property Name="PowerOnTimeSeconds" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The amount of time the Memory module was powered on during its lifetime in seconds."/>
          <Annotation Term="OData.LongDescription"
                        String="The value of this property shall be the amount of time the Memory module was powered on during its lifetime in seconds."/>
        </Property>
        <Property Name="HostReadRequests" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The number of read requests the Memory module has serviced over its lifetime."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be the number of read requests the Memory module has serviced over its lifetime."/>
        </Property>
        <Property Name="HostWriteRequests" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The number of writes requests the Memory module has serviced over its lifetime."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be the number of writes requests the Memory module has serviced over its lifetime."/>
        </Property>
        <Property Name="WriteCountMax" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The largest number of data writes to a single block across the Memory module."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be the largest number of data writes to a single block across the Memory module."/>
        </Property>
        <Property Name="WriteCountAvg" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The average number of data writes to all blocks across the Memory module."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be the average number of data writes to all blocks across the Memory module."/>
        </Property>
        <Property Name="MediaECCCorrectedErrors" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Number of corrected ECC Errors found on Media of this Memory module"/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be a number of corrected ECC Errors found on Media of this Memory module."/>
        </Property>
        <Property Name="MediaECCUncorrectableErrors" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Number of Uncorrectable ECC Errors found on Media of this Memory module"/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be a number of Uncorrectable ECC Errors found on Media of this Memory module."/>
        </Property>
        <Property Name="ECCUncorrectableErrors" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Number of ECC Errors found on this Memory module "/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be a number of ECC Errors found on this Memory module."/>
        </Property>
      </ComplexType>

      <ComplexType Name="PciDevice">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="VendorId" Type="Edm.String"/>
        <Property Name="DeviceId" Type="Edm.String"/>
      </ComplexType>

      <Action Name="EraseOptaneDCPersistentMemory" IsBound="true">
        <Parameter Name="ComputerSystem" Type="ComputerSystem.v1_0_0.OemActions"/>
        <Annotation Term="OData.Description" String="This action is used to trigger an erasure of Intel(R) Optane DC Persistent Memory Modules on a Computer System." />
        <Annotation Term="OData.LongDescription" String="This action is used to trigger an erasure of Intel(R) Optane DC Persistent Memory Modules on a Computer System." />
        <Parameter Name="ResetConfiguration" Type="Edm.Boolean" Nullable="true">
          <Annotation Term="OData.Description" String="This flag, if set to true, indicates that the Platform Configuration Data should be overwritten."/>
          <Annotation Term="OData.LongDescription" String="This flag, if set to true, indicates that the Platform Configuration Data should be overwritten."/>
        </Parameter>
        <Parameter Name="EraseConfigurationKeys" Type="Edm.Boolean" Nullable="true">
          <Annotation Term="OData.Description" String="This flag, if set to true, indicates that the configuration keys should be securely erased."/>
          <Annotation Term="OData.LongDescription" String="This flag, if set to true, indicates that the configuration keys should be securely erased."/>
        </Parameter>
      </Action>

      <Action Name="ChangeTPMState" IsBound="true">
        <Parameter Name="ComputerSystem" Type="ComputerSystem.v1_0_0.OemActions"/>
        <Parameter Name="DeviceEnabled" Type="Edm.Boolean" Nullable="false">
          <Annotation Term="OData.Description" String="Required device state after action is finished." />
          <Annotation Term="OData.LongDescription" String="This defines the TPM device state as a result of triggering this action." />
        </Parameter>
        <Parameter Name="InterfaceType" Type="ComputerSystem.v1_1_0.InterfaceType">
          <Annotation Term="OData.Description" String="Required  interface type of the Trusted Module." />
          <Annotation Term="OData.LongDescription" String="This defines the interface type of the installed Trusted Module device as a result of triggering this action." />
        </Parameter>
        <Parameter Name="ClearOwnership" Type="Edm.Boolean">
          <Annotation Term="OData.Description" String="This indicates if TPM ownership should be cleared." />
          <Annotation Term="OData.LongDescription" String="This defines if Trusted Module ownership should be cleared as a result of triggering this action." />
        </Parameter>
        <Annotation Term="OData.Description" String="This action is used to change TPM state and version." />
        <Annotation Term="OData.LongDescription" String="This action is used to change TPM state and version." />
      </Action>

      <Action Name="SecureErase" IsBound="true">
        <Parameter Name="Processor" Type="Processor.v1_1_0.OemActions"/>
        <Annotation Term="OData.Description" String="This action is used to erase the user's AccelerationFunction from an FPGA."/>
        <Annotation Term="OData.LongDescription" String="This action is used to erase the user's AccelerationFunction from an FPGA, for example reprogram the FPGA with a default AccelerationFunction."/>
      </Action>

      <ComplexType Name="EthernetInterfaceLinks" BaseType="Resource.OemObject">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <NavigationProperty Name="NeighborPort" Type="EthernetSwitchPort.EthernetSwitchPort">
          <Annotation Term="OData.Description"
                      String="This indicates ethernet port which is connected to this interface"/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall represent the URI of ethernet port connected to this interface"/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="EthernetInterface" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="SupportedProtocols" Type="Collection(Protocol.Protocol)">
          <Annotation Term="OData.Description"
                      String="This indicates all supported protocol types."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall represent an array of supported protocol types by the Ethernet interface."/>
       </Property>
      </ComplexType>

      <ComplexType Name="Processor" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="Brand" Type="Intel.Oem.ProcessorBrand">
          <Annotation Term="OData.Description" String="This indicates processor brand."/>
          <Annotation Term="OData.LongDescription" String="This property shall represent the brand of processor."/>
        </Property>
        <Property Name="Capabilities" Type="Collection(Edm.String)">
          <Annotation Term="OData.Description" String="This indicates array of processor capabilities."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall represent array of processor capabilities (like reported in /proc/cpuinfo flags)"/>
        </Property>
        <Property Name="IntegratedMemory" Type="Collection(Intel.Oem.ProcessorMemory)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="An array of references to the endpoints that connect to this processor."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be a reference to the resources that this processor is associated with and shall reference a resource of type Endpoint."/>
        </Property>
        <Property Name="OnPackageMemory" Type="Collection(Intel.Oem.ProcessorMemory)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="An array of references to the endpoints that connect to this processor."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be a reference to the resources that this processor is associated with and shall reference a resource of type Endpoint."/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated in favor of IntegratedMemory."/>
        </Property>
        <Property Name="ThermalDesignPowerWatt" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Thermal Design Power (TDP) of this processor."/>
          <Annotation Term="OData.LongDescription" String="Thermal Design Power (TDP) of this processor."/>
        </Property>
        <Property Name="FPGA" Type="Intel.Oem.FPGA">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="FPGA specific properties for FPGA ProcessorType."/>
          <Annotation Term="OData.LongDescription"
                      String="For FPGA ProcessorType this property will expose FPGA-specific data."/>
        </Property>
        <NavigationProperty Name="Metrics" Type="Intel_RackScale.ProcessorMetrics.ProcessorMetrics" ContainsTarget="true"
                            Nullable="false">
          <Annotation Term="OData.Description" String="A reference to the Metrics associated with this Processor."/>
          <Annotation Term="OData.LongDescription" String="A reference to the Metrics associated with this Processor."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <Property Name="ExtendedIdentificationRegisters" Type="Intel.Oem.ExtendedIdentificationRegister">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read" />
          <Annotation Term="OData.Description" String="Extended contents of the Identification Registers (CPUID) for this processor." />
          <Annotation Term="OData.LongDescription" String="This property shall include the extended raw CPUID instruction output for  (that is for all possible combinations of input registers) as provided by the manufacturer of this processor." />
        </Property>
        <NavigationProperty Name="PCIeFunction" Type="PCIeFunction.PCIeFunction">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="A reference to the PCIe function that provides this processor functionality."/>
          <Annotation Term="OData.LongDescription"
                      String="A reference to the PCIe function that provides this processor functionality."/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="ProcessorLinks" BaseType="Resource.OemObject">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <NavigationProperty Name="Endpoints" Type="Collection(Endpoint.Endpoint)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the endpoints that connect to this processor."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a reference to the resources that this processor is associated with and shall reference a resource of type Endpoint."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="ConnectedProcessors" Type="Collection(Processor.Processor)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the processors directly connected to this processor."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a reference to the resources that this processor is directly connected and shall reference a resource of type Processor."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="PCIeFunctionLinks" BaseType="Resource.OemObject">
      <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <NavigationProperty Name="Processors" Type="Collection(Processor.Processor)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of references to the processors which the PCIe device produces."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall reference a resource of type Processor that represents the processors associated with this resource."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>

      <EnumType Name="ProcessorBrand">
        <Member Name="E3">
          <Annotation Term="OData.Description" String="Xeon E3 CPU family."/>
        </Member>
        <Member Name="E5">
          <Annotation Term="OData.Description" String="Xeon E5 CPU family."/>
        </Member>
        <Member Name="E7">
          <Annotation Term="OData.Description" String="Xeon E7 CPU family."/>
        </Member>
        <Member Name="X3">
          <Annotation Term="OData.Description" String="uServer X3 CPU family."/>
        </Member>
        <Member Name="X5">
          <Annotation Term="OData.Description" String="uServer X5 CPU family."/>
        </Member>
        <Member Name="X7">
          <Annotation Term="OData.Description" String="uServer X7 CPU family."/>
        </Member>
        <Member Name="I3">
          <Annotation Term="OData.Description" String="Core i3 CPU family."/>
        </Member>
        <Member Name="I5">
          <Annotation Term="OData.Description" String="Core i5 CPU family."/>
        </Member>
        <Member Name="I7">
          <Annotation Term="OData.Description" String="Core i7 CPU family."/>
        </Member>
        <Member Name="Silver">
          <Annotation Term="OData.Description" String="Xeon Silver CPU family."/>
        </Member>
        <Member Name="Gold">
          <Annotation Term="OData.Description" String="Xeon Gold CPU family."/>
        </Member>
        <Member Name="Platinum">
          <Annotation Term="OData.Description" String="Xeon Platinum CPU family."/>
        </Member>
      </EnumType>

      <ComplexType Name="ProcessorMemory">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="Type" Type="Intel.Oem.ProcessorMemoryType">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Type of memory."/>
          <Annotation Term="OData.LongDescription" String="Type of memory."/>
        </Property>
        <Property Name="CapacityMB" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Memory capacity."/>
          <Annotation Term="OData.LongDescription" String="Memory capacity."/>
          <Annotation Term="Measures.Unit" String="MBy"/>
        </Property>
        <Property Name="SpeedMHz" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Memory speed."/>
          <Annotation Term="OData.LongDescription" String="Memory speed."/>
          <Annotation Term="Measures.Unit" String="MHz"/>
        </Property>
        <Annotation Term="OData.Description" String="On die processor memory."/>
      </ComplexType>

      <EnumType Name="ProcessorMemoryType">
        <Member Name="L1Cache"/>
        <Member Name="L2Cache"/>
        <Member Name="L3Cache"/>
        <Member Name="HBM"/>
        <Member Name="HBM2"/>
        <Member Name="Flash"/>
        <Member Name="DDR"/>
        <Member Name="DDR3"/>
        <Member Name="DDR4"/>
        <Member Name="GDDR5"/>
        <Member Name="EDRAM"/>
      </EnumType>

      <ComplexType Name="FPGA">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="Properties of the FPGA device."/>
        <Annotation Term="OData.LongDescription" String="The properties of the FPGA device represented by this Processor."/>
        <Property Name="Type" Type="Intel.Oem.FpgaType" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The FPGA type."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a type of the FPGA device."/>
        </Property>
        <Property Name="BitStreamVersion" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Version of BitStream loaded on FPGA."/>
          <Annotation Term="OData.LongDescription" String="Version of BitStream loaded on FPGA."/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated in favor of FwVersion."/>
        </Property>
        <Property Name="HSSIConfiguration" Type="Intel.Oem.HSSIConfig">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="High Speed Serial Interface configuration."/>
          <Annotation Term="OData.LongDescription" String="High Speed Serial Interface configuration."/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated in favor of HostInterface."/>
        </Property>
        <Property Name="HSSISideband" Type="Intel.Oem.HSSISideband">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="High Speed Serial Interface sideband interface type."/>
          <Annotation Term="OData.LongDescription"
                      String="High Speed Serial Interface sideband interface type."/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated in favor of SidebandInterface."/>
        </Property>
        <Property Name="Model" Type="Intel.Oem.FpgaModel" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The FPGA model."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a model of the FPGA device."/>
        </Property>
        <Property Name="FwId" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The FPGA firmware identifier."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain a string describing the FPGA firmware identifier. A format of the identifier is vendor specific."/>
        </Property>
        <Property Name="FwManufacturer" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The FPGA firmware manufacturer."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain a string describing the FPGA firmware manufacturer."/>
        </Property>
        <Property Name="FwVersion" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The FPGA firmware version."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain a string describing the FPGA firmware version."/>
        </Property>
        <Property Name="HostInterface" Type="Intel.Oem.FpgaInterface" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The FPGA interface to the host."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a type of the FPGA interface to the host."/>
        </Property>
        <Property Name="ExternalInterfaces" Type="Collection(Intel.Oem.FpgaInterface)" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="An array of the FPGA external interfaces."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of the FPGA external interfaces."/>
        </Property>
        <Property Name="SidebandInterface" Type="Intel.Oem.FpgaInterface" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The FPGA sideband interface."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a type of the FPGA sideband interface."/>
        </Property>
        <Property Name="PCIeVirtualFunctions" Type="Edm.Int64" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Number of the PCIe Virtual Functions."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a number of PCIe Virtual Functions configured within the FPGA."/>
        </Property>
        <Property Name="ProgrammableFromHost" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="This flag indicates if the FPGA FW can be reprogrammed from the host."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall indicate whether the FPGA FW can be reprogrammed from the host. If set to false, a FPGA FW can be programmed through the sideband interface only."/>
        </Property>
        <Property Name="ReconfigurationSlots" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Number of supported reconfiguration slots."/>
          <Annotation Term="OData.LongDescription" String="Number of supported reconfiguration slots."/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated in favor of size of FpgaReconfigurationSlotsDetails."/>
        </Property>
        <Property Name="ReconfigurationSlotsDetails" Type="Collection(Intel.Oem.FpgaReconfigurationSlot)" Nullable="false">
          <Annotation Term="OData.Description" String="An array of the FPGA reconfiguration slots."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array of the structures describing the FPGA reconfiguration slots that can be programmed with the acceleration function code."/>
        </Property>
        <NavigationProperty Name="AccelerationFunctions" Type="AccelerationFunctionCollection.AccelerationFunctionCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The value of this property shall be a reference to the resources that this processor uses and shall reference a resource of type AccelerationFunction."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a reference to the resources that this processor uses and shall reference a resource of type AccelerationFunction."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <Property Name="Erased" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read" Qualifier="PODM"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite" Qualifier="PSME"/>
          <Annotation Term="OData.Description"
                      String="This indicates whether an FPGA was cleared after assignment to composed node."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall represent the erase state of an FPGA."/>
        </Property>
      </ComplexType>

      <ComplexType Name="FpgaReconfigurationSlot">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="This type describes the FPGA reconfiguration slot."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain information about FPGA reconfiguration slot."/>
        <Property Name="SlotId" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The FPGA slot identifier."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a type of the integrated memory type."/>
        </Property>
        <Property Name="UUID" Type="Resource.UUID">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The universal unique identifier (UUID) for this reconfiguration slot."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be used to contain a universal unique identifier number for the reconfiguration slot."/>
        </Property>
        <Property Name="ProgrammableFromHost" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="This flag indicates if the reconfiguration slot can be programmed from the host."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall indicate whether the reconfiguration slot can be reprogrammed from the host. If set to ‘false’ a reconfiguration slot can be programmed through the sideband interface only."/>
        </Property>
        <NavigationProperty Name="AccelerationFunction" Type="AccelerationFunction.AccelerationFunction">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A link to the Acceleration Function provided by the code programmed into a reconfiguration slot."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a reference to the acceleration function resources provided by the code programmed into a reconfiguration slot and shall reference a resource of type AccelerationFunction."/>
        </NavigationProperty>
      </ComplexType>

      <TypeDefinition Name="FpgaType" UnderlyingType="Edm.String">
        <Annotation Term="Redfish.Enumeration">
          <Collection>
            <Record>
              <PropertyValue Property="Member" String="Integrated"/>
              <Annotation Term="OData.Description" String="The FPGA device integrated with other processor in the single chip."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="Discrete"/>
              <Annotation Term="OData.Description" String="The discrete FPGA device."/>
            </Record>
          </Collection>
        </Annotation>
      </TypeDefinition>

      <TypeDefinition Name="FpgaModel" UnderlyingType="Edm.String">
        <Annotation Term="Redfish.Enumeration">
          <Collection>
            <Record>
              <PropertyValue Property="Member" String="Arria10"/>
              <Annotation Term="OData.Description" String="The Arria 10 FPGA device"/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="Stratix10"/>
              <Annotation Term="OData.Description" String="The Stratix 10 FPGA device."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="Stratix11"/>
              <Annotation Term="OData.Description" String="The Startix 11 FPGA device"/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="OEM"/>
              <Annotation Term="OData.Description" String="OEM-defined."/>
            </Record>
          </Collection>
        </Annotation>
      </TypeDefinition>

      <TypeDefinition Name="FpgaInterface" UnderlyingType="Edm.String">
        <Annotation Term="Redfish.Enumeration">
          <Collection>
            <Record>
              <PropertyValue Property="Member" String="QPI"/>
              <Annotation Term="OData.Description" String="The Intel QuickPath Interconnect."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="UPI"/>
              <Annotation Term="OData.Description" String="The Intel UltraPath Interconnect."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="2xPCIe-4"/>
              <Annotation Term="OData.Description" String="The two lines PCIe version four."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="4xPCIe-4"/>
              <Annotation Term="OData.Description" String="The four lines PCIe version four."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="8xPCIe-4"/>
              <Annotation Term="OData.Description" String="The eight lines PCIe version four."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="16xPCIe-4"/>
              <Annotation Term="OData.Description" String="The sixteen lines PCIe version four."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="2xPCIe-5"/>
              <Annotation Term="OData.Description" String="The two lines PCIe version five."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="4xPCIe-5"/>
              <Annotation Term="OData.Description" String="The four lines PCIe version five."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="8xPCIe-5"/>
              <Annotation Term="OData.Description" String="The eight lines PCIe version five."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="16xPCIe-5"/>
              <Annotation Term="OData.Description" String="The sixteen lines PCIe version five."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="1x10G"/>
              <Annotation Term="OData.Description" String="The single 10G Ethernet interface."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="2x10G"/>
              <Annotation Term="OData.Description" String="The two 10G Ethernet interfaces."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="4x10G"/>
              <Annotation Term="OData.Description" String="The four 10G Ethernet interfaces."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="10x10G"/>
              <Annotation Term="OData.Description" String="The ten 10G Ethernet interfaces."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="1x25G"/>
              <Annotation Term="OData.Description" String="The single 25G Ethernet interface."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="2x25G"/>
              <Annotation Term="OData.Description" String="The two 25G Ethernet interfaces."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="4x25G"/>
              <Annotation Term="OData.Description" String="The four 25G Ethernet interfaces."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="1x40G"/>
              <Annotation Term="OData.Description" String="The single 40G Ethernet interface."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="2x40G"/>
              <Annotation Term="OData.Description" String="The two 40G Ethernet interfaces."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="1x50G"/>
              <Annotation Term="OData.Description" String="The single 50G Ethernet interface."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="2x50G"/>
              <Annotation Term="OData.Description" String="The two 50G Ethernet interfaces."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="1x100G"/>
              <Annotation Term="OData.Description" String="The single 100G Ethernet interface."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="SPI"/>
              <Annotation Term="OData.Description" String="The Serial Peripheral Interface Bus."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="SMBus"/>
              <Annotation Term="OData.Description" String="The System Management Bus."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="I2C"/>
              <Annotation Term="OData.Description" String="The I2C Bus."/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="OEM"/>
              <Annotation Term="OData.Description" String="OEM-defined."/>
            </Record>
          </Collection>
        </Annotation>
      </TypeDefinition>

      <TypeDefinition Name="HSSIConfig" UnderlyingType="Edm.String">
        <Annotation Term="Redfish.Enumeration">
          <Collection>
            <Record>
              <PropertyValue Property="Member" String="4x10G"/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="2x40G"/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="10x10G"/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="PCIe"/>
            </Record>
          </Collection>
        </Annotation>
      </TypeDefinition>

      <TypeDefinition Name="HSSISideband" UnderlyingType="Edm.String">
        <Annotation Term="Redfish.Enumeration">
          <Collection>
            <Record>
              <PropertyValue Property="Member" String="SPI"/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="I2C-0"/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="I2C-1"/>
            </Record>
            <Record>
              <PropertyValue Property="Member" String="I2C"/>
            </Record>
          </Collection>
        </Annotation>
      </TypeDefinition>

      <ComplexType Name="ExtendedIdentificationRegister">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="Redfish.DynamicPropertyPatterns">
          <Collection>
            <Record>
              <PropertyValue Property="Pattern" String="[A-Za-z0-9_.:]+"/>
              <PropertyValue Property="Type" String="Edm.String"/>
            </Record>
          </Collection>
        </Annotation>
        <Annotation Term="OData.Description" String="The contents of the Identification Registers (CPUID) for this processor for specific combination of input registers." />
        <Annotation Term="OData.LongDescription" String="This property shall include the raw CPUID instruction output as provided by the manufacturer of this processor for specific combination of input registers." />
      </ComplexType>

      <ComplexType Name="ServiceRoot" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="ApiVersion" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Version of Rack Scale Design API exposed by this service."/>
          <Annotation Term="OData.LongDescription"
                      String="Version of Intel® RSD API exposed by this service."/>
        </Property>
        <NavigationProperty Name="EthernetSwitches" Type="EthernetSwitchCollection.EthernetSwitchCollection">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is a link to a collection Ethernet Switches."/>
          <Annotation Term="OData.LongDescription"
                      String="The classes structure shall only contain a reference to a resource that complies to the EthernetSwitch schema."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="Nodes" Type="ComposedNodeCollection.ComposedNodeCollection">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is a link to a collection of Nodes."/>
          <Annotation Term="OData.LongDescription"
                      String="This object shall only contain a reference to a collection of resources that comply to the Nodes schema."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="TelemetryService" Type="Intel_RackScale.TelemetryService.TelemetryService">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is a link to the Telemetry Service."/>
          <Annotation Term="OData.LongDescription"
                      String="The classes structure shall only contain a reference to a resource that complies to the TelemetryService schema."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="VLanNetworkInterface" BaseType="Intel.Oem.Resource">
        <Property Name="Status" Type="Resource.Status"/>
        <Property Name="Tagged" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="This indicates if VLAN is tagged (as defined in IEEE 802.1Q)."/>
          <Annotation Term="OData.LongDescription"
                      String="This indicates if VLAN is tagged (as defined in IEEE 802.1Q)."/>
        </Property>
      </ComplexType>

      <ComplexType Name="Drive" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="EraseOnDetach" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite" Qualifier="PODM"/>
          <Annotation Term="OData.Description" String="This indicates if drive should be erased when detached from PCI switch."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall represent the state of policy for protecting data stored on drive connected to PCI switch. If set to null it is interpreted as it would be set to true."/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated, to prevent drive from being erased, the administrator should detach the drive from a node first."/>
        </Property>
        <Property Name="DriveErased" Type="Edm.Boolean" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read" Qualifier="PODM"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite" Qualifier="PSME"/>
          <Annotation Term="OData.Description"
                      String="This indicates whether drive was cleared after assignment to composed node."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall represent the erase state of drive."/>
        </Property>
        <Property Name="FirmwareVersion" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This indicates drive firmware version."/>
          <Annotation Term="OData.LongDescription" String="This indicates drive firmware version."/>
        </Property>
        <NavigationProperty Name="Storage" Type="Storage.Storage">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="A reference to the storage controller where this drive is connected."/>
          <Annotation Term="OData.LongDescription"
                      String="A reference to the storage controller where this drive is connected."/>
        </NavigationProperty>
        <NavigationProperty Name="PCIeFunction" Type="PCIeFunction.PCIeFunction">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="A reference to the PCIe function that provides this drive functionality."/>
          <Annotation Term="OData.LongDescription"
                      String="A reference to the PCIe function that provides this drive functionality."/>
        </NavigationProperty>
        <NavigationProperty Name="UsedBy" Type="Collection(StoragePool.StoragePool)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="An array of references to the storage pools using the drive."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be a reference to the resources that this drive is associated with and shall reference a resource of type storage pool."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="Metrics" Type="DriveMetrics.DriveMetrics" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Description" String="A reference to the Metrics associated with this Drive."/>
          <Annotation Term="OData.LongDescription" String="A reference to the Metrics associated with this Drive."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <Property Name="LatencyTrackingEnabled" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="This indicates if latency tracking is enabled in drive firmware."/>
          <Annotation Term="OData.LongDescription" String="This indicates if latency tracking is enabled in drive firmware."/>
        </Property>
      </ComplexType>

      <ComplexType Name="ChassisLinks" BaseType="Resource.OemObject">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <NavigationProperty Name="EthernetSwitches" Type="Collection(EthernetSwitch.v1_0_0.EthernetSwitch)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="An array of references to the ethernet switches located in this Chassis."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall reference one or more resources of type EthernetSwitch that are in this Chassis."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="Switches" Type="Collection(EthernetSwitch.v1_0_0.EthernetSwitch)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="An array of references to the ethernet switches located in this Chassis."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall reference one or more resources of type EthernetSwitch that are in this Chassis."/>
          <Annotation Term="OData.AutoExpandReferences"/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated in favor of EthernetSwitches."/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="Port" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="PCIeConnectionId" Type="Collection(Edm.String)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="An array of references to the PCIe connection identifiers (e.g. cable ID)."/>
          <Annotation Term="OData.LongDescription"
                      String="An array of references to the PCIe connection identifiers (e.g. cable ID)."/>
        </Property>
        <NavigationProperty Name="Metrics" Type="PortMetrics.PortMetrics" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Description" String="A reference to the Metrics associated with this Port."/>
          <Annotation Term="OData.LongDescription" String="A reference to the Metrics associated with this Port."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="Power" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="Extended Power resource."/>
        <Annotation Term="OData.LongDescription" String="Extended Power resource."/>
        <Property Name="Actions" Type="Intel.Oem.Actions">
          <Annotation Term="OData.Description" String="Additional actions for Power resource."/>
          <Annotation Term="OData.LongDescription" String="Additional actions for Power resource."/>
        </Property>
        <Property Name="InputACPowerWatts" Type="Edm.Decimal">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The global power level on AC side in Watts."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall represent the global power level on AC side in Watts, requires platform instrumentation to get reports of AC power."/>
          <Annotation Term="Measures.Unit" String="W"/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
      </ComplexType>

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
      </ComplexType>

      <Action Name="RequestPowerSupplyStateChange" IsBound="true">
        <Parameter Name="Power" Type="Intel.Oem.Actions"/>
        <Parameter Name="State" Type="Intel.Oem.PowerSupplyState">
          <Annotation Term="OData.Description" String="This is the requested state of PSU."/>
          <Annotation Term="OData.LongDescription" String="This property defines requested state of Power Supply to be changed to."/>
        </Parameter>
        <Parameter Name="MemberId" Type="Edm.String">
          <Annotation Term="OData.Description" String="This is the identifier for the Power Supply within the PowerSupplies collection."/>
          <Annotation Term="OData.LongDescription" String="This is the identifier for the Power Supply within the PowerSupplies collection."/>
        </Parameter>
        <Annotation Term="OData.Description"
                    String="This action is used to change state of Power Supply."/>
        <Annotation Term="OData.LongDescription"
                    String="This action is used to change state of Power Supply."/>
      </Action>

      <EnumType Name="PowerSupplyState">
        <Member Name="Enabled"/>
        <Member Name="Disabled"/>
      </EnumType>

      <ComplexType Name="Thermal" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="Extended Thermal resource."/>
        <Annotation Term="OData.LongDescription" String="Extended Thermal resource."/>
        <Property Name="VolumetricAirflowCfm" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Volumetric Air Flow measured in Cubic Feet per Minute."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be Volumetric Air Flow measured in Cubic Feet per Minute. This metric requires Inlet and Outlet temperature sensor readings"/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
        <Property Name="DesiredSpeedPwm" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description"
                      String="This property represent desired speed of all FANs in current chassis as percentage of max speed."/>
          <Annotation Term="OData.LongDescription"
                      String="This property represents desired speed of all FANs in current chassis as percentage of maximum fan speed."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
          <Annotation Term="Validation.Maximum" Int="100"/>
        </Property>
      </ComplexType>

      <ComplexType Name="MetricDefinition" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="CalculationPrecision" Type="Edm.Double">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="This property specifies the precision of a calculated metric (calculated metric shall be aligned to a value specified by This property ."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of the property shall specify the precision of a calculated metric (calculated metric shall be aligned to a value specified by this property)"/>
        </Property>
        <Property Name="DiscreteMetricType" Type="Intel.Oem.MetricValueType">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description"
                      String="This array property specifies possible values of a discrete metric."/>
          <Annotation Term="OData.LongDescription"
                      String="The values of the property shall specify type of the discrete metric. It specifies whether single or multiple values defined in DiscreteValues array are valid for specific metric, metric property shall be defined accordingly.  This property shall be defined only when the MetricType property has the value 'Discrete'."/>
        </Property>
      </ComplexType>
      <EnumType Name="MetricValueType">
        <Annotation Term="OData.Description" String="The type of Discrete Metric reading."/>
        <Annotation Term="OData.LongDescription"
                    String="The value shall indicate the type of Discrete Metric reading."/>
        <Member Name="Single">
          <Annotation Term="OData.Description" String="Single entry from DiscreteValues array is allowed as Discrete Metric Reading."/>
        </Member>
        <Member Name="Multiple">
          <Annotation Term="OData.Description" String="Multiple entries from DiscreteValues array is allowed as Discrete Metric Reading."/>
        </Member>
      </EnumType>

      <Action Name="LoadFactoryDefaults" IsBound="true">
        <Parameter Name="Manager" Type="Manager.v1_0_0.OemActions"/>
      </Action>

      <ComplexType Name="VolumeLinks" BaseType="Resource.OemObject">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <NavigationProperty Name="Endpoints" Type="Collection(Endpoint.Endpoint)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="An array of references to the endpoints that connect to this volume."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of this property shall be a reference to the resources that this volume is associated with and shall reference a resource of type Endpoint."/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="StorageServiceLinks" BaseType="Resource.OemObject">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <NavigationProperty Name="ManagedBy" Type="Collection(Manager.Manager)">
          <Annotation Term="OData.Description"
                      String="Collection of managers managing the service."/>
          <Annotation Term="OData.LongDescription"
                      String="Collection of managers managing the service."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="Endpoint" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="Authentication" Type="Intel.Oem.EndpointAuthentication">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description"
                      String="Endpoint authentication."/>
          <Annotation Term="OData.LongDescription"
                      String="This property provides information about endpoint authentication required credentials."/>
        </Property>
        <Property Name="EndpointProtocol" Type="Intel.Oem.Protocol">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="Additional specification for OEM EndpointProtocol."/>
          <Annotation Term="OData.LongDescription"
                      String="Additional specification for OEM EndpointProtocol. Shall be specified if the Redfish EndpointProtocol is OEM."/>
        </Property>
      </ComplexType>

      <ComplexType Name="EndpointAuthentication">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="Endpoint authentication credentials."/>
        <Property Name="Username" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Endpoint username."/>
          <Annotation Term="OData.LongDescription"
                      String="This property provides an endpoint username that is used to authenticate it on other side of communication channel." />
        </Property>
        <Property Name="Password" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Write"/>
          <Annotation Term="OData.Description" String="Endpoint password."/>
          <Annotation Term="OData.LongDescription"
                      String="This property is used to provide an endpoint password. It provides write only access. On read, it shall return null value." />
        </Property>
      </ComplexType>

      <ComplexType Name="ConnectedEntity" BaseType="Resource.OemObject">
        <Property Name="LUN" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="Logical Unit Number for iSCSI protocol."/>
          <Annotation Term="OData.LongDescription"
                      String="Logical Unit Number for iSCSI protocol. This property shall be specified for Target endpoints."/>
          <Annotation Term="Validation.Minimum" Int="1"/>
        </Property>
      </ComplexType>

      <ComplexType Name="Volume" BaseType="Intel.Oem.Resource">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="Bootable" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description"
                      String="Determines if volume is bootable."/>
          <Annotation Term="OData.LongDescription"
                      String="This property provides information about the bootable capability of the volume."/>
        </Property>
        <Property Name="Assigned" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="Determines if the volume is reserved for usage by a specific host, user or service."/>
          <Annotation Term="OData.LongDescription"
                      String="This property determines if the volume is reserved for usage by a specific host, user or service, for example for an NVMe-oF Initiator."/>
        </Property>
        <Property Name="EraseOnDetach" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite" Qualifier="PODM"/>
          <Annotation Term="OData.Description" String="This indicates if volume should be erased when detached from initiator host."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall represent the state of policy for protecting data stored on a drive connected to an initiator host. If set to null, it is interpreted as true."/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated. Volume will be erased by default, to prevent it from being erased, the administrator should detach the volume from a node first."/>
        </Property>
        <Property Name="Erased" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read" Qualifier="PODM"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite" Qualifier="PSME"/>
          <Annotation Term="OData.Description"
                      String="This indicates whether volume was cleared after assignment to composed node."/>
          <Annotation Term="OData.LongDescription"
                      String="This property shall be set to true if the volume was erased."/>
          <Annotation Term="Redfish.Deprecated" String="This value has been Deprecated. Volumes are automatically erased after node is being deleted."/>
        </Property>
        <NavigationProperty Name="Metrics" Type="VolumeMetrics.VolumeMetrics" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Description" String="A reference to the Metrics associated with this Volume"/>
          <Annotation Term="OData.LongDescription" String="A reference to the metrics associated with this volume."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>

      <ComplexType Name="EndpointLinks" BaseType="Resource.OemObject">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <NavigationProperty Name="Zones" Type="Collection(Zone.Zone)">
          <Annotation Term="OData.AutoExpandReferences"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="An array of references to the Zone resources containing this endpoint."/>
          <Annotation Term="OData.LongDescription"
                      String="The value of the property is a reference to the resources that the endpoint is associated with and references a resource of type Zone."/>
        </NavigationProperty>
        <NavigationProperty Name="Interfaces" Type="Collection(Resource.Resource)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description"
                      String="Specifies the interfaces on which this transport is available."/>
          <Annotation Term="OData.LongDescription"
                      String="This property is an array of references to resources representing interface where this endpoint is available."/>
        </NavigationProperty>
      </ComplexType>
    </Schema>
  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_INTEL_RACK_SCALE_OEM_V1_HPP */
