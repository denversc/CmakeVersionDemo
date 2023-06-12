configure_file(
  configure_file.cc.in
  include/configure_file/configure_file.cc
  @ONLY
)

file(
  GENERATE
  OUTPUT include/build_type/$<CONFIG>/build_type.cc
  CONTENT [[
    constexpr std::string_view BUILD_TYPE = "$<CONFIG>"sv;
  ]]
)

add_library(
  lib
  STATIC
  buildconfig.cc
  version.cc
)

target_include_directories(
  lib
  PUBLIC
    include
  PRIVATE
    "${CMAKE_CURRENT_BINARY_DIR}/include/configure_file"
    "${CMAKE_CURRENT_BINARY_DIR}/include/build_type/$<CONFIG>"
)
