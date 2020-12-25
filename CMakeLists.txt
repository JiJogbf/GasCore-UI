cmake_minimum_required(VERSION 3.16)

set(CXX_STANDARD 17)

aux_source_directory(src/cpp/main UIMainSrc)
aux_source_directory(src/cpp/main/gas UIMainSrc)
aux_source_directory(src/cpp/main/gas/impl UIMainSrc)
add_library(UI ${UIMainSrc})
add_executable(UITest src/cpp/test/test.cpp)
target_include_directories(UI PUBLIC src/cpp/main)
target_include_directories(UITest PUBLIC src/cpp/test)
target_link_libraries(UI Core)
target_link_libraries(UITest UI Core)
