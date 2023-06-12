cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(CmakeVersionDemo VERSION 123.456.789 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

include("cmake/SetupCxxCompilerWarnings.cmake")

add_subdirectory(lib)
add_subdirectory(app)
