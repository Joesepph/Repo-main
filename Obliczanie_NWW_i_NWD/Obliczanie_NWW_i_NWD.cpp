#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;

	cout << "Podaj pierwszą liczbę: "; cin >> a;
	cout << "Podaj drugą liczbę: "; cin >> b; cout << "\n";

	int iloczyn = a * b;

	while (a != b) {
		if (a < b) {
			b = b - a;
		}
		else {
			a = a - b;
		}
	}
	int nww = iloczyn / a;

	cout << "Najwiekszy wspolny dzielnik: " << a << "\n";
	cout << "Najmniejsza wspolna wielokrotnosc: " << nww << "\n";
}