#include <iostream>
#include <string>

#include "CmakeVersionDemo/version.h"

using CmakeVersionDemo::version::Version;

int main() {
  Version version = Version::Get();
  std::cout << "full: " << version.full << std::endl;
  std::cout << "major: " << version.major << std::endl;
  std::cout << "minor: " << version.minor << std::endl;
  std::cout << "patch: " << version.patch << std::endl;
  std::cout << "build_type: " << version.build_type << std::endl;
}
