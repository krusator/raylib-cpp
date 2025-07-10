# Setup the project and settings
cmake_minimum_required(VERSION 4.0)
project(snake-cpp)
# Directories that contain examples

# Next few lines will check for existence of symbols or header files
# They are needed for the physac example and threads examples
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


if (APPLE AND NOT CMAKE_SYSTEM STRLESS "Darwin-18.0.0")
    add_definitions(-DGL_SILENCE_DEPRECATION)
    MESSAGE(AUTHOR_WARNING "OpenGL is deprecated starting with macOS 10.14 (Mojave)!")
endif ()


add_executable(main main.cpp)
find_package(raylib 5.5 REQUIRED)
	
target_link_libraries(main raylib)
