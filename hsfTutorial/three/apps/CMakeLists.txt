add_executable(${PROJECT_NAME} app.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE modern_lib)

install(
    TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})