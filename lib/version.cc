#include <string>

#include "CmakeVersionDemo/version.h"

using namespace std::string_view_literals;

namespace CmakeVersionDemo::version {

namespace {
#include "configure_file.cc"
#include "build_type.cc"
}

Version::Version() :
    full(PROJECT_VERSION),
    major(PROJECT_VERSION_MAJOR),
    minor(PROJECT_VERSION_MINOR),
    patch(PROJECT_VERSION_PATCH),
    build_type(BUILD_TYPE) {
}

} // namespace CmakeVersionDemo::version {
