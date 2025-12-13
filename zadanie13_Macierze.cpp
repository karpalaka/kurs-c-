#include <iostream>
using namespace std;

int main() {

    // =====================
    // ZADANIE 1
    // =====================
    int mac1[3][3];

    cout << "ZADANIE 1\nPodaj macierz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mac1[i][j];
        }
    }

    cout << "Macierz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mac1[i][j] << "\t";
        }
        cout << endl;
    }

    // =====================
    // ZADANIE 2
    // =====================
    int mac2[4][4];
    int suma = 0;

    cout << "\nZADANIE 2\nPodaj macierz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mac2[i][j];
            suma += mac2[i][j];
        }
    }

    cout << "Suma wszystkich elementow: " << suma << endl;

    // =====================
    // ZADANIE 3
    // =====================
    int mac3[3][3];
    int min, max;

    cout << "\nZADANIE 3\nPodaj macierz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mac3[i][j];
        }
    }

    min = max = mac3[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mac3[i][j] < min) min = mac3[i][j];
            if (mac3[i][j] > max) max = mac3[i][j];
        }
    }

    cout << "Najmniejsza wartosc: " << min << endl;
    cout << "Najwieksza wartosc: " << max << endl;

    // =====================
    // ZADANIE 4
    // =====================
    int mac4[3][4];

    cout << "\nZADANIE 4\nPodaj macierz 3x4:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mac4[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        int sumaWiersza = 0;
        for (int j = 0; j < 4; j++) {
            sumaWiersza += mac4[i][j];
        }
        cout << "Suma elementow w wierszu " << i + 1 << ": " << sumaWiersza << endl;
    }

    // =====================
    // ZADANIE 5
    // =====================
    int mac5[3][3];

    cout << "\nZADANIE 5\nPodaj macierz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mac5[i][j];
        }
    }

    for (int j = 0; j < 3; j++) {
        int sumaKolumny = 0;
        for (int i = 0; i < 3; i++) {
            sumaKolumny += mac5[i][j];
        }
        cout << "Suma elementow w kolumnie " << j + 1 << ": " << sumaKolumny << endl;
    }

    return 0;
}
