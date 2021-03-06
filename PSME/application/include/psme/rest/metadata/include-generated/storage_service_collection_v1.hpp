#ifndef PSME_REST_METADATA_STORAGE_SERVICE_COLLECTION_V1_HPP
#define PSME_REST_METADATA_STORAGE_SERVICE_COLLECTION_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string StorageServiceCollection_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!-- Copyright 2015-2018 Storage Networking Industry Association (SNIA), USA. All rights reserved.-->
<edmx:Edmx xmlns:edmx="http://docs.oasis-open.org/odata/ns/edmx" Version="4.0">

  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Core.V1.xml">
    <edmx:Include Namespace="Org.OData.Core.V1" Alias="OData"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/StorageService_v1.xml">
    <edmx:Include Namespace="StorageService"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="StorageServiceCollection">

      <EntityType Name="StorageServiceCollection" BaseType="Resource.v1_0_0.ResourceCollection">
        <Annotation Term="OData.Description" String="A collection of references to Storage Service resource instances."/>
        <Annotation Term="OData.LongDescription" String="An instance of this resource shall reference the set of StorageService resources known in the scope of its use."/>
        <NavigationProperty Name="Members" Type="Collection(StorageService.StorageService)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The value of each member references a StorageService resource."/>
          <Annotation Term="OData.LongDescription" String="The value of each member entry shall reference a StorageService resource."/>
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


#endif /* PSME_REST_METADATA_STORAGE_SERVICE_COLLECTION_V1_HPP */
