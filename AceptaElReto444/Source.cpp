#include <iostream>

using namespace std;

int v[100000];

int resuelve(int n, int d);
int resuelveCaso(int n, int d, int v[]);

int main() {

	int n, d;

	cin >> n >> d;

	while (n != 0 || d != 0) {

		cout << resuelve(n,d) <<endl;

		cin >> n >> d;
	}

	return 0;
}

int resuelve(int n, int d) {

	for (int i = 0; i < n; i++) {

		cin >> v[i];

	}

	return resuelveCaso(n, d, v);
}
int resuelveCaso(int n, int d, int v[]) {




	int i = 0;

	int contMax = 0;
	int contActual = 0;
	int contCero = 0;
	bool primerUno = false;

	while (i < n) {

		if (v[i] == 1) {

			primerUno = true;// detecto el primer uno para que empiezen a contar los 0
			//cout << "entra al ver un uno con: " << contActual << "    " << contCero << endl;
			contActual =contActual + 1 + contCero;
			contCero = 0;
			
			
		}
		else if (v[i] == 0) {

			if (primerUno) {
				contCero++;
				
			}
			if (contCero > d) {

				contActual = 0;
				contCero = 0;
				primerUno = false;
			}

		}

		if (contActual > contMax) {

			contMax = contActual;


		}
		//cout << "contMax: " << contMax << endl;

		i++;
	}



	return contMax;
}