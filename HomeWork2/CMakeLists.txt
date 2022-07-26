cmake_minimum_required(VERSION 3.8)

project(HomeWork2 CXX)

add_executable(HomeWork2 hello_world.cpp move_me_out.cpp  example.cpp )
target_compile_features(HomeWork2 PUBLIC cxx_std_17)

if(MSVC)
    target_compile_options(HomeWork2 PUBLIC /W4 /WX)
else()
    target_compile_options(HomeWork2 PUBLIC -Wall -Wextra -Werror -pedantic)
endif()
