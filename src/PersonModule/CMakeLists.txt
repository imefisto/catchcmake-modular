add_library(PersonModule src/Person.cpp)

target_include_directories(PersonModule PUBLIC include)

set(TEST_SOURCES
  test/main.cpp
  test/PersonTest.cpp
  )

add_executable(PersonModuleTest ${TEST_SOURCES})
target_link_libraries(PersonModuleTest Catch PersonModule)

add_test(NAME PersonModuleTest COMMAND PersonModuleTest)

