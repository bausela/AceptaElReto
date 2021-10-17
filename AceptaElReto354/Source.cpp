#include <iostream>

using namespace std;

int v[200000];

int resuelve(int n);

int resuelveCaso(int n, int v[]);

int main() {

	int n;

	cin >> n;

	while (n != 0) {

		cout << resuelve(n) <<endl;


		cin >> n;
	}



	return 0;
}

int resuelve(int n) {

	for (int i = 0; i < n; i++) {

		cin >> v[i];

	}


	return resuelveCaso(n, v);

}

int resuelveCaso(int n, int v[]) {

	if (n == 1 ) {

		return 1;

	}
	
	int maxGlobal = v[0];
	int maxNinos = v[0];
	int ultimo = 1;

	int i = 1;
	while (i < n) {


		if (v[i] > maxGlobal) {

			maxGlobal = v[i];

		}

		if (v[i] <= maxNinos) {

			maxNinos = maxGlobal;
			ultimo = i + 1;

		}


		i++;
	}

	return ultimo;
}