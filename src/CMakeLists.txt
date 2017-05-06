cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_STANDARD 11)

# set source files
file(GLOB SOURCE_FILES *.cpp)
file(GLOB HEADER_FILES *.h)

add_executable(mapsearch ${SOURCE_FILES})

install(TARGETS mapsearch RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/bin)