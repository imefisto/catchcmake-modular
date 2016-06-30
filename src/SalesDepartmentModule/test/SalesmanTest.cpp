#include "catch.hpp"
#include "SalesDepartmentModule/Salesman.h"

SCENARIO( "Salesman Entity", "[SalesDepartmentModule]" ) {

  GIVEN( "A salesman" ) {

    WHEN( "it is created" ) {

      SalesDepartmentModule::Salesman salesMan;

      THEN("getVendorCode should return an empty string") {

        REQUIRE(salesMan.getVendorCode().length() == 0 );

      }

    }
  }
}
