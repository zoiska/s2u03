//
// Created by zoisk on 02.05.24.
//

#include "Leibeigener.h"

Leibeigener::Leibeigener(int einkommen) : Einwohner(einkommen) {
    this->einkommen = einkommen;
}

int Leibeigener::steuer() {
    if(this->einkommen < 12) {
        return 0;
    }
    else {
        int temp = this->einkommen;
        temp = temp * 0.1;
        if(temp < 1) {
            return 1;
        }
        else {
            return temp;
        }
    }
}
