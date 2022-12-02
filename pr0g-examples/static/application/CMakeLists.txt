cmake_minimum_required(VERSION 3.15)

project(
    calculator-app
    VERSION 0.0.1
    LANGUAGES CXX)

if(NULL)
	#set(DEV_LIB_DIR "path/to/library/in/development")

	# inform the user if a valid library path has not been set
	if(NOT DEFINED DEV_LIB_DIR)
	    message(
		FATAL_ERROR
		    "Please provide the path to the library in active development.
	Example: cmake -DDEV_LIB_DIR=\"path/to/library/in/development\" ..")
	endif()
	function(install_it)
	    execute_process(
		COMMAND cmake ..
		WORKING_DIRECTORY ${ARGV0}/build)
	    execute_process(
		COMMAND cmake --build . --target install
		WORKING_DIRECTORY ${ARGV0}/build)
	endfunction()
	install_it(${DEV_LIB_DIR})
endif()

find_package(calculator-static REQUIRED CONFIG)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE main.cpp)

target_link_libraries(${PROJECT_NAME}
                      PUBLIC calculator-static::calculator-static)
                      
install(
    TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})
