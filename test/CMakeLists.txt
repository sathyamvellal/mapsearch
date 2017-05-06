cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_STANDARD 11)

# set source files
set(sources_util
        ../src/util.cpp)
set(sources_gpslocation
        ../src/gpslocation.cpp)

set(sources_test-hash
        ../test/test-hash.cpp)
set(sources_test-gpslocation
        ../test/test-gpslocation.cpp)

add_executable(test-hash ${sources_test-hash} ${sources_util})
add_executable(test-gpslocation ${sources_test-gpslocation} ${sources_util} ${sources_gpslocation})

install(TARGETS test-hash DESTINATION ${PROJECT_SOURCE_DIR}/bin)
install(TARGETS test-gpslocation DESTINATION ${PROJECT_SOURCE_DIR}/bin)