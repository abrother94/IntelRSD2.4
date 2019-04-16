#ifndef PSME_REST_METADATA_VOLUME_COLLECTION_V1_HPP
#define PSME_REST_METADATA_VOLUME_COLLECTION_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string VolumeCollection_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!-- Copyright 2015-2018 Storage Networking Industry Association (SNIA), USA. All rights reserved.-->
<edmx:Edmx xmlns:edmx="http://docs.oasis-open.org/odata/ns/edmx" Version="4.0">

  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Core.V1.xml">
    <edmx:Include Namespace="Org.OData.Core.V1" Alias="OData"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource.v1_0_0" />
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Volume_v1.xml">
    <edmx:Include Namespace="Volume"/>
  </edmx:Reference>
  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="VolumeCollection">

      <EntityType Name="VolumeCollection" BaseType="Resource.v1_0_0.ResourceCollection">
        <Annotation Term="OData.Description" String="A Collection of Volume resource instances."/>
        <Annotation Term="OData.LongDescription" String="This collection shall contain references to all Volume resource instances sharing the same parent resource."/>
        <NavigationProperty Name="Members" Type="Collection(Volume.Volume)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/ReadWrite"/>
          <Annotation Term="OData.Description" String="The value of each member references a Volume resource."/>  
          <Annotation Term="OData.LongDescription" String="The value of each member entry shall reference a Volume resource."/>
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


#endif /* PSME_REST_METADATA_VOLUME_COLLECTION_V1_HPP */
