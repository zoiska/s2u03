//
// Created by zoisk on 02.05.24.
//

#ifndef $KAISER_H
#define $KAISER_H

#include "Einwohner.h"

class Kaiser : public Einwohner {
public:
    explicit Kaiser(int einkommen);
    int steuer() override;
};

#endif //$KAISER_H
