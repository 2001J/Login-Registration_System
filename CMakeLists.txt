cmake_minimum_required(VERSION 3.29)
project(login_and_registration_system)

set(CMAKE_CXX_STANDARD 20)

add_executable(login_and_registration_system src/main.cpp
        src/User.cpp
        src/User.h
        src/Database.cpp
        src/Database.h
        src/Registration.cpp
        src/Registration.h
        src/Login.cpp
        src/Login.h)
