#ifndef PSME_REST_METADATA_FILE_SHARE_COLLECTION_V1_HPP
#define PSME_REST_METADATA_FILE_SHARE_COLLECTION_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string FileShareCollection_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!-- Copyright 2016-2017 Storage Networking Industry Association (SNIA), USA. All rights reserved.-->
<edmx:Edmx xmlns:edmx="http://docs.oasis-open.org/odata/ns/edmx" Version="4.0">

  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Core.V1.xml">
    <edmx:Include Namespace="Org.OData.Core.V1" Alias="OData"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource.v1_0_0" />
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/FileShare_v1.xml">
    <edmx:Include Namespace="FileShare"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="FileShareCollection">

      <EntityType Name="FileShareCollection" BaseType="Resource.v1_0_0.ResourceCollection">
        <Annotation Term="OData.Description" String="Contains a collection of references to FileSystem resource instances."/>
        <Annotation Term="OData.LongDescription" String="This resource shall contain a collection of references to FileSystem resource instances."/>
        <NavigationProperty Name="Members" Type="Collection(FileShare.FileShare)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="References to the members of this FileSystem collection."/>
		  <Annotation Term="OData.LongDescription" String="This property shall contain references to the members of this FileSystem collection."/>
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


#endif /* PSME_REST_METADATA_FILE_SHARE_COLLECTION_V1_HPP */
