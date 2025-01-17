cmake_minimum_required(VERSION 3.10)

add_library(ArgParser SHARED
    Source/ArgParser.cpp
)

target_include_directories(ArgParser PUBLIC
    Include/
    Source/
)

set_target_properties(ArgParser PROPERTIES LINKER_LANGUAGE CXX)

enable_language(CXX)
set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED yes)