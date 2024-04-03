cmake_minimum_required(VERSION 3.27)
project(Proyecto_Final)

set(CMAKE_CXX_STANDARD 17)

add_executable(Proyecto_Final main.cpp
        Telefono.cpp
        Telefono.h
        SmartPhone.cpp
        SmartPhone.h
        FeaturePhone.cpp
        FeaturePhone.h
        Inventario.cpp
        Inventario.h)
