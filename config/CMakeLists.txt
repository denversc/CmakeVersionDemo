configure_file(
  version_constants.cc.in
  generated/version_constants.cc
  @ONLY
)

file(
  GENERATE
  OUTPUT generated_$<CONFIG>/build_type.cc
  CONTENT [[
    constexpr std::string BUILD_TYPE = "$<CONFIG>"s;
  ]]
)

add_library(
  config
  STATIC
  version.cc
)

target_include_directories(
  config
  PUBLIC
    include
  PRIVATE
    "${CMAKE_CURRENT_BINARY_DIR}/generated"
    "${CMAKE_CURRENT_BINARY_DIR}/generated_$<CONFIG>"
)
