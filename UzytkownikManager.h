#ifndef UZYTKOWNIKMANAGER_H
#define UZYTKOWNIKMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
#include "AdresatManager.h"

using namespace std;

class UzytkownikManager
{
    int idZalogowanegoUzytkownika;
    vector<Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;
    AdresatManager adresatManager;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string);


public:
    UzytkownikManager(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami), adresatManager(nazwaPlikuZAdresatami), idZalogowanegoUzytkownika(0) {
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    int pobierzIdZalogowanegoUzytkownika();
};

#endif
