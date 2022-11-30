
set(HEADER_LIST "${Three_SOURCE_DIR}/include/modern/lib.hpp")
add_library(modern_lib lib.cpp ${HEADER_LIST})

# We need this directory, and users of our library will need it too
target_include_directories(modern_lib PUBLIC ../include)

# This depends on (header only) boost
#target_link_libraries(modern_library PRIVATE Boost::boost)

# All users of this library will need at least C++11
target_compile_features(modern_lib PUBLIC cxx_std_11)
