#ifndef PSME_REST_METADATA_I_OCONNECTIVITY_LOS_CAPABILITIES_V1_HPP
#define PSME_REST_METADATA_I_OCONNECTIVITY_LOS_CAPABILITIES_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string IOConnectivityLoSCapabilities_v1_XML =
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
  <edmx:Reference Uri="/redfish/v1/metadata/Protocol_v1.xml">
    <edmx:Include Namespace="Protocol"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/IOConnectivityLineOfService_v1.xml">
    <edmx:Include Namespace="IOConnectivityLineOfService"/>
  </edmx:Reference>
  
  <edmx:DataServices>
    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOConnectivityLoSCapabilities">
      <EntityType Name="IOConnectivityLoSCapabilities" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="Describe IO connectivity capabilities"/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to describe the capabilities to provide IO connectivity."/>
      </EntityType>
    </Schema>
    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOConnectivityLoSCapabilities.v1_0_0">
      <EntityType Name="IOConnectivityLoSCapabilities" BaseType="IOConnectivityLoSCapabilities.IOConnectivityLoSCapabilities">
        <Annotation Term="OData.Description" String="Describe IO Connectivity capabilities."/>
        <Annotation Term="OData.LongDescription" String="Each instance of IOConnectivityLoSCapabilities describes capabilities of the system to support various IO Connectivity service options."/>
        <Property Name="Identifier" Type="Resource.Identifier">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The value identifies this resource."/>
          <Annotation Term="OData.LongDescription" String="The value identifies this resource. The value shall be unique within the managed ecosystem."/>
        </Property>
        <Property Name="SupportedAccessProtocols" Type="Collection(Protocol.Protocol)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="SupportedAccessProtocols."/>
          <Annotation Term="OData.LongDescription" String="Access protocols supported by this service option. NOTE: SMB+NFS* requires that SMB and at least one of NFSv3 or NFXv4 are also selected, (i.e. {'SMB', 'NFSv4', 'SMB+NFS*'})."/>
        </Property>
        <Property Name="MaxSupportedBytesPerSecond" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The maximum Bandwidth in bytes per second that a connection can support."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the maximum bytes per second that a connection can support."/>
          <Annotation Term="Measures.Unit" String="By/s"/>
        </Property>
        <NavigationProperty Name="SupportedLinesOfService" Type="Collection(IOConnectivityLineOfService.IOConnectivityLineOfService)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="Collection of known and supported IOConnectivityLinesOfService."/>
          <Annotation Term="OData.LongDescription" String="The collection shall contain known and supported IOConnectivityLinesOfService."/>
		  <Annotation Term="OData.AutoExpand"/>
        </NavigationProperty>
      </EntityType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOConnectivityLoSCapabilities.v1_0_1">
      <Annotation Term="OData.Description" String="Changed type of AccessProtocols to Collection of Protocol.Protocol."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOConnectivityLoSCapabilities.v1_1_0">
      <EntityType Name="IOConnectivityLoSCapabilities" BaseType="IOConnectivityLoSCapabilities.v1_0_0.IOConnectivityLoSCapabilities">
        <Property Name="Actions" Type="IOConnectivityLoSCapabilities.v1_1_0.Actions" Nullable="false">
          <Annotation Term="OData.Description" String="The available actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
        </Property>
        <Property Name="MaxSupportedIOPS" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The maximum IOPS that a connection can support."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the maximum IOPS that a connection can support."/>
          <Annotation Term="Measures.Unit" String="[IO]/s"/>
        </Property>
	  </EntityType>

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The available actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain the available actions for this resource."/>
        <Property Name="Oem" Type="IOConnectivityLoSCapabilities.v1_1_0.OemActions" Nullable="false"/>
      </ComplexType>

      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="The available OEM specific actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional OEM actions for this resource."/>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOConnectivityLoSCapabilities.v1_1_1">
        <Annotation Term="OData.LongDescription" String="Change IOConnectivityLineOfService to EntityType."/>
	</Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_I_OCONNECTIVITY_LOS_CAPABILITIES_V1_HPP */