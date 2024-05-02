//
// Created by zoisk on 02.05.2024.
//

#ifndef FUNKTION_H
#define FUNKTION_H

#include <iostream>

class Funktion {
protected:
    int f;
public:
    Funktion() = default;
    virtual ~Funktion() = default;
    virtual double at(double x) = 0;
    virtual bool valid(double x) = 0;
    virtual std::string toString() = 0;
    virtual std::string toString(double x) = 0;
    virtual void werteTafel(Funktion *f, double von, double bis, double schritt);
    virtual double minWert(Funktion *f, double von, double bis, double schritt);
    virtual double maxWert(Funktion *f, double von, double bis, double schritt);
};

#endif //FUNKTION_H
