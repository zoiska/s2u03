cmake_minimum_required(VERSION 3.27)
project(s2u03)

set(CMAKE_CXX_STANDARD 14)

include_directories(Vererbung)

add_executable(s2u03
        Vererbung/Adel.cpp
        Vererbung/Adel.h
        Vererbung/Bauer.cpp
        Vererbung/Bauer.h
        Vererbung/Einwohner.cpp
        Vererbung/Einwohner.h
        Vererbung/Kaiser.cpp
        Vererbung/Kaiser.h
        Vererbung/Leibeigener.cpp
        Vererbung/Leibeigener.h
        AbstrakteKlassen/Wurzel.cpp
        AbstrakteKlassen/Wurzel.h
        AbstrakteKlassen/Funktion.cpp
        AbstrakteKlassen/Funktion.h
        AbstrakteKlassen/Quadrat.cpp
        AbstrakteKlassen/Quadrat.h
        AbstrakteKlassen/Betrag.cpp
        AbstrakteKlassen/Betrag.h
        main.cpp)
