//
// Created by zoisk on 02.05.24.
//

#ifndef $ADEL_H
#define $ADEL_H

#include "Einwohner.h"

class Adel : public Einwohner {
public:
    explicit Adel(int einkommen);
    int steuer() override;
};

#endif //$ADEL_H
