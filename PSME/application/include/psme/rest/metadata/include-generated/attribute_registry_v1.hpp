#ifndef PSME_REST_METADATA_ATTRIBUTE_REGISTRY_V1_HPP
#define PSME_REST_METADATA_ATTRIBUTE_REGISTRY_V1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string AttributeRegistry_v1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!---->
<!--################################################################################       -->
<!--# Redfish Schema:  AttributeRegistry  v1.2.0-->
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
  <edmx:Reference Uri="/redfish/v1/metadata/RedfishExtensions_v1.xml">
    <edmx:Include Namespace="RedfishExtensions.v1_0_0" Alias="Redfish"/>
    <edmx:Include Namespace="Validation.v1_0_0" Alias="Validation"/>
  </edmx:Reference>
  <edmx:Reference Uri="/redfish/v1/metadata/Resource_v1.xml">
    <edmx:Include Namespace="Resource.v1_0_0"/>
  </edmx:Reference>

  <edmx:DataServices>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="AttributeRegistry">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="AttributeRegistry" BaseType="Resource.v1_0_0.Resource" Abstract="true">
        <Annotation Term="OData.Description" String="The AttributeRegistry schema contains a set of key-value pairs that represents the structure of a Registry. It includes mechanisms for building user interfaces (menus), allowing consistent navigation of the contents. The Attribute Registry is specific to a particular implementation or product. The attributes and property names are not standardized."/>
        <Annotation Term="OData.LongDescription" String="This resource shall be used to represent an Attribute registry for a Redfish implementation."/>
        <Annotation Term="Capabilities.InsertRestrictions">
          <Record>
            <PropertyValue Property="Insertable" Bool="false"/>
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
      </EntityType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="AttributeRegistry.v1_0_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>

      <EntityType Name="AttributeRegistry" BaseType="AttributeRegistry.AttributeRegistry">
        <Property Name="Language" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is the RFC 5646 compliant language code for the registry."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a string consisting of an RFC 5646 language code."/>
          <Annotation Term="Redfish.Required"/>
        </Property>
        <Property Name="RegistryVersion" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is the attribute registry version which is used in the middle portion of a AttributeRegistry."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the version of this attribute registry. The format of this string shall be of the format majorversion.minorversion.errata in compliance with Protocol Version section of the Redfish specification."/>
          <Annotation Term="Redfish.Required"/>
        </Property>
        <Property Name="OwningEntity" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="This is the organization or company that publishes this registry."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a string that represents the publisher of this registry."/>
          <Annotation Term="Redfish.Required"/>
        </Property>
        <Property Name="SupportedSystems" Type="Collection(AttributeRegistry.v1_0_0.SupportedSystems)" Nullable="false">
          <Annotation Term="OData.Description" String="Array of systems supported by this attribute registry."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array containing a list of systems supported by this attribute registry."/>
        </Property>
        <Property Name="RegistryEntries" Type="AttributeRegistry.v1_0_0.RegistryEntries" Nullable="false">
          <Annotation Term="OData.Description" String="List of all attributes and their metadata for this component."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall a list of all attributes for this component, along with their possible values, dependencies, and other metadata."/>
        </Property>
      </EntityType>

      <ComplexType Name="SupportedSystems">
        <Annotation Term="OData.Description" String="A system supported by this attribute registry."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe a system supported by this attribute registry."/>
        <Property Name="ProductName" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The product name of the system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the product name of the computer system that this registry applies to."/>
        </Property>
        <Property Name="SystemId" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The system ID of the system."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the system ID that identifies the computer system model that this registry applies to."/>
          <Annotation Term="Validation.Pattern" String="^[A-Za-z0-9]+$"/>
        </Property>
      </ComplexType>

      <ComplexType Name="RegistryEntries">
        <Annotation Term="OData.Description" String="List of all attributes and their metadata for this component."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe a list of all attributes for this component, along with their possible values, dependencies, and other metadata."/>
        <Property Name="Attributes" Type="Collection(AttributeRegistry.v1_0_0.Attributes)" Nullable="false">
          <Annotation Term="OData.Description" String="The array containing the attributes and their possible values."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array containing the attributes and their possible values and other metadata."/>
        </Property>
        <Property Name="Menus" Type="Collection(AttributeRegistry.v1_0_0.Menus)" Nullable="false">
          <Annotation Term="OData.Description" String="The array containing the attributes menus and their hierarchy."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array containing the attributes menus and their hierarchy."/>
        </Property>
        <Property Name="Dependencies" Type="Collection(AttributeRegistry.v1_0_0.Dependencies)" Nullable="false">
          <Annotation Term="OData.Description" String="The array containing a list of dependencies of attributes on this component."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array containing a list of dependencies of attributes on this component."/>
        </Property>
      </ComplexType>

      <ComplexType Name="Attributes">
        <Annotation Term="OData.Description" String="An attribute and its possible values."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe an attribute and its possible values and other metadata."/>
        <Property Name="AttributeName" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The unique name of the attribute."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the name of this attribute that is unique in this registry."/>
          <Annotation Term="Validation.Pattern" String="^[A-Za-z][A-Za-z0-9_]+$"/>
        </Property>
        <Property Name="Type" Type="AttributeRegistry.v1_0_0.AttributeType" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The type of the attribute."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an enumeration describing type of the attribute."/>
        </Property>
        <Property Name="Value" Type="Collection(AttributeRegistry.v1_0_0.AttributeValue)" Nullable="false">
          <Annotation Term="OData.Description" String="The array containing possible values for attributes of type 'Enumeration'."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array containing the possible values of an attribute of type 'Enumeration'."/>
        </Property>
        <Property Name="DisplayName" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The user-readable display string of the attribute in the defined 'Language'."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the user-readable display string of the attribute in the defined 'Language'."/>
        </Property>
        <Property Name="HelpText" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The help text for the attribute."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the help text of the attribute."/>
        </Property>
        <Property Name="WarningText" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The warning text for changing the attribute."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the warning text of the attribute."/>
        </Property>
        <Property Name="CurrentValue" Type="Edm.PrimitiveType">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Placeholder of the current value of the attribute."/>
          <Annotation Term="OData.LongDescription" String="Placeholder of the current value of the attribute, to aid in evaluating dependencies. The current value of an attribute might be affected by the results of evaluating the 'Dependencies' array."/>
        </Property>
        <Property Name="DefaultValue" Type="Edm.PrimitiveType">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The default current value of the attribute."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the default value of the attribute."/>
        </Property>
        <Property Name="DisplayOrder" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The numeric value describing the ascending order that the attribute is displayed relative to other attributes."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a number the describes the ascending order in which this attribute is displayed, relative to other attributes."/>
        </Property>
        <Property Name="MenuPath" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A path that describes the menu hierarchy of this attribute."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a string indicating the menu hierarchy of this attribute, in the form of a path to the menu names."/>
          <Annotation Term="Validation.Pattern" String="^[.]?[A-Za-z0-9_//]+$"/>
        </Property>
        <Property Name="ReadOnly" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The read-only state of this attribute."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean describing the read-only state of attribute. A read-only attribute cannot be modified, and should be grayed out in user interfaces. The read-only state of an attribute might be affected by the results of evaluating the 'Dependencies' array."/>
        </Property>
        <Property Name="WriteOnly" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Defines whether this attribute is write-only. Such attributes revert back to their initial value after settings are applied."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean describing the write-only state of this attribute. A write-only attribute reverts back to it's initial value after settings are applied."/>
        </Property>
        <Property Name="GrayOut" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The gray-out state of this attribute."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean describing the gray-out state of this attribute. When set to true, a grayed-out attribute should be grayed out in user interfaces. But, unlike ReadOnly, the value of grayed-out attributes might still be be modified. The grayout state of an attribute might be affected by the results of evaluating the 'Dependencies' array."/>
        </Property>
        <Property Name="Hidden" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The hidden state of this attribute."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean describing the visibility state of this attribute. When set to true, a hidden attribute should be hidden in user interfaces. The hidden state of an attribute might be affected by the results of evaluating the 'Dependencies' array."/>
        </Property>
        <Property Name="Immutable" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Defines whether this attribute is immutable or not."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean describing the immutable state of this attribute. Immutable attributes should not be modified and are typically used to reflect a hardware state."/>
        </Property>
        <Property Name="IsSystemUniqueProperty" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Defines whether this attribute is unique for this system and should not be replicated."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean describing this attribute is unique or not. A value of true indicates that the attribute is unique and should not be replicated."/>
        </Property>
        <Property Name="MaxLength" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The maximum character length of the value of an attribute of type 'String'."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a number indicating the maximum character length of the value of an attribute of type 'String'."/>
        </Property>
        <Property Name="MinLength" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The minimum character length of the value of an attribute of type 'String'."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a number indicating the minimum character length of the value of an attribute of type 'String'."/>
        </Property>
        <Property Name="ScalarIncrement" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The amount to increment or decrement the value of an attribute of type 'Integer' each time a user requests a value change."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a number indicating the amount to increment or decrement the value of an attribute of type 'Integer' each time a user requests a value change. A ScalarIncrement value of 0 indicates a free-form numeric user input."/>
        </Property>
        <Property Name="UpperBound" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The upper limit of the value of an attribute of type 'Integer'."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a number indicating the upper limit of the value of an attribute of type 'Integer'."/>
        </Property>
        <Property Name="LowerBound" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The lower limit of the value of an attribute of type 'Integer'."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a number indicating the lower limit of the value of an attribute of type 'Integer'."/>
        </Property>
        <Property Name="ValueExpression" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A regular expression that is used to validate the value of the attribute. This is only applicable to attributes of type 'String' or 'Integer'."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a regular expression that is valid according to the Perl regular expression dialect. This string is used to validate the value of the attribute. This is only applicable to attributes of type 'String' or 'Integer'."/>
        </Property>
      </ComplexType>

      <ComplexType Name="Menus">
        <Annotation Term="OData.Description" String="A menu and its hierarchy."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe an attribute's menu and its hierarchy."/>
        <Property Name="MenuName" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The unique name string of this menu."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the name of this menu that is unique in this registry."/>
          <Annotation Term="Validation.Pattern" String="^[A-Za-z][A-Za-z0-9_]+$"/>
        </Property>
        <Property Name="DisplayName" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The user-readable display string of this menu in the defined 'Language'."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the user-readable display string of the menu in the defined 'Language'."/>
        </Property>
        <Property Name="DisplayOrder" Type="Edm.Int64">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The numeric value describing the ascending order in which this menu is displayed relative to other menus."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a number the describes the ascending order in which this menu is displayed, relative to other menus."/>
        </Property>
        <Property Name="ReadOnly" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The read-only state of this menu."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean describing the read-only state of this menu. A read-only menu is not accessible in user interfaces, and all properties contained in that menu and its sub-menus become read-only."/>
        </Property>
        <Property Name="GrayOut" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The gray-out state of this menu. A grayed-only menu is not accessible in user interfaces."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean describing the gray-out state of this menu. When set to true, a grayed-only menu is not accessible in user interfaces."/>
        </Property>
        <Property Name="MenuPath" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A path that describes this menu hierarchy relative to other menus."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a string indicating the menu hierarchy of this menu, in the form of a path to the menu names."/>
          <Annotation Term="Validation.Pattern" String="^[.]?[A-Za-z0-9_//]+$"/>
        </Property>
      </ComplexType>

      <ComplexType Name="Dependencies">
        <Annotation Term="OData.Description" String="A dependency of attributes on this component."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe a dependency of attributes on this component."/>
        <Property Name="Dependency" Type="AttributeRegistry.v1_0_0.Dependency" Nullable="false">
          <Annotation Term="OData.Description" String="The dependency expression for one or more Attributes in this Attribute Registry."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the dependency expression for one or more Attributes in this Attribute Registry."/>
        </Property>
        <Property Name="DependencyFor" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The AttributeName of the attribute whose change triggers the evaluation of this dependency expression."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the AttributeName of the attribute whose change triggers the evaluation of this dependency expression."/>
          <Annotation Term="Validation.Pattern" String="^[A-Za-z][A-Za-z0-9_]+$"/>
        </Property>
        <Property Name="Type" Type="AttributeRegistry.v1_0_0.DependencyType" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The type of the dependency structure."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an enumeration describing type of the attribute dependency."/>
        </Property>
      </ComplexType>

      <ComplexType Name="AttributeValue">
        <Annotation Term="OData.Description" String="A possible value for attributes of type 'Enumeration'."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe a possible value of an attribute of type 'Enumeration'."/>
        <Property Name="ValueName" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The value name of the attribute."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a string representing the value name of the attribute. ValueName is a unique string within the list of possible values in the 'Value' array of a given attribute."/>
          <Annotation Term="Validation.Pattern" String="^[A-Za-z][A-Za-z0-9_]+$"/>
        </Property>
        <Property Name="ValueDisplayName" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="A user-readable display string of the value of the attribute in the defined 'Language'."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a string representing the user-readable display string of the value of the attribute in the defined 'Language'."/>
        </Property>
      </ComplexType>

      <ComplexType Name="Dependency">
        <Annotation Term="OData.Description" String="The dependency expression for one or more Attributes in this Attribute Registry."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe the dependency expression for one or more Attributes in this Attribute Registry."/>
        <Property Name="MapFrom" Type="Collection(AttributeRegistry.v1_0_0.MapFrom)" Nullable="false">
          <Annotation Term="OData.Description" String="Array of the map-from conditions for mapping dependency."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be an array containing the map-from conditions for a dependency of Type 'Map'."/>
        </Property>
        <Property Name="MapToAttribute" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The Name of the attribute that is affected by this dependency expression."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the AttributeName of the attribute that is affected by this dependency expression."/>
          <Annotation Term="Validation.Pattern" String="^[A-Za-z][A-Za-z0-9_]+$"/>
        </Property>
        <Property Name="MapToProperty" Type="AttributeRegistry.v1_0_0.MapToProperty" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The meta-data property of the attribute specified in MapFromAttribute that is used to evaluate this dependency expression."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the meta-data property of the attribute specified in MapFromAttribute that is used to evaluate this dependency expression. For example, this could be the MapFromAttribute CurrentValue, or ReadOnly state."/>
        </Property>
        <Property Name="MapToValue" Type="Edm.PrimitiveType">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The value that MapToProperty is changed to if the dependency expression evaluates to true."/>
          <Annotation Term="OData.LongDescription" String="The value that the property specified in MapToProperty (in the attribute specified in MapToAttribute) is changed to if the dependency expression evaluates to true."/>
        </Property>
      </ComplexType>

      <ComplexType Name="MapFrom">
        <Annotation Term="OData.Description" String="A map-from condition for mapping dependency."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe a map-from condition for a dependency of Type 'Map'."/>
        <Property Name="MapFromAttribute" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The attribute that is used to evaluate this dependency expression."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the AttributeName of the attribute that is used in evaluating this dependency expression term."/>
          <Annotation Term="Validation.Pattern" String="^[A-Za-z][A-Za-z0-9_]+$"/>
        </Property>
        <Property Name="MapFromProperty" Type="AttributeRegistry.v1_0_0.MapFromProperty" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The meta-data property of the attribute specified in MapFromAttribute that is used to evaluate this dependency expression."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the meta-data property of the attribute specified in MapFromAttribute that is used to evaluate this dependency expression. For example, this could be the MapFromAttribute CurrentValue, or ReadOnly state."/>
        </Property>
        <Property Name="MapFromCondition" Type="AttributeRegistry.v1_0_0.MapFromCondition" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The condition that is used to evaluate this dependency expression."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the condition that is used to evaluate this dependency expression. For example, 'EQU' or 'NEQ'."/>
        </Property>
        <Property Name="MapFromValue" Type="Edm.PrimitiveType">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The value that the is used property specified in MapFromProperty that is used to evaluate this dependency expression."/>
          <Annotation Term="OData.LongDescription" String="The value that the property specified in MapFromProperty (in the attribute specified in MapFromAttribute) that is used to evaluate this dependency expression."/>
        </Property>
        <Property Name="MapTerms" Type="AttributeRegistry.v1_0_0.MapTerms" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The logical term used to combine two or more MapFrom conditions in this dependency expression."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the logical term used to combine two or more MapFrom conditions in this dependency expression. For example, 'AND' for logical AND, or 'OR' for logical OR of the conditions."/>
        </Property>
      </ComplexType>

      <EnumType Name="AttributeType">
        <Member Name="Enumeration">
          <Annotation Term="OData.Description" String="The attributes that include a list of the known possible enumerated values."/>
        </Member>
        <Member Name="String">
          <Annotation Term="OData.Description" String="The attributes that include free form text in their values."/>
        </Member>
        <Member Name="Integer">
          <Annotation Term="OData.Description" String="The attributes that have integer numeric values."/>
        </Member>
        <Member Name="Boolean">
          <Annotation Term="OData.Description" String="The attributes that are true or false."/>
        </Member>
        <Member Name="Password">
          <Annotation Term="OData.Description" String="The attributes that include password values and are not displayed as plain text. The value shall be null for GET requests."/>
        </Member>
      </EnumType>

      <EnumType Name="DependencyType">
        <Member Name="Map">
          <Annotation Term="OData.Description" String="A simple mapping dependency. The attribute value or state is changed to the mapped value if the condition evaluates to true."/>
        </Member>
      </EnumType>

      <EnumType Name="MapFromCondition">
        <Member Name="EQU">
          <Annotation Term="OData.Description" String="The logical operation for 'Equal'."/>
        </Member>
        <Member Name="NEQ">
          <Annotation Term="OData.Description" String="The logical operation for 'Not Equal'."/>
        </Member>
        <Member Name="GTR">
          <Annotation Term="OData.Description" String="The logical operation for 'Greater than'."/>
        </Member>
        <Member Name="GEQ">
          <Annotation Term="OData.Description" String="The logical operation for 'Greater than or Equal'."/>
        </Member>
        <Member Name="LSS">
          <Annotation Term="OData.Description" String="The logical operation for 'Less than'."/>
        </Member>
        <Member Name="LEQ">
          <Annotation Term="OData.Description" String="The logical operation for 'Less than or Equal'."/>
        </Member>
      </EnumType>

      <EnumType Name="MapFromProperty">
        <Member Name="CurrentValue">
          <Annotation Term="OData.Description" String="The dependency on an attribute's CurrentValue."/>
        </Member>
        <Member Name="DefaultValue">
          <Annotation Term="OData.Description" String="The dependency on an attribute's DefaultValue."/>
        </Member>
        <Member Name="ReadOnly">
          <Annotation Term="OData.Description" String="The dependency on an attribute's ReadOnly state."/>
        </Member>
        <Member Name="WriteOnly">
          <Annotation Term="OData.Description" String="The dependency on an attribute's WriteOnly state."/>
        </Member>
        <Member Name="GrayOut">
          <Annotation Term="OData.Description" String="The dependency on an attribute's GrayOut state."/>
        </Member>
        <Member Name="Hidden">
          <Annotation Term="OData.Description" String="The dependency on an attribute's Hidden state."/>
        </Member>
        <Member Name="LowerBound">
          <Annotation Term="OData.Description" String="The dependency on an attribute's LowerBound."/>
        </Member>
        <Member Name="UpperBound">
          <Annotation Term="OData.Description" String="The dependency on an attribute's UpperBound."/>
        </Member>
        <Member Name="MinLength">
          <Annotation Term="OData.Description" String="The dependency on an attribute's MinLength."/>
        </Member>
        <Member Name="MaxLength">
          <Annotation Term="OData.Description" String="The dependency on an attribute's MaxLength."/>
        </Member>
        <Member Name="ScalarIncrement">
          <Annotation Term="OData.Description" String="The dependency on an attribute's ScalarIncrement."/>
        </Member>
      </EnumType>

      <EnumType Name="MapTerms">
        <Member Name="AND">
          <Annotation Term="OData.Description" String="The operation used for logical 'AND' of dependency terms."/>
        </Member>
        <Member Name="OR">
          <Annotation Term="OData.Description" String="The operation used for logical 'OR' of dependency terms."/>
        </Member>
      </EnumType>

      <EnumType Name="MapToProperty">
        <Member Name="CurrentValue">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's CurrentValue."/>
        </Member>
        <Member Name="DefaultValue">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's DefaultValue."/>
        </Member>
        <Member Name="ReadOnly">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's ReadOnly state."/>
        </Member>
        <Member Name="WriteOnly">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's WriteOnly state."/>
        </Member>
        <Member Name="GrayOut">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's GrayOut state."/>
        </Member>
        <Member Name="Hidden">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's Hidden state."/>
        </Member>
        <Member Name="Immutable">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's Immutable state."/>
        </Member>
        <Member Name="HelpText">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's HelpText."/>
        </Member>
        <Member Name="WarningText">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's WarningText."/>
        </Member>
        <Member Name="DisplayName">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's DisplayName."/>
        </Member>
        <Member Name="DisplayOrder">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's DisplayName."/>
        </Member>
        <Member Name="LowerBound">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's LowerBound."/>
        </Member>
        <Member Name="UpperBound">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's UpperBound."/>
        </Member>
        <Member Name="MinLength">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's MinLength."/>
        </Member>
        <Member Name="MaxLength">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's MaxLength."/>
        </Member>
        <Member Name="ScalarIncrement">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's ScalarIncrement."/>
        </Member>
        <Member Name="ValueExpression">
          <Annotation Term="OData.Description" String="The dependency that affects an attribute's ValueExpression."/>
        </Member>
      </EnumType>

    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="AttributeRegistry.v1_0_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to add explicit Permissions annotations to all properties for clarity."/>
      <EntityType Name="AttributeRegistry" BaseType="AttributeRegistry.v1_0_0.AttributeRegistry"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="AttributeRegistry.v1_0_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to show annotations in previous namespaces were updated, and to remove the duplicate ProductName property in the SupportedSystems object."/>
      <EntityType Name="AttributeRegistry" BaseType="AttributeRegistry.v1_0_1.AttributeRegistry"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="AttributeRegistry.v1_0_3">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to correct regex patterns for different attribute properties."/>
      <EntityType Name="AttributeRegistry" BaseType="AttributeRegistry.v1_0_2.AttributeRegistry"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="AttributeRegistry.v1_1_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="AttributeRegistry" BaseType="AttributeRegistry.v1_0_2.AttributeRegistry">
        <Property Name="Actions" Type="AttributeRegistry.v1_1_0.Actions" Nullable="false">
          <Annotation Term="OData.Description" String="The available actions for this resource."/>
          <Annotation Term="OData.LongDescription" String="The Actions property shall contain the available actions for this resource."/>
        </Property>
      </EntityType>

      <ComplexType Name="Actions">
        <Annotation Term="OData.AdditionalProperties" Bool="false"/>
        <Annotation Term="OData.Description" String="The available actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain the available actions for this resource."/>
        <Property Name="Oem" Type="AttributeRegistry.v1_1_0.OemActions" Nullable="false"/>
      </ComplexType>

      <ComplexType Name="OemActions">
        <Annotation Term="OData.AdditionalProperties" Bool="true"/>
        <Annotation Term="OData.Description" String="The available OEM specific actions for this resource."/>
        <Annotation Term="OData.LongDescription" String="This type shall contain any additional OEM actions for this resource."/>
      </ComplexType>

      <ComplexType Name="SupportedSystems" BaseType="AttributeRegistry.v1_0_0.SupportedSystems">
        <Property Name="FirmwareVersion" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="Firmware version."/>
          <Annotation Term="OData.LongDescription" String="The version of the component firmware image that this registry applies to."/>
        </Property>
      </ComplexType>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="AttributeRegistry.v1_1_1">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to perform editoral updates of descriptions defined in this schema."/>
      <EntityType Name="AttributeRegistry" BaseType="AttributeRegistry.v1_1_0.AttributeRegistry"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="AttributeRegistry.v1_1_2">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <Annotation Term="OData.Description" String="This version was created to correct regex patterns for different attribute properties."/>
      <EntityType Name="AttributeRegistry" BaseType="AttributeRegistry.v1_1_1.AttributeRegistry"/>
    </Schema>

    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="AttributeRegistry.v1_2_0">
      <Annotation Term="Redfish.OwningEntity" String="DMTF"/>
      <EntityType Name="AttributeRegistry" BaseType="AttributeRegistry.v1_1_2.AttributeRegistry"/>

      <ComplexType Name="Attributes" BaseType="AttributeRegistry.v1_0_0.Attributes">
        <Annotation Term="OData.Description" String="An attribute and its possible values."/>
        <Annotation Term="OData.LongDescription" String="This type shall describe an attribute and its possible values and other metadata."/>
        <Property Name="ResetRequired" Type="Edm.Boolean">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="True if changing the value of this attribute requires a system or device reset in order to take effect."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be a boolean describing the requirement for a system or device reset for this attribute value change to take effect."/>
        </Property>
        <Property Name="UefiDevicePath" Type="Edm.String">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The UEFI device path that qualifies this attribute."/>
          <Annotation Term="OData.LongDescription" String="This property shall contain the UEFI device path string used to qualify and locate the specific device for this Attribute, as defined by the UEFI Specification."/>
        </Property>
        <Property Name="UefiKeywordName" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The UEFI KeywordString of the attribute."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the configuration KeywordString of this attribute, as defined in the UEFI Specification."/>
        </Property>
        <Property Name="UefiNamespaceId" Type="Edm.String" Nullable="false">
          <Annotation Term="OData.Permissions" EnumMember="OData.Permission/Read"/>
          <Annotation Term="OData.Description" String="The UEFI NamespaceId of the attribute."/>
          <Annotation Term="OData.LongDescription" String="The value of this property shall be the configuration NamespaceId of this attribute, as defined in the UEFI Specification."/>
        </Property>
      </ComplexType>
    </Schema>

  </edmx:DataServices>
</edmx:Edmx>
)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_ATTRIBUTE_REGISTRY_V1_HPP */
