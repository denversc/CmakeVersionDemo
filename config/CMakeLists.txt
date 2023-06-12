configure_file(
  configure_file.cc.in
  generated/configure_file/configure_file.cc
  @ONLY
)

file(
  GENERATE
  OUTPUT generated/build_type/$<CONFIG>/build_type.cc
  CONTENT [[
    constexpr std::string_view BUILD_TYPE = "$<CONFIG>"sv;
  ]]
)

add_library(
  config
  STATIC
  buildconfig.cc
  version.cc
)

target_include_directories(
  config
  PUBLIC
    include
  PRIVATE
    "${CMAKE_CURRENT_BINARY_DIR}/generated/configure_file"
    "${CMAKE_CURRENT_BINARY_DIR}/generated/build_type/$<CONFIG>"
)
