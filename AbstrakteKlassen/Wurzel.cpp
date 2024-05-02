//
// Created by zoisk on 02.05.2024.
//

#include "Wurzel.h"

Wurzel::Wurzel(int f) {
    this->f = f;
}

double Wurzel::at(double x) {
    return sqrt(x);
}

bool Wurzel::valid(double x) {
    if(x < 0) {
        return false;
    }
    else {
        return true;
    }
}

std::string Wurzel::toString(double x) {
    std::cout << "Quadratwurzel(" << std::to_string(x) << ") = " << std::to_string(at(x)) << std::endl;
    return std::to_string(at(x));
}

std::string Wurzel::toString() {
    return std::to_string(this->f);
}
