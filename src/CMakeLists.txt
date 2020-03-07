function (add_xt_module _name)
  string(TOUPPER ${_name} _tmp)
  set(_build_macro "XT_EXPORTS_${_tmp}")
  message(STATUS "Hello ${_build_macro}")
  set(_target "Xt${_name}")
  file(GLOB_RECURSE _src "${_name}/*.cpp" "${_name}/*.h")
  add_library(${_target} SHARED ${_src})
  target_include_directories(
    ${_target}
    PUBLIC "${CMAKE_SOURCE_DIR}/include"
  )
  set_target_properties(${_target} PROPERTIES CXX_STANDARD 17)
  target_compile_definitions(${_target} PRIVATE ${_build_macro}=1)
  foreach(dep ${ARGN})
    target_link_libraries(${_target} "Xt${dep}")
  endforeach()
endfunction()

add_xt_module(Core)
add_xt_module(Widgets Core)
