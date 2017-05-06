cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_STANDARD 11)

# set source files
set(sources_util
        ../src/util.cpp)

set(sources_test-hash
        ../test/test-hash.cpp)

add_executable(test-hash ${sources_test-hash} ${sources_util})

install(TARGETS test-hash DESTINATION ${PROJECT_SOURCE_DIR}/bin)