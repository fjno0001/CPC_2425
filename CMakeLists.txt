cmake_minimum_required(VERSION 3.27)
project(proyectoPID)

set(CMAKE_CXX_STANDARD 17)

add_executable(PIDfinal 00-Funcional/main.cpp
        00-Funcional/pid.cpp)

add_executable(PIDpruebas 01-Pruebas/main.cpp
        01-Pruebas/pid.cpp)