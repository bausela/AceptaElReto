#include <iostream>

using namespace std;

int v[100000];

int resuelve(int n);
int resuelveCaso(int n, int v[]);

int main() {

	int n;

	cin >> n;

	while (n != 0) {

		cout << resuelve(n) << endl;

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

	if (n == 1) {

		return 1;

	}

	int max = v[n-1];
	int cont = 1;

	int i = n - 2;

	while (i >= 0) {

		if (v[i] > max) {

			cont++;

			max = v[i];


		}


		i--;
	}

	return cont;
}