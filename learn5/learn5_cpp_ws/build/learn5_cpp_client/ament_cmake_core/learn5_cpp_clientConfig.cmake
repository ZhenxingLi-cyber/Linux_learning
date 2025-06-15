# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_learn5_cpp_client_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED learn5_cpp_client_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(learn5_cpp_client_FOUND FALSE)
  elseif(NOT learn5_cpp_client_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(learn5_cpp_client_FOUND FALSE)
  endif()
  return()
endif()
set(_learn5_cpp_client_CONFIG_INCLUDED TRUE)

# output package information
if(NOT learn5_cpp_client_FIND_QUIETLY)
  message(STATUS "Found learn5_cpp_client: 0.0.0 (${learn5_cpp_client_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'learn5_cpp_client' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${learn5_cpp_client_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(learn5_cpp_client_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${learn5_cpp_client_DIR}/${_extra}")
endforeach()
