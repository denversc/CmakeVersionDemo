#ifndef CMAKEVERSIONDEMO_VERSION_H_
#define CMAKEVERSIONDEMO_VERSION_H_

namespace CmakeVersionDemo::version {

class Version {
 public:
  Version();

  std::string full;
  int major{};
  int minor{};
  int patch{};

  std::string build_type;
};

}

#endif // #ifndef CMAKEVERSIONDEMO_VERSION_H_
