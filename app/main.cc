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
  std::cout << "cmake_command: " << build_config.cmake_command << std::endl;
  std::cout << "cmake_version: " << build_config.cmake_version << std::endl;
  std::cout << "cmake_generator: " << build_config.cmake_generator << std::endl;
  std::cout << "cmake_host_system: " << build_config.cmake_host_system << std::endl;
  std::cout << "cmake_system: " << build_config.cmake_system << std::endl;
  std::cout << "cmake_system_processor: " << build_config.cmake_system_processor << std::endl;
  std::cout << "cmake_cxx_compiler_id: " << build_config.cmake_cxx_compiler_id << std::endl;
  std::cout << "cmake_cxx_compiler_version: " << build_config.cmake_cxx_compiler_version << std::endl;
}
