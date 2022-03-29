cmake_minimum_required(VERSION 3.21)

add_executable (${CMAKE_PROJECT_NAME}  main.cxx)
set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

