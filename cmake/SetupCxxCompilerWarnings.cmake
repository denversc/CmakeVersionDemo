# Add the compiler-specific flag to treat warnings as errors.
# Specify --compile-no-warning-as-error to cmake to disable warnings as errors.
# See https://cmake.org/cmake/help/v3.25/variable/CMAKE_COMPILE_WARNING_AS_ERROR.html
# and https://cmake.org/cmake/help/v3.25/manual/cmake.1.html#cmdoption-cmake-compile-no-warning-as-error
set(CMAKE_COMPILE_WARNING_AS_ERROR YES)

if(CMAKE_CXX_COMPILER_ID IN_LIST "AppleClang;Clang;GNU")
  add_compile_options(
    -pedantic # Warn on language extensions
    -Wall
    -Wextra 
    -Wshadow # warn the user if a variable declaration shadows one from a parent context
    -Wnon-virtual-dtor # warn the user if a class with virtual functions has a non-virtual destructor. This helps catch hard to track down memory errors
    -Wold-style-cast # warn for c-style casts
    -Wcast-align # warn for potential performance problem casts
    -Wunused # warn on anything being unused
    -Woverloaded-virtual # warn if you overload (not override) a virtual function
    -Wpedantic # (all versions of GCC, Clang >= 3.2) warn if non-standard C++ is used
    -Wconversion # warn on type conversions that may lose data
    -Wsign-conversion # (Clang all versions, GCC >= 4.3) warn on sign conversions
    -Wmisleading-indentation # (only in GCC >= 6.0) warn if indentation implies blocks where blocks do not exist
    -Wnull-dereference # (only in GCC >= 6.0) warn if a null dereference is detected
    -Wdouble-promotion # (GCC >= 4.6, Clang >= 3.8) warn if float is implicitly promoted to double
    -Wformat=2 # warn on security issues around functions that format output (i.e., printf)
    -Wimplicit-fallthrough # Warns when case statements fall-through. (Included with -Wextra in GCC, not in clang)
  )
endif()

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  add_compile_options(
    -Wduplicated-cond # (only in GCC >= 6.0) warn if if / else chain has duplicated conditions
    -Wduplicated-branches # (only in GCC >= 7.0) warn if if / else branches have duplicated code
    -Wlogical-op # (only in GCC) warn about logical operations being used where bitwise were probably wanted
    -Wuseless-cast # (only in GCC >= 4.8) warn if you perform a cast to the same type
  )
endif()
