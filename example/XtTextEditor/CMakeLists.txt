file(GLOB_RECURSE SOURCES "*.cpp" "*.h")
add_executable(XtTextEditor ${SOURCES})
target_link_libraries(XtTextEditor XtWidgets)
