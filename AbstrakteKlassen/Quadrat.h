//
// Created by zoisk on 02.05.2024.
//

#ifndef QUADRAT_H
#define QUADRAT_H

#include "Funktion.h"

class Quadrat : public Funktion {
public:
    explicit Quadrat(int f);
    double at(double x) override;
    bool valid(double x) override;
    std::string toString(double x) override;
    std::string toString() override;
};

#endif //QUADRAT_H
