#ifndef CMAKEVERSIONDEMO_VERSION_H_
#define CMAKEVERSIONDEMO_VERSION_H_

namespace CmakeVersionDemo::version {

struct Version {
  std::string full;
  int major{};
  int minor{};
  int patch{};

  static Version Get();
};

}

#endif // #ifndef CMAKEVERSIONDEMO_VERSION_H_
