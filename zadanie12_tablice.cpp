#include <iostream>
using namespace std;

int main() {

    // =====================
    // ZADANIE 1
    // =====================
    int tab1[10];
    int unikalne[10];
    int ileUnikalnych = 0;

    cout << "ZADANIE 1\nPodaj 10 liczb:\n";
    for (int i = 0; i < 10; i++) {
        cin >> tab1[i];
    }

    for (int i = 0; i < 10; i++) {
        bool powtarzaSie = false;
        for (int j = 0; j < ileUnikalnych; j++) {
            if (tab1[i] == unikalne[j]) {
                powtarzaSie = true;
                break;
            }
        }
        if (!powtarzaSie) {
            unikalne[ileUnikalnych] = tab1[i];
            ileUnikalnych++;
        }
    }

    cout << "Unikalne wartosci:\n";
    for (int i = 0; i < ileUnikalnych; i++) {
        cout << unikalne[i] << " ";
    }
    cout << "\n\n";


    // =====================
    // ZADANIE 2
    // =====================
    int tab2[7];
    bool palindrom = true;

    cout << "ZADANIE 2\nPodaj 7 liczb:\n";
    for (int i = 0; i < 7; i++) {
        cin >> tab2[i];
    }

    for (int i = 0; i < 7 / 2; i++) {
        if (tab2[i] != tab2[6 - i]) {
            palindrom = false;
            break;
        }
    }

    if (palindrom)
        cout << "Tablica jest taka sama od poczatku i konca\n\n";
    else
        cout << "Tablica NIE jest taka sama od poczatku i konca\n\n";


    // =====================
    // ZADANIE 3
    // =====================
    int tab3[7];
    palindrom = true;

    cout << "ZADANIE 3\nPodaj 7 liczb:\n";
    for (int i = 0; i < 7; i++) {
        cin >> tab3[i];
    }

    for (int i = 0; i < 7 / 2; i++) {
        if (tab3[i] != tab3[6 - i]) {
            palindrom = false;
            break;
        }
    }

    if (palindrom)
        cout << "Tablica jest taka sama od poczatku i konca\n";
    else
        cout << "Tablica NIE jest taka sama od poczatku i konca\n";

    return 0;
}
