#include <iostream>

using namespace std;

double v[200000];

long long int resuelve(int n);
long long int resuelveCaso(int n, double v[]);
long long int comb(long long int x);

int main() {
	int n;
	cin >> n;
	while (n != 0) {
		cout << resuelve(n) << endl;
		cin >> n;
	}
	return 0;
}

long long int resuelve(int n) {
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	return resuelveCaso(n, v);
}

long long int resuelveCaso(int n, double v[]) {
	int i = 0;
	long long int decimal = 0;
	long long int entero = 0;
	long long int unocero = 0;
	while (i < n) {
		if (v[i] == 0 || v[i] == 1) {
			unocero++;
		}
		else {
			if (v[i] <= 1) {
				decimal++;
			}
			else {
				entero++;
			}
		}
		i++;
	}
	long long int sol = comb(decimal) + comb(entero) + comb(unocero) + ((decimal + entero) * unocero);
	return sol;
}
long long int comb(long long int x) {

	return x * (x - 1) / 2;
}