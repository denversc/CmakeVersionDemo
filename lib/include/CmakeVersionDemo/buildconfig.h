#ifndef CMAKEVERSIONDEMO_BUILDCONFIG_H_
#define CMAKEVERSIONDEMO_BUILDCONFIG_H_

namespace CmakeVersionDemo::version {

class BuildConfig {
 public:
  BuildConfig();
  std::string cmake_command;
  std::string cmake_version;
  std::string cmake_generator;
  std::string cmake_host_system;
  std::string cmake_system;
  std::string cmake_system_processor;
  std::string cmake_cxx_compiler_id;
  std::string cmake_cxx_compiler_version;
};

}

#endif // #ifndef CMAKEVERSIONDEMO_BUILDCONFIG_H_
