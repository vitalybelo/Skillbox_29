cmake_minimum_required(VERSION 3.23)

add_executable(Skillbox_29
        main.cpp
        Talent.cpp
        Dancing.cpp
        Swimming.cpp
        Counting.cpp
        Dog.cpp
        solution_1.cpp

        )

target_include_directories(Skillbox_29 PUBLIC ${INCLUDE_DIR})