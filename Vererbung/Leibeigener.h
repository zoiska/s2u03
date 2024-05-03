//
// Created by zoisk on 02.05.24.
//

#ifndef $LEIBEIGENER_H
#define $LEIBEIGENER_H

#include "Bauer.h"

class Leibeigener : public Bauer {
public:
    explicit Leibeigener(int einkommen);
    int steuer() override;
};

#endif //$LEIBEIGENER_H
