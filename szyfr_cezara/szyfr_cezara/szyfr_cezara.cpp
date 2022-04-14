#include <iostream>
using namespace std;

void szyfr(int klucz, char tab[])
{
    int dl = strlen(tab);

    if (!(klucz >= -26 && klucz <= 26)) {
        return;
    }

    if (klucz >= 0) {
        for (int i = 0; i < dl; i++) {
            if (tab[i] + klucz <= 'z') {
                tab[i] += klucz;
            }
            else {
                tab[i] = tab[i] + klucz - 26;
            }
        }
    }
    else {
        for (int i = 0; i < dl; i++) {
            if (tab[i] + klucz >= 'a') {
                tab[i] += klucz;
            }
            else {
                tab[i] = tab[i] + klucz + 26;
            }
        }
    }
}


int main()
{
    char tab[1000];
    int wybor;
    int klucz;

    cout << "Chcesz zaszyfrowac (0) czy deszyfrowac (1)?: "; cin >> wybor;

    switch (wybor) {
    case 0:
        cout << "Napisz losowe slowo do zaszyfrowania: ";
        cin >> tab;

        cout << "Podaj klucz z przedzialu -26-26: ";
        cin >> klucz;

        szyfr(klucz, tab);

        cout << "Zaszyfrowany tekst: " << tab;

        break;

    case 1:
        cout << "Napisz losowe zdanie do deszyfrowania: ";
        cin >> tab;

        cout << "Podaj klucz z przedzialu -26-26: ";
        cin >> klucz;

        szyfr(-klucz, tab);
        cout << "Odszyfrowany tekst tekst: " << tab;

        break;
    }
    return 0;
}