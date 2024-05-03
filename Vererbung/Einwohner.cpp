//
// Created by zoisk on 02.05.24.
//

#include "Einwohner.h"

Einwohner::Einwohner(int einkommen) {
    this->einkommen = einkommen;
}

int Einwohner::zuVersteuerndesEinkommen() {
    return this->einkommen;
}

int Einwohner::steuer() {
    int temp = this->einkommen;
    temp = temp * 0.1;
    if(temp < 1) {
        temp = 1;
    }
    return temp;
}
