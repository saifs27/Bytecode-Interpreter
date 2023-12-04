set(HEADER_LIST "${Interpreter_SOURCE_DIR}/include/chunk.hpp")

add_library(interpreter main.cpp ${HEADER_LIST})

target_include_directories(interpreter PUBLIC ../include)

target_compile_features(interpreter PUBLIC cxx_std_11)

source_group(
  TREE "${PROJECT_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${HEADER_LIST})
