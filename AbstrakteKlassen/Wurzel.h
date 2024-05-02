//
// Created by zoisk on 02.05.2024.
//

#ifndef WURZEL_H
#define WURZEL_H

#include <cmath>
#include "Funktion.h"

class Wurzel : public Funktion {
public:
    explicit Wurzel(int f);
    double at(double x) override;
    bool valid(double x) override;
    std::string toString(double x) override;
    std::string toString() override;
};

#endif //WURZEL_H
