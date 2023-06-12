#ifndef CMAKEVERSIONDEMO_BUILDCONFIG_H_
#define CMAKEVERSIONDEMO_BUILDCONFIG_H_

namespace CmakeVersionDemo::version {

class BuildConfig {
 public:
  BuildConfig();
  std::string command;
  std::string generator;
  std::string version;
  std::string system;
  std::string system_processor;
  std::string cxx_compiler_id;
  std::string cxx_compiler_version;
};

}

#endif // #ifndef CMAKEVERSIONDEMO_BUILDCONFIG_H_
