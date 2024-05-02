//
// Created by zoisk on 02.05.24.
//

#include "Einwohner.h"

Einwohner::Einwohner(int einkommen) {
    this->einkommen = einkommen;
}

int Einwohner::zuVersteuerndesEinkommen() {
    int temp = this->einkommen;
    temp = temp * 0.1;
    if(temp < 1) {
        return 1;
    }
    else {
        return temp;
    }
}

int Einwohner::steuer() {
    return 0;
}
