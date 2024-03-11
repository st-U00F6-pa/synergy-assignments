cmake_minimum_required (VERSION 3.8)

project ("homework")

add_executable ("homework" "src/source.cpp" "src/animal.cpp")

target_include_directories(homework PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)