#include <string>
#include <string_view>

#include "CmakeVersionDemo/buildconfig.h"

using namespace std::string_view_literals;

namespace CmakeVersionDemo::version {

namespace {
#include "configure_file.cc"
}

BuildConfig::BuildConfig() : 
    command(CMAKE_COMMAND),
    generator(CMAKE_GENERATOR),
    version(CMAKE_VERSION),
    system(CMAKE_SYSTEM),
    system_processor(CMAKE_SYSTEM_PROCESSOR),
    cxx_compiler_id(CMAKE_CXX_COMPILER_ID),
    cxx_compiler_version(CMAKE_CXX_COMPILER_VERSION) {
}

} // namespace CmakeVersionDemo::version {
