#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char napis[51];        // maks. 50 znaków + '\0'
    char odwrocony[51];

    // ===== CZĘŚĆ 1 – WCZYTANIE DANYCH =====
    cout << "Podaj wyraz: ";
    cin >> napis;   // bez spacji

    // ===== CZĘŚĆ 2 – INFORMACJE O NAPISIE =====
    int dlugosc = strlen(napis);
    cout << "\nDlugosc wyrazu: " << dlugosc << endl;

    // odwracanie napisu
    for (int i = 0; i < dlugosc; i++) {
        odwrocony[i] = napis[dlugosc - 1 - i];
    }
    odwrocony[dlugosc] = '\0';

    cout << "Wyraz od tylu: " << odwrocony << endl;

    // ===== CZĘŚĆ 3 – PALINDROM =====
    if (strcmp(napis, odwrocony) == 0) {
        cout << "Wyraz jest palindromem." << endl;
    } else {
        cout << "Wyraz nie jest palindromem." << endl;
    }

    // ===== CZĘŚĆ 4 – ANALIZA ZNAKÓW =====
    int litery = 0, cyfry = 0, inne = 0;

    for (int i = 0; i < dlugosc; i++) {
        if (isalpha(napis[i]))
            litery++;
        else if (isdigit(napis[i]))
            cyfry++;
        else
            inne++;
    }

    cout << "Liczba liter: " << litery << endl;
    cout << "Liczba cyfr: " << cyfry << endl;
    cout << "Liczba innych znakow: " << inne << endl;

    // ===== CZĘŚĆ 5 – MODYFIKACJA NAPISU =====
    for (int i = 0; i < dlugosc; i++) {
        napis[i] = toupper(napis[i]);
    }

    cout << "Napis po zamianie na duze litery: " << napis << endl;

    return 0;
}
