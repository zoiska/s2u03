//
// Created by zoisk on 02.05.24.
//

#include "Adel.h"

Adel::Adel(int einkommen) : Einwohner(einkommen) {
    this->einkommen = einkommen;
}

int Adel::steuer() {
    int temp = this->einkommen;
    temp = temp * 0.2;
    if(temp < 1) {
        return 1;
    }
    else {
        return temp;
    }
}
