#include <iostream>
using namespace std;

int main()
{
	int n;

	int lp = 0;
	int p = 2;
	int d = 1;

	cout << "Ile liczb pierwszych chcesz wyswietlic";  cin >> n;

	while (lp < n) {
		for (d = 1; d < p - 1; d++) {
			if (p % d == 0) {
				cout << p << ", ";
			}
		}
		lp++;
		p++;
	}
}