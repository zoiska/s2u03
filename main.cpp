#include <iostream>
#include "Vererbung/Einwohner.h"
#include "Vererbung/Bauer.h"
#include "Vererbung/Adel.h"
#include "Vererbung/Kaiser.h"
#include "Vererbung/Leibeigener.h"
#include "AbstrakteKlassen/Funktion.h"
#include "AbstrakteKlassen/Wurzel.h"
#include "AbstrakteKlassen/Quadrat.h"
#include "AbstrakteKlassen/Betrag.h"

int main() {
    Bauer Marco(500);
    Leibeigener Kevin(50);
    Adel Benni(5000);
    Kaiser Ninab(20000);
    std::cout << "--Kaiser--\nZu versteuerndes Einkommen: " << Ninab.zuVersteuerndesEinkommen() << "\n Steuern: " << Ninab.steuer() << "\n";
    std::cout << "--Adel--\nZu versteuerndes Einkommen: " << Benni.zuVersteuerndesEinkommen() << "\n Steuern: " << Benni.steuer() << "\n";
    std::cout << "--Bauer--\nZu versteuerndes Einkommen: " << Marco.zuVersteuerndesEinkommen() << "\n Steuern: " << Marco.steuer() << "\n";
    std::cout << "--Leibeigener--\nZu versteuerndes Einkommen: " << Kevin.zuVersteuerndesEinkommen() << "\n Steuern: " << Kevin.steuer() << "\n\n\n";


    Wurzel wurzel1(5);
    wurzel1.werteTafel(&wurzel1, -1.0, 5.0, 1.0);
    wurzel1.minWert(&wurzel1, -1.0, 5.0, 1.0);
    wurzel1.maxWert(&wurzel1, -1.0, 5.0, 1.0);

    Quadrat quadrat1(5);
    quadrat1.werteTafel(&quadrat1, 1.0, 5.0, 1.0);
    quadrat1.minWert(&quadrat1, 1.0, 5.0, 1.0);
    quadrat1.maxWert(&quadrat1, 1.0, 5.0, 1.0);

    Betrag betrag1(4);
    betrag1.werteTafel(&betrag1, -10.0, 2.0, 1.0);
    betrag1.minWert(&betrag1, -10.0, 2.0, 1.0);
    betrag1.maxWert(&betrag1, -10.0, 2.0, 1.0);
    return 0;
}
