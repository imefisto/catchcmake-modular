add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PersonModule SalesDepartmentModule)
 
add_subdirectory(PersonModule)
add_subdirectory(SalesDepartmentModule)

