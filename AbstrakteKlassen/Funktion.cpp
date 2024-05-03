//
// Created by zoisk on 02.05.2024.
//

#include "Funktion.h"

void Funktion::werteTafel(Funktion *f, double von, double bis, double schritt) {
    std::cout << "Wertetabelle der Funktion: " << f->toString() << "\n=========================\n";
    for(double x = von; x <= bis + 1e-9; x += schritt) {
        if(f->valid(x))
            std::cout << f->toString(x) << "(" << x << ") = " << f->at(x) <<"\n";
        else
            std::cout << f->toString(x) << "(" << x << ") = " << "ist nicht berechenbar\n";
    }
    std::cout << "\n";
}

double Funktion::minWert(Funktion *f, double von, double bis, double schritt) {
    double min;
    while(!f->valid(von)) {
        von += schritt;
    }
    min = f->at(von);
    std::cout << "Kleinster Wert im Argumentbereich der Funktion: " << f->toString() << "\n=========================\n";
    for(double x = von; x <= bis + 1e-9; x += schritt) {
        if(f->valid(x) && f->at(x) < min) {
            min = f->at(x);
        }
    }
    std::cout << "Min: " << std::to_string(min) << "\n\n";
    return min;
}

double Funktion::maxWert(Funktion *f, double von, double bis, double schritt) {
    double max;
    std::cout << "Groesster Wert im Argumentbereich der Funktion: " << f->toString() << "\n=========================\n";
    for(double x = von; x <= bis + 1e-9; x += schritt) {
        if(f->valid(x) && f->at(x) > max) {
            max = f->at(x);
        }
    }
    std::cout << "Max: " << std::to_string(max) << "\n\n";
    return max;
}
