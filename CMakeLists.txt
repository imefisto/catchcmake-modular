project(CatchCmakeModular)

cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

if(NOT TARGET Catch)

	include(ExternalProject)

	set(FETCH_EXTERNAL_CATCH
		URL https://github.com/philsquared/Catch/archive/v1.5.0.tar.gz
		URL_HASH MD5=d18fc213fb5cf662ce507b6fb549d5f6)

	ExternalProject_Add(Catch-External
		PREFIX ${CMAKE_BINARY_DIR}/external/Catch
		${FETCH_EXTERNAL_CATCH}
		CONFIGURE_COMMAND ""
		BUILD_COMMAND ""
		INSTALL_COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/external/Catch/src/Catch-External/single_include/catch.hpp ${CMAKE_BINARY_DIR}/external/Catch/include/catch.hpp
		)

	add_library(Catch INTERFACE)
	add_dependencies(Catch Catch-External)
	target_include_directories(Catch INTERFACE ${CMAKE_BINARY_DIR}/external/Catch/include)

endif()

add_subdirectory(src)

