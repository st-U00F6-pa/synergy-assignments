cmake_minimum_required (VERSION 3.8)

project ("template")

add_executable ("template" "src/main.cpp" )

target_include_directories(template PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)