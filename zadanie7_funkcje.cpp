#include <iostream>
using namespace std;

// Zadanie 1
int roznica(int a, int b) {
    return a - b;
}

// Zadanie 2
int iloczyn(int a, int b) {
    return a * b;
}

// Zadanie 3
double srednia(double a, double b) {
    return (a + b) / 2.0;
}

// Zadanie 4
bool czy_parzysta(int x) {
    return (x % 2 == 0);
}

// Zadanie 5
int wartosc_bezwzgledna(int x) {
    if (x < 0) return -x;
    return x;
}

// Zadanie 6
int pole_prostokata(int a, int b) {
    return a * b;
}

// Zadanie 7
double pole_kola(double r) {
    const double PI = 3.14159;
    return PI * r * r;
}

// Zadanie 8
double obwod_kwadratu(double a) {
    return 4 * a;
}

// Zadanie 9
int minimum(int a, int b) {
    return (a < b) ? a : b;
}

// Zadanie 10
int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    // Przykładowe użycie – możesz usunąć lub zmodyfikować.

    cout << "Roznica 10 - 3 = " << roznica(10, 3) << endl;
    cout << "Iloczyn 4 * 5 = " << iloczyn(4, 5) << endl;
    cout << "Srednia 5 i 7 = " << srednia(5, 7) << endl;
    cout << "Czy 8 jest parzysta? " << (czy_parzysta(8) ? "tak" : "nie") << endl;
    cout << "Wartosc bezwzgledna -12 = " << wartosc_bezwzgledna(-12) << endl;
    cout << "Pole prostokata 4x6 = " << pole_prostokata(4, 6) << endl;
    cout << "Pole kola o r=3 = " << pole_kola(3) << endl;
    cout << "Obwod kwadratu a=5 = " << obwod_kwadratu(5) << endl;
    cout << "Minimum z (9, 4) = " << minimum(9, 4) << endl;
    cout << "Maximum z (9, 4) = " << maximum(9, 4) << endl;

    return 0;
}
