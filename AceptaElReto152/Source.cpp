#include <iostream>
#include <algorithm>

using namespace std;

int v[25000];
int resuelveCaso(int n, int v[]);
int resuelve(int n);

int main() {

	int n;

	cin >> n;
	while (n != 0) {

		cout << resuelve(n) << endl;

		cin >> n;
	}

	return 0;
}


int resuelveCaso(int n, int v[]) {
	
	
	int cont = 1;
	int moda = v[0];
	int contmax = 1;
	int actual = v[0];
	int i = 1;
	
	while (i < n) {

		if (actual == v[i]) {

			cont++;

		}
		else {

			actual = v[i];
			cont = 1;
		}


		if (cont > contmax) {

			contmax = cont;

			moda = actual;
		}


		i++;
	 }

	return moda;
	
}
int resuelve(int n) {

	for (int i = 0; i < n; i++) {

		cin >> v[i];

	}

	sort(v, v + n);

	return resuelveCaso(n, v);
}