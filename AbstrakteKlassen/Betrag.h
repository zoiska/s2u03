//
// Created by zoisk on 02.05.2024.
//

#ifndef BETRAG_H
#define BETRAG_H

#include "Funktion.h"
#include <cmath>

class Betrag : public Funktion {
public:
    explicit Betrag(int f);
    double at(double x) override;
    bool valid(double x) override;
    std::string toString(double x) override;
    std::string toString() override;
};

#endif //BETRAG_H
