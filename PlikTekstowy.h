#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <fstream>

using namespace std;

class PlikTekstowy
{
    const string NAZWA_PLIKU;

    public:
    PlikTekstowy(string NAZWAPLIKU) : NAZWA_PLIKU(NAZWAPLIKU) {};
    string pobierzNazwePliku();
    bool czyPlikJestPusty();
};

#endif
