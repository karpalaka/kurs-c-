#include <iostream>
using namespace std;

int main() {

    // =======================
    // Zadanie 1
    // =======================
    int wiek;
    cout << "Podaj swoj wiek: ";
    cin >> wiek;

    if (wiek >= 18)
        cout << "Masz prawo do glosowania" << endl;
    else
        cout << "Nie masz prawa do glosowania" << endl;


    // =======================
    // Zadanie 2
    // =======================
    int procent;
    cout << "\nPodaj wynik procentowy (0–100): ";
    cin >> procent;

    if (procent >= 90)
        cout << "Ocena: celujacy" << endl;
    else if (procent >= 75)
        cout << "Ocena: bardzo dobry" << endl;
    else if (procent >= 50)
        cout << "Ocena: dobry" << endl;
    else
        cout << "Ocena: niedostateczny" << endl;


    // =======================
    // Zadanie 3
    // =======================
    int liczba;
    cout << "\nPodaj liczbe calkowita: ";
    cin >> liczba;

    if (liczba > 0)
        cout << "Liczba dodatnia" << endl;
    else if (liczba < 0)
        cout << "Liczba ujemna" << endl;
    else
        cout << "Liczba rowna zero" << endl;


    // =======================
    // Zadanie 4
    // =======================
    int x;
    cout << "\nPodaj liczbe: ";
    cin >> x;

    if (x >= 100 && x <= 200)
        cout << "Liczba w przedziale 100–200" << endl;
    else
        cout << "Liczba poza przedzialem" << endl;


    // =======================
    // Zadanie 5
    // =======================
    int a, b, c;
    cout << "\nPodaj trzy liczby: ";
    cin >> a >> b >> c;

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    cout << "Najwieksza liczba to: " << max << endl;

    return 0;
}
