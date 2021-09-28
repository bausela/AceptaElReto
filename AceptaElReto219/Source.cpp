#include <iostream>

using namespace std; 
int main() {

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int p;

		cin >> p;

		int cont = 0;
		for (int j = 0; j < p; j++) {

			int q;

			cin >> q;

			if (q % 2 == 0) {

				cont++;

			}

		}
		cout << cont << endl;

	}

	return 0;
}