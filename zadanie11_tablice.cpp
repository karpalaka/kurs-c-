#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // ============================================
    // Zadanie 1 – wypisanie 8 liczb w odwrotnej kolejności
    // ============================================
    int tab1[8];
    cout << "Zadanie 1\nWpisz 8 liczb: ";
    for(int i = 0; i < 8; i++) {
        cin >> tab1[i];
    }

    cout << "Liczby w odwrotnej kolejnosci: ";
    for(int i = 7; i >= 0; i--) {
        cout << tab1[i] << " ";
    }
    cout << "\n\n";


    // ============================================
    // Zadanie 2 – parzyste i nieparzyste z 10 liczb
    // ============================================
    int tab2[10];
    cout << "Zadanie 2\nWpisz 10 liczb: ";
    for(int i = 0; i < 10; i++) {
        cin >> tab2[i];
    }

    cout << "Liczby parzyste: ";
    for(int i = 0; i < 10; i++) {
        if(tab2[i] % 2 == 0)
            cout << tab2[i] << " ";
    }
    cout << endl;

    cout << "Liczby nieparzyste: ";
    for(int i = 0; i < 10; i++) {
        if(tab2[i] % 2 != 0)
            cout << tab2[i] << " ";
    }
    cout << "\n\n";


    // ============================================
    // Zadanie 3 – średnia z dodatnich wartości
    // ============================================
    int tab3[10];
    cout << "Zadanie 3\nWpisz 10 liczb: ";
    for(int i = 0; i < 10; i++) {
        cin >> tab3[i];
    }

    double suma = 0;
    int licznik = 0;

    for(int i = 0; i < 10; i++) {
        if(tab3[i] > 0) {
            suma += tab3[i];
            licznik++;
        }
    }

    if(licznik == 0) {
        cout << "Brak dodatnich liczb w tablicy!" << endl << endl;
    } else {
        double srednia = suma / licznik;
        cout << fixed << setprecision(2);
        cout << "Srednia z dodatnich liczb: " << srednia << endl << endl;
    }


    // ============================================
    // Zadanie 4 – porównanie dwóch tablic 5-elementowych
    // ============================================
    int t1[5], t2[5];
    cout << "Zadanie 4\nWpisz 5 liczb do pierwszej tablicy: ";
    for(int i = 0; i < 5; i++) cin >> t1[i];

    cout << "Wpisz 5 liczb do drugiej tablicy: ";
    for(int i = 0; i < 5; i++) cin >> t2[i];

    bool identyczne = true;
    for(int i = 0; i < 5; i++) {
        if(t1[i] != t2[i]) {
            identyczne = false;
            break;
        }
    }

    if(identyczne)
        cout << "Tablice sa identyczne." << endl << endl;
    else
        cout << "Tablice NIE sa identyczne." << endl << endl;


    // ============================================
    // Zadanie 5 – wypisanie wartości większych od średniej
    // ============================================
    int tab5[10];
    cout << "Zadanie 5\nWpisz 10 liczb: ";
    for(int i = 0; i < 10; i++) {
        cin >> tab5[i];
    }

    double suma5 = 0;
    for(int i = 0; i < 10; i++) {
        suma5 += tab5[i];
    }

    double srednia5 = suma5 / 10.0;

    cout << "Srednia: " << srednia5 << endl;
    cout << "Liczby wieksze od sredniej: ";
    for(int i = 0; i < 10; i++) {
        if(tab5[i] > srednia5)
            cout << tab5[i] << " ";
    }
    cout << endl;


    return 0;
}
