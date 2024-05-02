//
// Created by zoisk on 02.05.24.
//

#include "Adel.h"

Adel::Adel(int einkommen) : Einwohner(einkommen) {
    this->einkommen = einkommen;
}

int Adel::zuVersteuerndesEinkommen() {
    return 0;
}
