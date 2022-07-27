cmake_minimum_required(VERSION 3.8)

project(HomeWork3 CXX)

add_executable(HomeWork3 Calculator.cpp )
target_compile_features(HomeWork3 PUBLIC cxx_std_17)

if(MSVC)
    target_compile_options(HomeWork3 PUBLIC /W4 /WX)
else()
    target_compile_options(HomeWork3 PUBLIC -Wall -Wextra -Werror -pedantic)
endif()
