add_library(SalesDepartmentModule src/Salesman.cpp)

target_link_libraries(SalesDepartmentModule PersonModule)

target_include_directories(SalesDepartmentModule PUBLIC include)

set(TEST_SOURCES
  test/main.cpp
  test/SalesmanTest.cpp
  )

add_executable(SalesmanModuleTest ${TEST_SOURCES})
target_link_libraries(SalesmanModuleTest Catch SalesDepartmentModule)

add_test(NAME SalesmanModuleTest COMMAND SalesmanModuleTest)


