cmake_minimum_required(VERSION 3.20)

Project(ArgParser VERSION 1.0.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Arg
    main.cpp
)

set_target_properties(Arg PROPERTIES LANGUAGE CXX)

target_link_libraries(Arg PUBLIC
    ArgParser
)

add_subdirectory(Component/ArgParser)