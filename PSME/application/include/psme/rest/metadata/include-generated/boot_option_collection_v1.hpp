#ifndef PSME_REST_METADATA_BOOT_OPTION_COLLECTION_V1_HPP
#define PSME_REST_METADATA_BOOT_OPTION_COLLECTION_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string BootOptionCollection_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!--################################################################################       -->
<!--# Redfish Schema:  BootOptionCollection-->
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
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/RedfishExtensions_v1.xml">
    <edmx:Include Namespace="RedfishExtensions.v1_0_0" Alias="Redfish"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/BootOption_v1.xml">
    <edmx:Include Namespace="BootOption"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="BootOptionCollection">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="BootOptionCollection" BaseType="Resource.v1_0_0.ResourceCollection">
        <Annotation Term="OData.Description" String="A Collection of BootOption resource instances."/>
        <Annotation Term="Capabilities.InsertRestrictions">
          <Record>
            <PropertyValue Property="Insertable" Bool="true"/>
            <Annotation Term="OData.Description" String="Some implementations may allow creating new BootOption Entries by posting to the Boot Options Collection."/>
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
        <NavigationProperty Name="Members" Type="Collection(BootOption.BootOption)">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Contains the members of this collection."/>
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


#endif /* PSME_REST_METADATA_BOOT_OPTION_COLLECTION_V1_HPP */
