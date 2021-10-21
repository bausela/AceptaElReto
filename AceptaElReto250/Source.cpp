#include <iostream>

using namespace std;

int v[1000000];

int resolver(int n);
int resolverCaso(int n, int v[], int suma);


int main() {
	int n; 
	cin >> n;
	while (n != 0) {
		cout << resolver(n) << endl;
		cin >> n;
	}
	return 0;
}

int resolver(int n) {
	int suma = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		suma = suma + v[i];
	}
	return resolverCaso(n, v, suma);
}



int resolverCaso(int n, int v[], int suma) {
	if (suma == 0) {
		return 0;
	}
	int sumaDer = 0;
	int sumaIzq = suma;
	int giro = n - 1;
	int eficiente = sumaIzq;
	int  i = n-1;
	while (i >= 0) {
		if (abs(sumaIzq - sumaDer) <= abs(eficiente)) {
			eficiente = sumaIzq - sumaDer;
			giro = i + 1;
		}
		sumaIzq = sumaIzq - v[i];
		sumaDer = sumaDer + v[i];
		i--;
	}
	if (abs(sumaIzq - sumaDer) <= abs(eficiente)) {
		eficiente = sumaIzq - sumaDer;
		giro = i + 1;
	}
	return giro;
}

