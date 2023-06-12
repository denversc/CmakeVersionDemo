configure_file(
  version_constants.cc.in
  generated/version_constants.cc
  @ONLY
)

add_library(
  buildconfig
  STATIC
  version.cc
)

target_include_directories(
  buildconfig
  PUBLIC
    include/public
  PRIVATE
    "${CMAKE_CURRENT_BINARY_DIR}/generated"
)
