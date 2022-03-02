#include <iostream>
using namespace std;

int main()
{
	int n;
	int lp = 0;
	int p = 2;
	int d;

	bool t;

	cout << "Ile liczb pierwszych chcesz wyswietlic: ";  cin >> n;

	while (lp < n) {
		t = true;
		for (d = 2; d < p - 1; d++) {
			if (p % d == 0) {
				t = false;
				break;
			}
		}
		if(t){
			cout << p << ", ";
			lp++;
		}
		p++;
	}
	cout << endl;
	return 0;
}