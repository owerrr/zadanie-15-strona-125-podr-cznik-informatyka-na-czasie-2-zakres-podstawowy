#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <time.h>

using namespace std;
string odp1;
void Zad15();
int main()
{
    Zad15();
}

void Zad15() {
    int x = 0, y = 0, z = 0;
    int n = 1;
    int maksLiczb = 50, wpisaneLiczby = 1;

    vector<int> tablica;

    cout << "Podaj liczby (maks " << maksLiczb << ")\n";
    cout << "Aby zakonczyc dalesze wpisywanie wpisz 0\n";
    while (n != 0 && maksLiczb > wpisaneLiczby) {
        cout << "Podaj liczbe nr " << wpisaneLiczby << ": "; cin >> n;
        if (n >= 0 || n < 0) {
            tablica.push_back(n);
            wpisaneLiczby++;
        }
    }
    int i = 1;
    cout << "\n\n";
    tablica.pop_back();
    int test_Wpisane = 1;
    int test_wpisane2 = 1;
    vector<string> trojkatIncorrect;

    for (auto x : tablica) {
        for (auto y : tablica) {
            for (int z = 0; z < tablica.size(); z++) {
                if (x < y + z && y < x + z && z < x + y) {
                    
                }
                else {
                    trojkatIncorrect.push_back("a = "+to_string(x)+" b = "+to_string(y)+" c = "+to_string(z));
                }
            }
        }
    }
    cout << "Nieprawidlowe trojkaty: \n";
    for (auto v : trojkatIncorrect) {
        cout << "nr " << test_wpisane2 << " " << v << endl;
        test_wpisane2++;
    }

    cout << "Czy chcesz ponownie sprawdzic z ktorych podanych liczb, nie da rady zrobic trojkata?\n";
    cout << "Y - Tak | N - nie\n\n";
    cin >> odp1;
    if (odp1 == "Y" || odp1 == "y") {
        system("cls");
        Zad15();
    }
}

