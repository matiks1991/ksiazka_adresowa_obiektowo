#include "KsiazkaAdresowa.h"

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikManager.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikManager.logowanieUzytkownika();
    if(uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager = new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikManager.wylogujUzytkownika();
    delete adresatManager;
    adresatManager = NULL;
}

void KsiazkaAdresowa::dodajAdresata()
{
    if(uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager->dodajAdresata();
    }
    else
    {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if(uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager->wyswietlWszystkichAdresatow();
    }
    else
    {
        cout << "Aby wyswietlic wszystkich adresatow, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    uzytkownikManager.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::usunAdresata()
{
    if(uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager->usunAdresata();
    }
    else
    {
        cout << "Aby usunac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::edytujAdresata()
{
    if(uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager->edytujAdresata();
    }
    else
    {
        cout << "Aby edytowac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}
