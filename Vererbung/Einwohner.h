//
// Created by zoisk on 02.05.24.
//

#ifndef $EINWOHNER_H
#define $EINWOHNER_H

#include <iostream>

class Einwohner{
protected:
    int einkommen;
public:
    explicit Einwohner(int einkommen);
    virtual int zuVersteuerndesEinkommen();
    virtual int steuer();
};

#endif //$EINWOHNER_H
