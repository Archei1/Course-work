cmake_minimum_required(VERSION 3.24.2)
project(rpacman)

set(CMAKE_CXX_STANDARD 17)

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_executable(rpacman WIN32 main.cpp)
else ()
    add_executable(rpacman main.cpp)
endif ()

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR "C:/Users/DNS/Desktop/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML COMPONENTS system window graphics network audio REQUIRED)
target_link_libraries(rpacman sfml-system sfml-window sfml-graphics sfml-network sfml-audio)
set(CMAKE_EXE_LINKER_FLAGS -static)
