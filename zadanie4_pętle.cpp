#include <iostream>
using namespace std;

int main() {

    // ===== Zadanie 1 – Silnia =====
    int n;
    cout << "Zadanie 1: Podaj n do obliczenia silni: ";
    cin >> n;

    long long silnia = 1;
    for (int i = 1; i <= n; i++)
        silnia *= i;

    cout << "Silnia " << n << "! = " << silnia << endl << endl;


    // ===== Zadanie 2 – Suma cyfr =====
    int liczba;
    cout << "Zadanie 2: Podaj liczbe do policzenia sumy cyfr: ";
    cin >> liczba;

    int suma = 0;
    int temp = liczba;
    while (temp > 0) {
        suma += temp % 10;
        temp /= 10;
    }

    cout << "Suma cyfr liczby " << liczba << " = " << suma << endl << endl;


    // ===== Zadanie 3 – Liczba pierwsza =====
    int p;
    cout << "Zadanie 3: Podaj liczbe do sprawdzenia czy jest pierwsza: ";
    cin >> p;

    bool pierwsza = true;
    if (p < 2) pierwsza = false;
    else {
        for (int i = 2; i * i <= p; i++) {
            if (p % i == 0) {
                pierwsza = false;
                break;
            }
        }
    }

    if (pierwsza) cout << p << " jest liczba pierwsza" << endl;
    else cout << p << " NIE jest liczba pierwsza" << endl;

    cout << endl;


    // ===== Zadanie 4 – Tabliczka mnożenia =====
    int t;
    cout << "Zadanie 4: Podaj liczbe do tabliczki mnozenia: ";
    cin >> t;

    cout << "Tabliczka mnozenia dla " << t << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << t << " * " << i << " = " << t * i << endl;
    }

    return 0;
}
