# set the minimum required version of cmake to use
# needed to set version and policy settings before invoking other commands
cmake_minimum_required(VERSION 3.15)

# set the name of the project
# must immediately follow cmake_minimum_required command
project(hi
    LANGUAGES CXX)

# add an executable target
add_executable(${PROJECT_NAME})

# add the source files to build
target_sources(${PROJECT_NAME} PRIVATE helloworld.cpp)

install(
    TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}
    
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})