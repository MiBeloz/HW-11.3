cmake_minimum_required(VERSION 3.22.0)

project(leaver)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(LeaverLibraryDinamicLib SHARED Leaver.h Leaver.cpp)

add_executable(HW-11.3 main.cpp)

target_link_libraries(HW-11.3 LeaverLibraryDinamicLib)