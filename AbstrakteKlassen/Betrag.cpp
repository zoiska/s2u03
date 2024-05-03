//
// Created by zoisk on 02.05.2024.
//

#include "Betrag.h"

Betrag::Betrag(int f) {
    this->f = f;
}

double Betrag::at(double x) {
    return abs(x);
}

bool Betrag::valid(double x) {
    return true;
}

std::string Betrag::toString(double x) {
    std::cout << "Betrag(" << std::to_string(x) << ") = " << std::to_string(at(x)) << std::endl;
    return std::to_string(at(x));
}

std::string Betrag::toString() {
    return std::to_string(this->f);
}