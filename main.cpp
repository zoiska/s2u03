#include <iostream>
#include "Vererbung/Einwohner.h"
#include "Vererbung/Bauer.h"
#include "Vererbung/Adel.h"
#include "Vererbung/Kaiser.h"
#include "Vererbung/Leibeigener.h"

int main() {
    Bauer Marco(55);
    Adel Benni(500);
    Kaiser Ninab(2000);
    std::cout << Marco.zuVersteuerndesEinkommen() << std::endl;
    return 0;
}
