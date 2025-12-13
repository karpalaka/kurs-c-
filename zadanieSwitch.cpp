#include <iostream>
using namespace std;

int main() {
    int wybor;

    cout << "WYBIERZ ZADANIE (1-6): ";
    cin >> wybor;

    switch (wybor) {

    // ZADANIE 1
    case 1: {
        int nr;
        cout << "Podaj numer miesiaca (1-12): ";
        cin >> nr;

        switch (nr) {
        case 1: cout << "Styczen"; break;
        case 2: cout << "Luty"; break;
        case 3: cout << "Marzec"; break;
        case 4: cout << "Kwiecien"; break;
        case 5: cout << "Maj"; break;
        case 6: cout << "Czerwiec"; break;
        case 7: cout << "Lipiec"; break;
        case 8: cout << "Sierpien"; break;
        case 9: cout << "Wrzesien"; break;
        case 10: cout << "Pazdziernik"; break;
        case 11: cout << "Listopad"; break;
        case 12: cout << "Grudzien"; break;
        default: cout << "Niepoprawny numer miesiaca";
        }
        break;
    }

    // ZADANIE 2
    case 2: {
        double a, b;
        char op;

        cout << "Podaj pierwsza liczbe: ";
        cin >> a;
        cout << "Podaj druga liczbe: ";
        cin >> b;
        cout << "Wybierz operacje (+ - * /): ";
        cin >> op;

        switch (op) {
        case '+': cout << "Wynik: " << a + b; break;
        case '-': cout << "Wynik: " << a - b; break;
        case '*': cout << "Wynik: " << a * b; break;
        case '/':
            if (b != 0)
                cout << "Wynik: " << a / b;
            else
                cout << "Blad: dzielenie przez zero";
            break;
        default:
            cout << "Nieznana operacja";
        }
        break;
    }

    // ZADANIE 3
    case 3: {
        int ocena;
        cout << "Podaj ocene (1-6): ";
        cin >> ocena;

        switch (ocena) {
        case 1:
        case 2:
            cout << "Brak promocji do nastepnej klasy";
            break;
        case 3:
        case 4:
        case 5:
            cout << "Promocja do nastepnej klasy";
            break;
        case 6:
            cout << "Promocja z ocena celujaca";
            break;
        default:
            cout << "Niepoprawna ocena";
        }
        break;
    }

    // ZADANIE 4
    case 4: {
        int pkt;
        cout << "Podaj liczbe punktow (0-18): ";
        cin >> pkt;

        if (pkt < 0 || pkt > 18) {
            cout << "Niepoprawna liczba punktow";
        } else {
            switch (pkt) {
            case 0: case 1: case 2: case 3: case 4:
            case 5: case 6: case 7: case 8: case 9: case 10:
                cout << "Ocena: 2"; break;
            case 11: case 12: case 13:
                cout << "Ocena: 3"; break;
            case 14: case 15: case 16:
                cout << "Ocena: 4"; break;
            case 17: case 18:
                cout << "Ocena: 5"; break;
            }
        }
        break;
    }

    // ZADANIE 5
    case 5: {
        double zl;
        int waluta;

        cout << "Podaj kwote w zl: ";
        cin >> zl;
        cout << "Wybierz walute: 1-Funty 2-Dolary 3-Euro: ";
        cin >> waluta;

        switch (waluta) {
        case 1: cout << "Kwota w funtach: " << zl / 5.0; break;
        case 2: cout << "Kwota w dolarach: " << zl / 4.0; break;
        case 3: cout << "Kwota w euro: " << zl / 4.5; break;
        default: cout << "Niepoprawny wybor waluty";
        }
        break;
    }

    // ZADANIE 6
    case 6: {
        int godzina;
        cout << "Podaj godzine (0-23): ";
        cin >> godzina;

        if (godzina <= 8) cout << "8-11 Wyklady\n";
        if (godzina <= 12) cout << "12-13 Dyskusje\n";
        if (godzina <= 14) cout << "14 Obiad\n";
        if (godzina <= 15) cout << "15-18 Prelekcje\n";
        if (godzina <= 19) cout << "19 Kolacja\n";
        break;
    }

    default:
        cout << "Niepoprawny wybor zadania";
    }

    return 0;
}
