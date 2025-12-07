#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // ============================================
    // Zadanie 1 – Średnia prędkość
    // ============================================
    double dystans, czas;
    cout << "Podaj dystans (km): ";
    cin >> dystans;
    cout << "Podaj czas podrozy (h): ";
    cin >> czas;

    double srednia_predkosc = dystans / czas;
    cout << "Srednia predkosc: " << srednia_predkosc << " km/h" << endl << endl;


    // ============================================
    // Zadanie 2 – Pole i przekątna prostokąta
    // ============================================
    double dlugosc, szerokosc;
    cout << "Podaj dlugosc prostokata: ";
    cin >> dlugosc;
    cout << "Podaj szerokosc prostokata: ";
    cin >> szerokosc;

    double pole = dlugosc * szerokosc;
    double przekatna = sqrt(dlugosc * dlugosc + szerokosc * szerokosc);

    cout << "Pole: " << pole << endl;
    cout << "Przekatna: " << przekatna << endl << endl;


    // ============================================
    // Zadanie 3 – Konwersja sekund
    // ============================================
    int sekundy;
    cout << "Podaj liczbe sekund: ";
    cin >> sekundy;

    int godziny = sekundy / 3600;
    int minuty  = (sekundy % 3600) / 60;
    int sekundy_pozostale = sekundy % 60;

    cout << godziny << " h, " << minuty << " min, " 
         << sekundy_pozostale << " s" << endl << endl;


    // ============================================
    // Zadanie 4 – Miesięczne zużycie energii
    // ============================================
    double moc, godziny_dziennie, cena_kWh;
    cout << "Podaj moc urzadzenia (W): ";
    cin >> moc;
    cout << "Ile godzin dziennie pracuje urzadzenie? ";
    cin >> godziny_dziennie;
    cout << "Podaj cene 1 kWh: ";
    cin >> cena_kWh;

    double energia_mies = (moc / 1000.0) * godziny_dziennie * 30; // kWh / miesiac
    double koszt = energia_mies * cena_kWh;

    cout << "Zuzycie miesieczne: " << energia_mies << " kWh" << endl;
    cout << "Koszt miesieczny: " << koszt << " zl" << endl << endl;


    // ============================================
    // Zadanie 5 – Podatek dochodowy
    // ============================================
    double dochod;
    cout << "Podaj dochod: ";
    cin >> dochod;

    double podatek;

    if (dochod <= 30000) {
        podatek = dochod * 0.12;
    } else {
        podatek = 30000 * 0.12 + (dochod - 30000) * 0.32;
    }

    cout << "Nalezny podatek: " << podatek << " zl" << endl << endl;


    // ============================================
    // Zadanie 6 – Ilość farby
    // ============================================
    double dlug, wys, pokrycie;
    cout << "Podaj dlugosc pokoju (m): ";
    cin >> dlug;
    cout << "Podaj wysokosc pokoju (m): ";
    cin >> wys;
    cout << "Ile m^2 mozna pomalowac 1 litrem farby? ";
    cin >> pokrycie;

    double powierzchnia = dlug * wys * 4;  // zakładamy 4 ściany
    double litry = powierzchnia / pokrycie;

    cout << "Powierzchnia do pomalowania: " << powierzchnia << " m^2" << endl;
    cout << "Potrzebna ilosc farby: " << litry << " litry" << endl;

    return 0;
}
