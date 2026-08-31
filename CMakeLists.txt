# CMakeList.txt : CMake project for Space, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.16)


project ("Space")

set(CMAKE_CXX_STANDARD 17)
file (GLOB_RECURSE SOURCES "${PROJECT_SOURCE_DIR}/game/src/*.cpp" "${PROJECT_SOURCE_DIR}/game/src/*.h")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
add_subdirectory(vendored/SDL EXCLUDE_FROM_ALL)

# Add source to this project's executable.
add_executable (Space ${SOURCES})

target_link_libraries(Space PRIVATE SDL3::SDL3)