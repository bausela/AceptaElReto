#include <iostream>

using namespace std;



bool resuelve(int ini, int fin, int num);
bool resuelveCaso(int ini, int fin, int num, int n, int v[]);


int main() {

	int ini, fin, num;

	cin >> ini >> fin >> num;

	while (ini != 0 || fin != 0 || num != 0) {

		if (resuelve(ini, fin, num)) {

			cout << "LO SABE" << endl;

		}
		else {


			cout << "NO LO SABE" << endl;

		}
		cin >> ini >> fin >> num;
	}




	return 0;
}

bool resuelve(int ini, int fin, int num) {

	int n;
	int v[250000];

	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> v[i];

	}

	return resuelveCaso(ini, fin, num, n, v);
}
bool resuelveCaso(int ini, int fin, int num, int n, int v[]) {

	int i = 0;

	while (i < n) {
		if (v[i] <= num && v[i] >= ini) {
			ini = v[i];
		}
		else if (v[i] > num && v[i] <= fin) {
			fin = v[i] - 1;
		}
		i++;
	}
	return (ini - fin == 0);
}