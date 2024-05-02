//
// Created by zoisk on 02.05.2024.
//

#include "Quadrat.h"

Quadrat::Quadrat(int f) {
    this->f = f;
}

double Quadrat::at(double x) {
    return x * x;
}

bool Quadrat::valid(double x) {
    return true;
}

std::string Quadrat::toString(double x) {
    std::cout << "Quadrat(" << std::to_string(x) << ") = " << std::to_string(at(x)) << std::endl;
    return std::to_string(at(x));
}

std::string Quadrat::toString() {
    return std::to_string(this->f);
}