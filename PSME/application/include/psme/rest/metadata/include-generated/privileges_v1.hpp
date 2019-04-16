#ifndef PSME_REST_METADATA_PRIVILEGES_V1_HPP
#define PSME_REST_METADATA_PRIVILEGES_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string Privileges_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!--################################################################################       -->
<!--# Redfish Schema:  Privileges  v1.0.4-->
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
  <edmx:Reference Uri="/redfish/v1/metadata/RedfishExtensions_v1.xml">
    <edmx:Include Namespace="RedfishExtensions.v1_0_0" Alias="Redfish"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Privileges">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EnumType Name="PrivilegeType">
        <Member Name="Login">
          <Annotation Term="OData.Description" String="Able to log into the service and read resources."/>
        </Member>
        <Member Name="ConfigureManager">
          <Annotation Term="OData.Description" String="Able to configure Manager resources."/>
        </Member>
        <Member Name="ConfigureUsers">
          <Annotation Term="OData.Description" String="Able to configure Users and their Accounts."/>
        </Member>
        <Member Name="ConfigureSelf">
          <Annotation Term="OData.Description" String="Able to change the password for the current user Account."/>
        </Member>
        <Member Name="ConfigureComponents">
          <Annotation Term="OData.Description" String="Able to configure components managed by this service."/>
        </Member>
      </EnumType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Privileges.v1_0_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EnumType Name="PrivilegeType">
        <Annotation Term="Redfish.Deprecated" String="This definition has been moved to the unversioned namespace so that external references can pick up changes over time."/>
        <Member Name="Login">
          <Annotation Term="OData.Description" String="Able to log into the service and read resources."/>
        </Member>
        <Member Name="ConfigureManager">
          <Annotation Term="OData.Description" String="Able to configure Manager resources."/>
        </Member>
        <Member Name="ConfigureUsers">
          <Annotation Term="OData.Description" String="Able to configure Users and their Accounts."/>
        </Member>
        <Member Name="ConfigureSelf">
          <Annotation Term="OData.Description" String="Able to change the password for the current user Account."/>
        </Member>
        <Member Name="ConfigureComponents">
          <Annotation Term="OData.Description" String="Able to configure components managed by this service."/>
        </Member>
      </EnumType>

      <Term Name="OemGetPrivileges" Type="Collection(Edm.String)" Nullable="false">
        <Annotation Term="OData.Description" String="OEM Get operations privileges may be defined on a Link element to provide read privileges for the referenced resources, or on individual elements to override the privileges for that element."/>
      </Term>
      <Term Name="OemPostPrivileges" Type="Collection(Edm.String)" Nullable="false">
        <Annotation Term="OData.Description" String="OEM Post privileges may be defined on a Link element to provide create privileges for the referenced resources, or on individual elements to override the privileges for that element."/>
      </Term>
      <Term Name="OemPatchPutPrivileges" Type="Collection(Edm.String)" Nullable="false">
        <Annotation Term="OData.Description" String="OEM PatchPut privileges may be defined on a Link element to provide update privileges for the referenced resources, or on individual elements to override the privileges for that element."/>
      </Term>
      <Term Name="OemDeletePrivileges" Type="Collection(Edm.String)" Nullable="false">
        <Annotation Term="OData.Description" String="OEM Delete privileges may be defined on a Link element to provide update privileges for the referenced resources, or on individual elements to override the privileges for that element."/>
      </Term>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Privileges.v1_0_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Privileges.v1_0_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated."/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Privileges.v1_0_4">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to deprecate the versioned definition of PrivilegeType to use an unversioned definition."/>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_PRIVILEGES_V1_HPP */
