#ifndef PSME_REST_METADATA_I_OCONNECTIVITY_LINE_OFSERVICE_V1_HPP
#define PSME_REST_METADATA_I_OCONNECTIVITY_LINE_OFSERVICE_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string IOConnectivityLineOfService_v1_XML =
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
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Protocol_v1.xml">
    <edmx:Include Namespace="Protocol"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/IOConnectivityLoSCapabilities_v1.xml">
    <edmx:Include Namespace="IOConnectivityLoSCapabilities"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOConnectivityLineOfService">

      <EntityType Name="IOConnectivityLineOfService" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="A service option within the IO Connectivity line of service."/>
        <Annotation Term="OData.LongDescription" String="An IO connectivity service option may be used to specify the characteristics of storage connectivity."/>
      </EntityType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOConnectivityLineOfService.v1_0_0">

      <EntityType Name="IOConnectivityLineOfService" BaseType="IOConnectivityLineOfService.IOConnectivityLineOfService">
        <Annotation Term="OData.Description" String="A service option within the IO Connectivity line of service."/>
        <Annotation Term="OData.LongDescription" String="An IO connectivity service option may be used to specify the characteristics of storage connectivity."/>
        <Property Name="AccessProtocols" Type="Collection(Protocol.Protocol)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="SupportedAccessProtocols."/>
          <Annotation
            Term="OData.LongDescription"
            String="The Enumeration Literal shall specify the Access protocol for this service option. NOTE: If multiple protocols are specified,  the corresponding MaxSupportedIOPS governs the max achieved across all protocol uses. This may be less than the sum of the individual max values, which may be specified by individual Line of Service entries."/>
        </Property>
      </EntityType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOConnectivityLineOfService.v1_0_1">
      <Annotation Term="OData.Description" String="Changed type of AccessProtocols to Collection of Protocol.Protocol."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOConnectivityLineOfService.v1_1_0">
      <Annotation Term="OData.Description" String="Change references to unversioned. "/>
      <EntityType Name="IOConnectivityLineOfService" BaseType="IOConnectivityLineOfService.v1_0_0.IOConnectivityLineOfService">
        <Property Name="MaxBytesPerSecond" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The maximum Bandwidth in bytes per second that a connection can support."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the maximum bytes per second that a connection can support."/>
          <Annotation Term="Measures.Unit" String="By/s"/>
        </Property>
        <Property Name="MaxIOPS" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The maximum supported IOs per second that the connection will support for the selected access protocol."/>
          <Annotation Term="OData.LongDescription" String="The value shall be the maximum IOs per second that the connection shall allow for the selected access protocol."/>
          <Annotation Term="Measures.Unit" String="[IO]/s"/>
        </Property>
      </EntityType>

    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_I_OCONNECTIVITY_LINE_OFSERVICE_V1_HPP */
