cmake_minimum_required(VERSION 3.16)

project(one)

add_library(simple_lib simple_lib.cpp simple_lib.hpp)

target_include_directories(simple_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_compile_definitions(simple_lib PRIVATE MYLIB_PRIVATE)
target_compile_definitions(simple_lib PUBLIC MYLIB_PUBLIC)

# add an executable target
add_executable(${PROJECT_NAME})

# add the source files to build
target_sources(${PROJECT_NAME} PRIVATE simple_example.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC simple_lib)

set(MY_VARIABLE "I am a variable")
message(STATUS "${MY_VARIABLE}")

include(CMakePrintHelpers)
cmake_print_variables(MY_VARIABLE)

cmake_print_properties(TARGETS ${PROJECT_NAME}
PROPERTIES POSITION_INDEPENDENT_CODE
)
