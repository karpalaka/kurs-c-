#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // --- Zadanie 1: Odwracanie liczby ---
    int n, reversed = 0;
    cout << "Podaj liczbe do odwrocenia: ";
    cin >> n;

    int temp = n; // kopia do operacji
    while (temp != 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }

    cout << "Odwrocona liczba: " << reversed << endl << endl;


    // --- Zadanie 2: Zgadywanie liczby ---
    srand(time(NULL));
    int secret = rand() % 100 + 1;
    int guess;

    cout << "Zgadnij liczbe od 1 do 100!" << endl;

    do {
        cout << "Podaj liczbe: ";
        cin >> guess;

        if (guess < secret)
            cout << "Za malo!" << endl;
        else if (guess > secret)
            cout << "Za duzo!" << endl;
        else
            cout << "Brawo! Zgadles!" << endl;

    } while (guess != secret);

    return 0;
}
