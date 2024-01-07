cmake_minimum_required (VERSION 3.8)

project ("homework")

add_executable ("homework" "src/main.cpp" "src/translate.cpp")

target_include_directories(homework PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)