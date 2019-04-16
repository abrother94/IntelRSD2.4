#ifndef PSME_REST_METADATA_I_OSTATISTICS_V1_HPP
#define PSME_REST_METADATA_I_OSTATISTICS_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string IOStatistics_v1_XML =
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

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOStatistics">

      <ComplexType Name="IOStatistics" Abstract="true">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The properties of this type represent IO statistics."/>
        <Annotation Term="OData.LongDescription" String="The properties of this type shall be used to represent the IO statistics of the requested object."/>
      </ComplexType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOStatistics.v1_0_0">

      <ComplexType Name="IOStatistics" BaseType="IOStatistics.IOStatistics">
        <Annotation Term="OData.Description" String="The properties of this type represent IO statistics."/>
        <Annotation Term="OData.LongDescription" String="The properties of this type shall be used to represent the IO statistics of the requested object."/>
        <Property Name="ReadIORequests" Type="Edm.Int64">
          <Annotation Term="OData.Description" String="Count of read IO requests."/>
          <Annotation Term="OData.LongDescription" String="The value shall represent the total count from the time of last reset or wrap of read IO requests satisfied from either media or memory (i.e. from a storage device or from a cache)."/>
          <Annotation Term="Measures.Unit" String="{tot}"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
        </Property>
        <Property Name="ReadHitIORequests" Type="Edm.Int64">
          <Annotation Term="OData.Description" String="Count of read IO requests satisfied from memory."/>
          <Annotation Term="OData.LongDescription" String="The value shall represent the total count from the time of last reset or wrap of read IO requests satisfied from memory."/>
          <Annotation Term="Measures.Unit" String="{tot}"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
        </Property>
        <Property Name="ReadIOKiBytes" Type="Edm.Int64">
          <Annotation Term="OData.Description" String="Number of kibibytes read."/>
          <Annotation Term="OData.LongDescription" String="The value shall represent the total number of kibibytes read from the time of last reset or wrap."/>
          <Annotation Term="Measures.Unit" String="KiBy"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
        </Property>
        <Property Name="ReadIORequestTime" Type="Edm.String">
          <Annotation Term="OData.Description" String="The time that the resource is busy processing read requests."/>
          <Annotation Term="OData.LongDescription" String="The value shall be an ISO 8601 conformant duration describing the time that the resource is busy processing read requests."/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
        </Property>
        <Property Name="WriteIORequests" Type="Edm.Int64">
          <Annotation Term="OData.Description" String="Count of write IO requests."/>
          <Annotation Term="OData.LongDescription" String="The value shall represent the total count from the time of last reset or wrap of write IO requests."/>
          <Annotation Term="Measures.Unit" String="{tot}"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
        </Property>
        <Property Name="WriteHitIORequests" Type="Edm.Int64">
          <Annotation Term="OData.Description" String="Count of write IO requests coallesced into memory."/>
          <Annotation Term="OData.LongDescription" String="The value shall represent the total count from the time of last reset or wrap of write IO requests coallesced into memory."/>
          <Annotation Term="Measures.Unit" String="{tot}"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
        </Property>
        <Property Name="WriteIOKiBytes" Type="Edm.Int64">
          <Annotation Term="OData.Description" String="Number of kibibytes written."/>
          <Annotation Term="OData.LongDescription" String="The value shall represent the total number of kibibytes written from the time of last reset or wrap."/>
          <Annotation Term="Measures.Unit" String="KiBy"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
        </Property>
        <Property Name="WriteIORequestTime" Type="Edm.String">
          <Annotation Term="OData.Description" String="The time that the resource is busy processing write requests."/>
          <Annotation Term="OData.LongDescription" String="The value shall be an ISO 8601 conformant duration describing the time that the resource is busy processing write requests."/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
        </Property>
        <Property Name="NonIORequests" Type="Edm.Int64">
          <Annotation Term="OData.Description" String="Count of non IO requests."/>
          <Annotation Term="OData.LongDescription" String="The value shall represent the total count from the time of last reset or wrap of non IO requests."/>
          <Annotation Term="Measures.Unit" String="{tot}"/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
        </Property>
        <Property Name="NonIORequestTime" Type="Edm.String">
          <Annotation Term="OData.Description" String="The time that the resource is busy processing write requests."/>
          <Annotation Term="OData.LongDescription" String="The value shall be an ISO 8601 conformant duration describing the time that the resource is busy processing non IO requests."/>
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
        </Property>
      </ComplexType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="IOStatistics.v1_0_1">
      <Annotation Term="OData.LongDescription" String="Move ComplexType to unversioned namespace. Change references to unversioned."/>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_I_OSTATISTICS_V1_HPP */
