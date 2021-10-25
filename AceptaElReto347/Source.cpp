#include <iostream>

using namespace std; 

int resuelveCaso(int n, int m);

int main() {

	int n, m;

	cin >> n >> m;

	while (n != 0 || m != 0) {

		cout << resuelveCaso(n, m) << endl;

		cin >> n >> m;
	}


	return 0;
}

int resuelveCaso(int n, int m) {

	if (n < 10 || m < 10) {


		return 0;
	}

	int cuadrados;

	if (n < m) {

		cuadrados = m / n;

		return  cuadrados + resuelveCaso(n , (m - (cuadrados * n)));
	}
	else {
		cuadrados = n / m;

		return cuadrados + resuelveCaso(m, (n - (cuadrados * m)));
	}
	
}