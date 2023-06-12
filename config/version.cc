#include <string>

#include "CmakeVersionDemo/version.h"

using namespace std::string_literals;

namespace CmakeVersionDemo::version {

namespace {
#include "version_constants.cc"
#include "build_type.cc"
}

Version Version::Get() {
  return {
    .full = PROJECT_VERSION,
    .major = PROJECT_VERSION_MAJOR,
    .minor = PROJECT_VERSION_MINOR,
    .patch = PROJECT_VERSION_PATCH,
    .build_type = BUILD_TYPE,
  };
}

} // namespace CmakeVersionDemo::version {
