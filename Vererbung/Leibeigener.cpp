//
// Created by zoisk on 02.05.24.
//

#include "Leibeigener.h"

Leibeigener::Leibeigener(int einkommen) : Bauer(einkommen) {}

int Leibeigener::steuer() {
    int temp = this->einkommen;
    if(temp < 12) {
        temp = 0;
    }
    else {
        temp = temp * 0.1;
        if(temp < 1) {
            temp = 1;
        }
    }
    return temp;
}