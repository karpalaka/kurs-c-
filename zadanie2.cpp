#include<iostream>
#include<string>

using namespace std;

int main()
{
    int pierwsza_liczba;
        cout << "\nPodaj pierwsza liczbe";
    cin >> pierwsza_liczba;
            if (pierwsza_liczba > 0) {
                cout << "\n Liczba jest dodatnia";
        }

            if (pierwsza_liczba % 2 == 0) {
                cout << "\nLiczba jest parzysta";
        }
            else {
                cout << "\nLiczba jest nieparzysta";
            }
            if (pierwsza_liczba >= 10 && pierwsza_liczba <= 50) {
                cout << "\nLiczba miesci sie w przedziale";
        }
            else {
                cout << "\nLiczba nie miesci sie w przedziale";
            }
            if (pierwsza_liczba < 0) {
                cout << "liczba ujemna\n";
            }
            else if (pierwsza_liczba == 0) {
                cout << "Liczba rowna 0\n";
            }
            else {
                cout << "Liczba dodatnia\n";
            }
            
            int a, b, c;
            cout << "Wprowadz trzy liczby calkowite: ";
            cin >> a >> b >> c;

            if (a > b) swap (a, b);
            if (b > c) swap (b, c);
            if (a > b) swap (a, b);
            cout << "Liczby w kolejnosci rosnacej: " << a << " " << b << " " << c << endl;



            return 0;

}
