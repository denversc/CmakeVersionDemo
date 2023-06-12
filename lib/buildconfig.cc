#include <string>
#include <string_view>

#include "CmakeVersionDemo/buildconfig.h"

using namespace std::string_view_literals;

namespace CmakeVersionDemo::version {

namespace {
#include "configure_file.cc"
}

BuildConfig::BuildConfig() : 
    cmake_command(CMAKE_COMMAND),
    cmake_version(CMAKE_VERSION),
    cmake_generator(CMAKE_GENERATOR),
    cmake_host_system(CMAKE_HOST_SYSTEM),
    cmake_system(CMAKE_SYSTEM),
    cmake_system_processor(CMAKE_SYSTEM_PROCESSOR),
    cmake_cxx_compiler_id(CMAKE_CXX_COMPILER_ID),
    cmake_cxx_compiler_version(CMAKE_CXX_COMPILER_VERSION) {
}

} // namespace CmakeVersionDemo::version {
