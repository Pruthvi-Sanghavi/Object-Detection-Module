cmake_minimum_required(VERSION 2.8)
project(color_detect )
find_package( OpenCV REQUIRED )

# Add project cmake modules to path.
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)

# We probably don't want this to run on every build.
#option(COVERAGE "Generate Coverage Data" OFF)

#if (COVERAGE)
#    include(CodeCoverage)
#    set(LCOV_REMOVE_EXTRA "'vendor/*'" "'include/Eigen/*'" "'opencv-3.3.0/*'")
#    setup_target_for_coverage(code_coverage test/cpp-test coverage)
#    set(COVERAGE_SRCS app/main.cpp app/cam.cpp app/rectplot.cpp app/cascade.cpp include/cam.hpp include/rectplot.hpp include/cascade.hpp)
#
#    SET(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
#    SET(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
#    SET(CMAKE_EXE_LINKER_FLAGS "-fprofile-arcs -ftest-coverage")
#else()
#    set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wpedantic -g")
#endif()

include(CMakeToolsHelpers OPTIONAL)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(app)
#add_subdirectory(test)
#add_subdirectory(vendor/googletest/googletest)
