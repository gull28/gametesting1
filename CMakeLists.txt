cmake_minimum_required(VERSION 3.22)
project(gametesting1)

set(CMAKE_CXX_STANDARD 14)

add_executable(gametesting1 src/main.cpp src/engine.cpp headers/engine.hpp src/draw.cpp src/input.cpp src/snakehead.cpp headers/snakehead.hpp)

include_directories(headers c:/SFML/include)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics)

if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(gametesting1 ${SFML_LIBRARIES})
endif ()

file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

#DLL

if (WIN32)
    file(GLOB BINARY_DEP_DLLS "${SFML_INCLUDE_DIR}/../bin/*.dll")
    file(COPY ${BINARY_DEP_DLLS} DESTINATION ${CMAKE_BINARY_DIR})
endif ()

