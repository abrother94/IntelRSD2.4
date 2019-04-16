#ifndef PSME_REST_METADATA_ORG_ODATA_MEASURESV1_HPP
#define PSME_REST_METADATA_ORG_ODATA_MEASURESV1_HPP

#include <string>

namespace psme {
namespace rest {
namespace metadata {

static const std::string OrgODataMeasuresV1_XML =
R"Xy+Z*aF--(<?xml version="1.0" encoding="UTF-8"?>
<!--
     OData Version 4.0
     OASIS Standard
     24 February 2014
     Copyright (c) OASIS Open 2014. All Rights Reserved.
     Source: http://docs.oasis-open.org/odata/odata/v4.0/os/vocabularies/
     -->
<edmx:Edmx xmlns:edmx="http://docs.oasis-open.org/odata/ns/edmx" Version="4.0">
  <edmx:Reference Uri="/redfish/v1/metadata/Org.OData.Core.V1.xml">
    <edmx:Include Alias="Core" Namespace="Org.OData.Core.V1"/>
  </edmx:Reference>
  <edmx:DataServices>
    <Schema xmlns="http://docs.oasis-open.org/odata/ns/edm" Namespace="Org.OData.Measures.V1" Alias="Measures">
      <Annotation Term="Core.Description">
        <String>Terms describing monetary amounts and measured quantities</String>
      </Annotation>

      <Term Name="ISOCurrency" Type="Edm.String" AppliesTo="Property">
        <Annotation Term="Core.Description" String="The currency for this monetary amount as an ISO 4217 currency code"/>
      </Term>

      <Term Name="Scale" Type="Edm.Byte" AppliesTo="Property">
        <Annotation Term="Core.Description" String="The number of significant decimal places in the scale part (less than or equal to the number declared in the Scale facet)"/>
        <Annotation Term="Core.RequiresType" String="Edm.Decimal"/>
      </Term>

      <Term Name="Unit" Type="Edm.String" AppliesTo="Property">
        <Annotation Term="Core.Description" String="The unit of measure for this measured quantity, e.g. cm for centimeters or % for percentages"/>
      </Term>

    </Schema>
  </edmx:DataServices>
</edmx:Edmx>)Xy+Z*aF--";

} /* metadata */
} /* rest */
} /* psme */


#endif /* PSME_REST_METADATA_ORG_ODATA_MEASURESV1_HPP */
