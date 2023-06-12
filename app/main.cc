#include <iostream>
#include <string>

#include "CmakeVersionDemo/buildconfig.h"
#include "CmakeVersionDemo/version.h"

using CmakeVersionDemo::version::BuildConfig;
using CmakeVersionDemo::version::Version;

int main() {
  Version version;
  std::cout << "full: " << version.full << std::endl;
  std::cout << "major: " << version.major << std::endl;
  std::cout << "minor: " << version.minor << std::endl;
  std::cout << "patch: " << version.patch << std::endl;
  std::cout << "build_type: " << version.build_type << std::endl;

  BuildConfig build_config;
  std::cout << "command: " << build_config.command << std::endl;
  std::cout << "generator: " << build_config.generator << std::endl;
  std::cout << "version: " << build_config.version << std::endl;
  std::cout << "system: " << build_config.system << std::endl;
  std::cout << "system_processor: " << build_config.system_processor << std::endl;
  std::cout << "cxx_compiler_id: " << build_config.cxx_compiler_id << std::endl;
  std::cout << "cxx_compiler_version: " << build_config.cxx_compiler_version << std::endl;
}
