cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

add_executable(Sample "sample.cpp")

target_include_directories(Sample PRIVATE ${KONTAKT_INCLUDE_DIR})
target_link_libraries(Sample Kontakt)