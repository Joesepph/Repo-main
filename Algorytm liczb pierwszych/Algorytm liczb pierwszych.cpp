#include <iostream>
using namespace std;

int main()
{
	int n, d;
	int lp = 0;
	int p = 2;

	bool pierwsza;

	cout << "Ile liczb pierwszych chcesz wyswietlic: ";  cin >> n;

	while (lp < n) {
		pierwsza = true;
		for (d = 2; d < p - 1; d++) {
			if (p % d == 0) {
				pierwsza = false;
				break;
			}
		}
		if (pierwsza) {
			cout << p << ", ";
			lp++;
		}
		p++;
	}
	cout << endl;

	return 0;
}