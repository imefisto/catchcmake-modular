#include "catch.hpp"
#include "PersonModule/Person.h"

SCENARIO( "Person Entity", "[PersonModule]" ) {

  GIVEN( "A person" ) {

    WHEN( "it is created" ) {

      PersonModule::Person person;

      THEN("getFullname should return an empty string") {

        REQUIRE(person.getFullName().length() == 0 );

      }

    }

    WHEN("assign name and surname") {

      PersonModule::Person person;

      person.setName("Pepe");
      person.setSurname("Argento");

      THEN("getFullName sould return name+<space>+surname") {

        REQUIRE(person.getFullName() == "Pepe Argento");

      }

    }

    WHEN("assign only a name") {

      PersonModule::Person person;

      person.setName("Pepe");

      THEN("getFullName sould return the name") {

        REQUIRE(person.getFullName() == "Pepe");

      }

    }

    WHEN("assign only a surname") {

      PersonModule::Person person;

      person.setName("Argento");

      THEN("getFullName sould return the surname") {

        REQUIRE(person.getFullName() == "Argento");

      }

    }

  }

}

