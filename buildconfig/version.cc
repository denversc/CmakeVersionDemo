#include <string>

#include "CmakeVersionDemo/version.h"

namespace CmakeVersionDemo::version {

namespace {
using namespace std::string_literals;
#include "version_constants.cc"
}

Version Version::Get() {
  return {
    .full = PROJECT_VERSION,
    .major = PROJECT_VERSION_MAJOR,
    .minor = PROJECT_VERSION_MINOR,
    .patch = PROJECT_VERSION_PATCH,
  };
}

} // namespace CmakeVersionDemo::version {
