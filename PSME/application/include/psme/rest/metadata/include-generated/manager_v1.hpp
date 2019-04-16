#ifndef PSME_REST_METADATA_MANAGER_V1_HPP
#define PSME_REST_METADATA_MANAGER_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string Manager_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!--################################################################################       -->
<!--# Redfish Schema:  Manager  v1.5.0-->
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
  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Capabilities.V1.xml">
    <edmx:Include Namespace="Org.OData.Capabilities.V1" Alias="Capabilities"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/RedfishExtensions_v1.xml">
    <edmx:Include Namespace="Validation.v1_0_0" Alias="Validation"/>
    <edmx:Include Namespace="RedfishExtensions.v1_0_0" Alias="Redfish"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource"/>
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/ComputerSystem_v1.xml">
    <edmx:Include Namespace="ComputerSystem"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Chassis_v1.xml">
    <edmx:Include Namespace="Chassis"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/EthernetInterfaceCollection_v1.xml">
    <edmx:Include Namespace="EthernetInterfaceCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/ManagerNetworkProtocol_v1.xml">
    <edmx:Include Namespace="ManagerNetworkProtocol"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/VirtualMediaCollection_v1.xml">
    <edmx:Include Namespace="VirtualMediaCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/SerialInterfaceCollection_v1.xml">
    <edmx:Include Namespace="SerialInterfaceCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Redundancy_v1.xml">
    <edmx:Include Namespace="Redundancy"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/LogServiceCollection_v1.xml">
    <edmx:Include Namespace="LogServiceCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/HostInterfaceCollection_v1.xml">
    <edmx:Include Namespace="HostInterfaceCollection"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Switch_v1.xml">
    <edmx:Include Namespace="Switch"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/AccountService_v1.xml">
    <edmx:Include Namespace="AccountService"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="Manager" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="In Redfish, a Manager is a systems management entity which may implement or provide access to a Redfish service.  Examples of managers are BMCs, Enclosure Managers, Management Controllers and other subsystems assigned managability functions.  There may be multiple Managers in an implementation, and they may or may not be directly accessible via a Redfish-defined interface."/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to represent a management subsystem for a Redfish implementation."/>
        <Annotation Term="Capabilities.InsertRestrictions">
          <Record>
            <PropertyValue Property="Insertable" Bool="false"/>
          </Record>
        </Annotation>
        <Annotation Term="Capabilities.UpdateRestrictions">
          <Record>
            <PropertyValue Property="Updatable" Bool="true"/>
            <Annotation Term="OData.Description" String="Managers can be updated to change the date and time settings and other writable properties."/>
          </Record>
        </Annotation>
        <Annotation Term="Capabilities.DeleteRestrictions">
          <Record>
            <PropertyValue Property="Deletable" Bool="false"/>
          </Record>
        </Annotation>
        <Annotation Term="Redfish.Uris">
          <Collection>
            <String>/redfish/v1/Managers/{ManagerId}</String>
          </Collection>
        </Annotation>
      </EntityType>

      <Action Name="Reset" IsBound="true">
        <Parameter Name="Manager" Type="Manager.v1_0_0.Actions"/>
        <Parameter Name="ResetType" Type="Resource.ResetType">
          <Annotation Term="OData.Description" String="This is the type of reset to be performed."/>
          <Annotation Term="OData.LongDescription" String="This parameter shall define the type of reset to be performed.  The service may accept a request without the parameter and perform an implementation specific default reset."/>
        </Parameter>
        <Annotation Term="OData.Description" String="The reset action resets/reboots the manager."/>
        <Annotation Term="OData.LongDescription" String="This action shall perform a reset of the manager."/>
      </Action>

      <Action Name="ForceFailover" IsBound="true">
        <Annotation Term="OData.Description" String="The ForceFailover action forces a failover of this manager to the manager used in the parameter."/>
        <Annotation Term="OData.LongDescription" String="This action shall perform a forced failover of the manager's redundancy to the manager supplied as a parameter."/>
        <Parameter Name="Manager" Type="Manager.v1_0_0.Actions"/>
        <Parameter Name="NewManager" Type="Manager.Manager" Nullable="false">
          <Annotation Term="OData.Description" String="This parameter specifies the Manager in which to fail over.  In this case, a valid reference is supported."/>
          <Annotation Term="OData.LongDescription" String="This parameter shall contain a resource reference of the Manager in which to fail over."/>
        </Parameter>
      </Action>

      <Action Name="ModifyRedundancySet" IsBound="true">
        <Annotation Term="OData.Description" String="The ModifyRedundancySet operation is used to add or remove members to a redundant group of manager."/>
        <Annotation Term="OData.LongDescription" String="The ModifyRedundancySet operation shall be used to add or remove members to a redundant group of manager."/>
        <Parameter Name="Manager" Type="Manager.v1_0_0.Actions"/>
        <Parameter Name="Add" Type="Collection(Manager.Manager)">
          <Annotation Term="OData.Description" String="This array defines the Managers to add to the redundancy set.  In this case, a valid reference is supported."/>
          <Annotation Term="OData.LongDescription" String="This parameter shall contain an array of resource references of the Managers to add to the redundancy set."/>
        </Parameter>
        <Parameter Name="Remove" Type="Collection(Manager.Manager)">
          <Annotation Term="OData.Description" String="This array defines the Managers to remove from the redundancy set.  In this case, a valid reference is supported."/>
          <Annotation Term="OData.LongDescription" String="This parameter shall contain an array of resource references of the Managers to remove from the redundancy set."/>
        </Parameter>
      </Action>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_0_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="Manager" BaseType="Manager.Manager">
        <Annotation Term="OData.Description" String="This is the schema definition for a Manager.  Examples of managers are BMCs, Enclosure Managers, Management Controllers and other subsystems assigned managability functions."/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to represent a management subsystem for a Redfish implementation."/>
        <Property Name="ManagerType" Type="Manager.v1_0_0.ManagerType" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This property represents the type of manager that this resource represents."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall describe the function of this manager.  The value EnclosureManager shall be used if this manager controls one or more services through aggregation.  The value BMC shall be used if this manager represents a traditional server management controller. The value ManagementController shall be used if none of the other enumerations apply."/>
        </Property>
        <Property Name="Links" Type="Manager.v1_0_0.Links" Nullable="false">
          <Annotation Term="OData.Description" String="Contains references to other resources that are related to this resource."/>
          <Annotation Term="OData.LongDescription" String="The Links property, as described by the Redfish Specification, shall contain references to resources that are related to, but not contained by (subordinate to), this resource."/>
        </Property>
        <NavigationProperty Name="EthernetInterfaces" Type="EthernetInterfaceCollection.EthernetInterfaceCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is a reference to a collection of NICs that this manager uses for network communication.  It is here that clients will find NIC configuration options and settings."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type EthernetInterfaceCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="SerialInterfaces" Type="SerialInterfaceCollection.SerialInterfaceCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is a reference to a collection of serial interfaces that this manager uses for serial and console communication.  It is here that clients will find serial configuration options and settings."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type SerialInterfaceCollection which are for the use of this manager."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="NetworkProtocol" Type="ManagerNetworkProtocol.ManagerNetworkProtocol" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is a reference to the network services and their settings that the manager controls.  It is here that clients will find network configuration options as well as network services."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain a reference to a resource of type ManagerNetworkProtocol which represents the network services for this manager."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="LogServices" Type="LogServiceCollection.LogServiceCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is a reference to a collection of Logs used by the manager."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain a reference to a collection of type LogServiceCollection which are for the use of this manager."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="VirtualMedia" Type="VirtualMediaCollection.VirtualMediaCollection" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is a reference to the Virtual Media services for this particular manager."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain a reference to a collection of type VirtualMediaCollection which are for the use of this manager."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <Property Name="ServiceEntryPointUUID" Type="Resource.UUID">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The UUID of the Redfish Service provided by this manager."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the UUID of the Redfish Service provided by this manager.  Each Manager providing an Entry Point to the same Redfish Service shall report the same UUID value (even though the name of the property may imply otherwise).  This property shall not be present if this manager does not provide a Redfish Service Entry Point."/>
        </Property>
        <Property Name="UUID" Type="Resource.UUID">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The Universal Unique Identifier (UUID) for this Manager."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the universal unique identifier number for the manager."/>
        </Property>
        <Property Name="Model" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The model information of this Manager as defined by the manufacturer."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the information about how the manufacturer references this manager."/>
        </Property>
        <Property Name="DateTime" Type="Edm.DateTimeOffset">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The current DateTime (with offset) for the manager, used to set or read time."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall represent the current DateTime value for the manager, with offset from UTC, in Redfish Timestamp format."/>
        </Property>
        <Property Name="DateTimeLocalOffset" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The time offset from UTC that the DateTime property is set to in format: +06:00 ."/>
          <Annotation Term="OData.LongDescription" String="The value is property shall represent the offset from UTC time that the current value of DataTime property contains."/>
          <Annotation Term="Validation.Pattern" String="([-+][0-1][0-9]:[0-5][0-9])"/>
        </Property>
        <Property Name="FirmwareVersion" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The firmware version of this Manager."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the firwmare version as defined by the manufacturer for the associated manager."/>
        </Property>
        <Property Name="SerialConsole" Type="Manager.v1_0_0.SerialConsole" Nullable="false">
          <Annotation Term="OData.Description" String="Information about the Serial Console service provided by this manager."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain information about the Serial Console service of this manager."/>
        </Property>
        <Property Name="CommandShell" Type="Manager.v1_0_0.CommandShell" Nullable="false">
          <Annotation Term="OData.Description" String="Information about the Command Shell service provided by this manager."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain information about the Command Shell service of this manager."/>
        </Property>
        <Property Name="GraphicalConsole" Type="Manager.v1_0_0.GraphicalConsole" Nullable="false">
          <Annotation Term="OData.Description" String="The value of this property shall contain the information about the Graphical Console (KVM-IP) service of this manager."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the information about the Graphical Console (KVM-IP) service of this manager."/>
        </Property>
        <Property Name="Actions" Type="Manager.v1_0_0.Actions" Nullable="false">
          <Annotation Term="OData.Description" String="The available actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
        </Property>
        <Property Name="Status" Type="Resource.Status" Nullable="false">
          <Annotation Term="OData.Description" String="This property describes the status and health of the resource and its children."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain any status or health properties of the resource."/>
        </Property>
        <NavigationProperty Name="Redundancy" Type="Collection(Redundancy.Redundancy)" ContainsTarget="true">
          <Annotation Term="OData.Description" String="Redundancy information for the managers of this system."/>
          <Annotation Term="OData.LongDescription" String="The values of the properties in this array shall be used to show how this manager is grouped with other managers for form redundancy sets."/>
          <Annotation Term="OData.AutoExpand"/>
        </NavigationProperty>
      </EntityType>

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The available actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain the available actions for this resource."/>
        <Property Name="Oem" Type="Manager.v1_0_0.OemActions" Nullable="false">
          <Annotation Term="OData.Description" String="This property contains the available OEM specific actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain any additional OEM actions for this resource."/>
        </Property>
      </ComplexType>

      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="The available OEM specific actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional OEM actions for this resource."/>
      </ComplexType>

      <ComplexType Name="Links" BaseType="Resource.Links">
        <Annotation Term="OData.Description" String="Contains references to other resources that are related to this resource."/>
        <Annotation Term="OData.LongDescription" String="This type, as described by the Redfish Specification, shall contain references to resources that are related to, but not contained by (subordinate to), this resource."/>
        <NavigationProperty Name="ManagerForServers" Type="Collection(ComputerSystem.ComputerSystem)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This property is an array of references to the systems that this manager has control over."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain an array of references to ComputerSystem resources of which this Manager instance has control."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
        <NavigationProperty Name="ManagerForChassis" Type="Collection(Chassis.Chassis)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This property is an array of references to the chassis that this manager has control over."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain an array of references to Chassis resources of which this Manager instance has control."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>

      <EnumType Name="ManagerType">
        <Member Name="ManagementController">
          <Annotation Term="OData.Description" String="A controller used primarily to monitor or manage the operation of a device or system."/>
        </Member>
        <Member Name="EnclosureManager">
          <Annotation Term="OData.Description" String="A controller which provides management functions for a chassis or group of devices or systems."/>
        </Member>
        <Member Name="BMC">
          <Annotation Term="OData.Description" String="A controller which provides management functions for a single computer system."/>
        </Member>
        <Member Name="RackManager">
          <Annotation Term="OData.Description" String="A controller which provides management functions for a whole or part of a rack."/>
        </Member>
        <Member Name="AuxiliaryController">
          <Annotation Term="OData.Description" String="A controller which provides management functions for a particular subsystem or group of devices."/>
        </Member>
        <Member Name="Service">
          <Annotation Term="OData.Description" String="A software-based service which provides management functions."/>
        </Member>
      </EnumType>

      <ComplexType Name="ManagerService" Abstract="true">
        <Annotation Term="OData.Description" String="Used for describing services like Serial Console, Command Shell or Graphical Console."/>
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Property Name="ServiceEnabled" Type="Edm.Boolean" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Indicates if the service is enabled for this manager."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the enabled status of the protocol used for the service.  The value shall be true if enabled and false if disabled."/>
        </Property>
        <Property Name="MaxConcurrentSessions" Type="Edm.Int64" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Indicates the maximum number of service sessions, regardless of protocol, this manager is able to support."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the maximum number of concurrent service sessions supported by the implementation."/>
          <Annotation Term="Validation.Minimum" Int="0"/>
        </Property>
      </ComplexType>

      <EnumType Name="SerialConnectTypesSupported">
        <Member Name="SSH">
          <Annotation Term="OData.Description" String="The controller supports a Serial Console connection using the SSH protocol."/>
        </Member>
        <Member Name="Telnet">
          <Annotation Term="OData.Description" String="The controller supports a Serial Console connection using the Telnet protocol."/>
        </Member>
        <Member Name="IPMI">
          <Annotation Term="OData.Description" String="The controller supports a Serial Console connection using the IPMI Serial-over-LAN (SOL) protocol."/>
        </Member>
        <Member Name="Oem">
          <Annotation Term="OData.Description" String="The controller supports a Serial Console connection using an OEM-specific protocol."/>
        </Member>
      </EnumType>

      <EnumType Name="CommandConnectTypesSupported">
        <Member Name="SSH">
          <Annotation Term="OData.Description" String="The controller supports a Command Shell connection using the SSH protocol."/>
        </Member>
        <Member Name="Telnet">
          <Annotation Term="OData.Description" String="The controller supports a Command Shell connection using the Telnet protocol."/>
        </Member>
        <Member Name="IPMI">
          <Annotation Term="OData.Description" String="The controller supports a Command Shell connection using the IPMI Serial-over-LAN (SOL) protocol."/>
        </Member>
        <Member Name="Oem">
          <Annotation Term="OData.Description" String="The controller supports a Command Shell connection using an OEM-specific protocol."/>
        </Member>
      </EnumType>

      <EnumType Name="GraphicalConnectTypesSupported">
        <Member Name="KVMIP">
          <Annotation Term="OData.Description" String="The controller supports a Graphical Console connection using a KVM-IP (redirection of Keyboard, Video, Mouse over IP) protocol."/>
        </Member>
        <Member Name="Oem">
          <Annotation Term="OData.Description" String="The controller supports a Graphical Console connection using an OEM-specific protocol."/>
        </Member>
      </EnumType>

      <ComplexType Name="SerialConsole" BaseType="Manager.v1_0_0.ManagerService">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="Information about a Serial Console service provided by a manager."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe a Serial Console service of a manager."/>
        <Property Name="ConnectTypesSupported" Type="Collection(Manager.v1_0_0.SerialConnectTypesSupported)" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This object is used to enumerate the Serial Console connection types allowed by the implementation."/>
          <Annotation Term="OData.LongDescription" String="The value of ConnectTypesSupported shall be an array of the enumerations provided here.  SSH shall be included if the Secure Shell (SSH) protocol is supported.  Telnet shall be included if the Telnet protocol is supported.  IPMI shall be included if the IPMI (Serial-over-LAN) protocol is supported."/>
        </Property>
      </ComplexType>

      <ComplexType Name="CommandShell" BaseType="Manager.v1_0_0.ManagerService">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="Information about a Command Shell service provided by a manager."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe a Command Shell service of a manager."/>
        <Property Name="ConnectTypesSupported" Type="Collection(Manager.v1_0_0.CommandConnectTypesSupported)" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This object is used to enumerate the Command Shell connection types allowed by the implementation."/>
          <Annotation Term="OData.LongDescription" String="The value of ConnectTypesSupported shall be an array of the enumerations provided here.  SSH shall be included if the Secure Shell (SSH) protocol is supported.  Telnet shall be included if the Telnet protocol is supported.  IPMI shall be included if the IPMI (Serial-over-LAN) protocol is supported."/>
        </Property>
      </ComplexType>

      <ComplexType Name="GraphicalConsole" BaseType="Manager.v1_0_0.ManagerService">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="Information about a Graphical Console service provided by a manager."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe a Graphical Console service of a manager."/>
        <Property Name="ConnectTypesSupported" Type="Collection(Manager.v1_0_0.GraphicalConnectTypesSupported)" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This object is used to enumerate the Graphical Console connection types allowed by the implementation."/>
          <Annotation Term="OData.LongDescription" String="The value of ConnectTypesSupported shall be an array of the enumerations provided here.  RDP shall be included if the Remote Desktop (RDP) protocol is supported.  KVMIP shall be included if a vendor-define KVM-IP protocol is supported."/>
        </Property>
      </ComplexType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_0_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="Manager" BaseType="Manager.v1_0_0.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_0_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="Manager" BaseType="Manager.v1_0_1.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_0_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="Manager" BaseType="Manager.v1_0_2.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_0_4">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to remove the Nullable facet on NavigationProperties of type Collection."/>
      <EntityType Name="Manager" BaseType="Manager.v1_0_3.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_0_5">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="Manager" BaseType="Manager.v1_0_4.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_0_6">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to correct the Descriptions and LongDescriptions used in the defined Actions.  It was also created to remove the Nullable=false term on ServiceEntryPointUUID."/>
      <EntityType Name="Manager" BaseType="Manager.v1_0_5.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_0_7">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to force the regeneration of JSON Schema so that OData properties are marked as required, and integer properties are marked as integer rather than number."/>
      <EntityType Name="Manager" BaseType="Manager.v1_0_6.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_1_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="Manager" BaseType="Manager.v1_0_2.Manager"/>
      <ComplexType Name="Links" BaseType="Manager.v1_0_0.Links">
        <NavigationProperty Name="ManagerInChassis" Type="Chassis.Chassis" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This property is a reference to the chassis that this manager is located in."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain a reference to the chassis that this manager is located in."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
       </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_1_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="Manager" BaseType="Manager.v1_1_0.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_1_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to remove the Nullable facet on NavigationProperties of type Collection."/>
      <EntityType Name="Manager" BaseType="Manager.v1_1_1.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_1_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="Manager" BaseType="Manager.v1_1_2.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_1_4">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to correct the Descriptions and LongDescriptions used in the defined Actions.  It was also created to remove the Nullable=false term on ServiceEntryPointUUID."/>
      <EntityType Name="Manager" BaseType="Manager.v1_1_3.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_1_5">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to force the regeneration of JSON Schema so that OData properties are marked as required, and integer properties are marked as integer rather than number."/>
      <EntityType Name="Manager" BaseType="Manager.v1_1_4.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_2_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="Manager" BaseType="Manager.v1_1_0.Manager">
        <Property Name="PowerState" Type="Resource.PowerState">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is the current power state of the Manager."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the power state of the Manager."/>
        </Property>
      </EntityType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_2_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="Manager" BaseType="Manager.v1_2_0.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_2_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to remove the Nullable facet on NavigationProperties of type Collection."/>
      <EntityType Name="Manager" BaseType="Manager.v1_2_1.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_2_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="Manager" BaseType="Manager.v1_2_2.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_2_4">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to change references to PowerState to use the unversioned definition.  It was also created to correct the Descriptions and LongDescriptions used in the defined Actions.  It was also created to remove the Nullable=false term on ServiceEntryPointUUID."/>
      <EntityType Name="Manager" BaseType="Manager.v1_2_3.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_2_5">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to force the regeneration of JSON Schema so that OData properties are marked as required, and integer properties are marked as integer rather than number."/>
      <EntityType Name="Manager" BaseType="Manager.v1_2_4.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_3_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="Manager" BaseType="Manager.v1_2_1.Manager">
        <NavigationProperty Name="HostInterfaces" Type="HostInterfaceCollection.HostInterfaceCollection" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is a reference to a collection of Host Interfaces that this manager uses for local host communication.  It is here that clients will find Host Interface configuration options and settings."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a link to a collection of type HostInterfaceCollection."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </EntityType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_3_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to remove the Nullable facet on NavigationProperties of type Collection."/>
      <EntityType Name="Manager" BaseType="Manager.v1_3_0.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_3_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
      <EntityType Name="Manager" BaseType="Manager.v1_3_1.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_3_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to change references to PowerState to use the unversioned definition.  It was also created to correct the Descriptions and LongDescriptions used in the defined Actions.  It was also created to remove the Nullable=false term on ServiceEntryPointUUID."/>
      <EntityType Name="Manager" BaseType="Manager.v1_3_2.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_3_4">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to force the regeneration of JSON Schema so that OData properties are marked as required, and integer properties are marked as integer rather than number."/>
      <EntityType Name="Manager" BaseType="Manager.v1_3_3.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_4_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="Manager" BaseType="Manager.v1_3_3.Manager">
        <Property Name="AutoDSTEnabled" Type="Edm.Boolean" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Indicates whether the manager is configured for automatic DST adjustment."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall contain the enabled status of the automatic Daylight Saving Time (DST) adjustment of the manager's DateTime.  It shall be true if Automatic DST adjustment is enabled and false if disabled."/>
        </Property>
      </EntityType>

      <ComplexType Name="Links" BaseType="Manager.v1_1_0.Links">
        <NavigationProperty Name="ManagerForSwitches" Type="Collection(Switch.Switch)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This property is an array of references to the switches that this manager has control over."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain an array of references to Switch resources of which this Manager instance has control."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_4_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to force the regeneration of JSON Schema so that OData properties are marked as required, and integer properties are marked as integer rather than number."/>
      <EntityType Name="Manager" BaseType="Manager.v1_4_0.Manager"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Manager.v1_5_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="Manager" BaseType="Manager.v1_4_1.Manager">
        <Property Name="RemoteRedfishServiceUri" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This property contains the URI of the Redfish Service Root for the remote Manager represented by this resource."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the URI of the Redfish Service Root for the remote Manager represented by this resource.  This property shall only be present when providing aggregation of Redfish services."/>
          <Annotation Term="OData.IsURL"/>
        </Property>
        <NavigationProperty Name="RemoteAccountService" Type="AccountService.AccountService" ContainsTarget="true" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This property contains a reference to the AccountService resource for the remote Manager represented by this resource."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain a reference to the AccountService resource for the remote Manager represented by this resource.  This property shall only be present when providing aggregation of Redfish services."/>
          <Annotation Term="OData.AutoExpandReferences"/>
        </NavigationProperty>
      </EntityType>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_MANAGER_V1_HPP */
