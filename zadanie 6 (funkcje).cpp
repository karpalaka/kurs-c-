#include <iostream>
using namespace std;

// Zadanie 1
void powitanie() {
    cout << "Witaj swiecie C++" << endl;
}

// Zadanie 2
void wpiszeSume(int a, int b) {
    cout << "Suma " << a << " + " << b << " = " << (a + b) << endl;
}

// Zadanie 3
int kwadrat(int x) {
    return x * x;
}

// Zadanie 4
int silnia(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * silnia(n - 1);
}

int main() {

    // ---- Zadanie 1 ----
    powitanie();

    // ---- Zadanie 2 ----
    wpiszeSume(2, 3);
    wpiszeSume(10, 20);
    wpiszeSume(7, 8);

    // ---- Zadanie 3 ----
    int liczba;
    cout << "Podaj liczbe do obliczenia kwadratu: ";
    cin >> liczba;
    cout << "Kwadrat liczby " << liczba << " = " << kwadrat(liczba) << endl;

    // ---- Zadanie 4 ----
    int n;
    cout << "Podaj liczbe do obliczenia silni: ";
    cin >> n;
    cout << "Silnia z " << n << " = " << silnia(n) << endl;

    return 0;
}
