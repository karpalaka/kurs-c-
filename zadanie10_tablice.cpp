#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // ============================================
    // Zadanie 1 – wczytanie 5 liczb i wypisanie w jednej linii
    // ============================================
    int tab1[5];

    cout << "Zadanie 1\nWpisz 5 liczb: ";
    for(int i = 0; i < 5; i++) {
        cin >> tab1[i];
    }

    cout << "Wpisane liczby: ";
    for(int i = 0; i < 5; i++) {
        cout << tab1[i] << " ";
    }
    cout << "\n\n";


    // ============================================
    // Zadanie 2 – suma 10 liczb
    // ============================================
    int tab2[10], suma = 0;

    cout << "Zadanie 2\nWpisz 10 liczb: ";
    for(int i = 0; i < 10; i++) {
        cin >> tab2[i];
        suma += tab2[i];
    }

    cout << "Suma liczb: " << suma << "\n\n";


    // ============================================
    // Zadanie 3 – średnia 8 liczb 
    // ============================================
    int tab3[8];
    double srednia = 0;

    cout << "Zadanie 3\nWpisz 8 liczb: ";
    for(int i = 0; i < 8; i++) {
        cin >> tab3[i];
        srednia += tab3[i];
    }

    srednia /= 8.0;

    cout << fixed << setprecision(2);
    cout << "Srednia wynosi: " << srednia << "\n\n";


    // ============================================
    // Zadanie 4 – min i max z 10 liczb
    // ============================================
    int tab4[10];

    cout << "Zadanie 4\nWpisz 10 liczb: ";
    for(int i = 0; i < 10; i++) {
        cin >> tab4[i];
    }

    int maks = tab4[0];
    int min = tab4[0];

    for(int i = 1; i < 10; i++) {
        if (tab4[i] > maks) maks = tab4[i];
        if (tab4[i] < min)  min = tab4[i];
    }

    cout << "Maksymalna wartosc: " << maks << endl;
    cout << "Minimalna wartosc: " << min << endl << endl;


    // ============================================
    // Zadanie 5 – zliczanie wystąpień wybranej liczby
    // ============================================
    int tab5[10], szukana, licznik = 0;

    cout << "Zadanie 5\nWpisz 10 liczb: ";
    for(int i = 0; i < 10; i++) {
        cin >> tab5[i];
    }

    cout << "Podaj liczbe do wyszukania: ";
    cin >> szukana;

    for(int i = 0; i < 10; i++) {
        if(tab5[i] == szukana)
            licznik++;
    }

    cout << "Liczba " << szukana << " wystepuje " << licznik << " razy." << endl;

    return 0;
}
