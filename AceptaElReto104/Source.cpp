#include <iostream>

using namespace std;

int resuelveCaso(int pi,int di,int pd, int dd);

int main() {

	int pi, di, pd,dd;

	cin >> pi >> di >> pd >> dd;

	while (pi != 0 || di != 0 || pd != 0 || dd != 0) {

		if (resuelveCaso(pi,di,pd,dd) != -1){

			cout << "SI" << endl;

		}
		else {

			cout << "NO" << endl;

		}

		cin >> pi >> di >> pd >> dd;
	}



	return 0;
}

int resuelveCaso(int pi, int di, int pd, int dd) {

	int ret = -1;

	int pesoDer = pd;
	int pesoIzq = pi;
	int distanciaDer = dd;
	int distanciaIzq = di;

	if (pesoIzq == 0) {
		cin >> pi >> di >> pd >> dd;
		pesoIzq = resuelveCaso(pi, di, pd, dd);
	}

	if (pesoDer == 0) {
		cin >> pi >> di >> pd >> dd;
		pesoDer = resuelveCaso(pi, di, pd, dd);
	}

	if (pesoDer != -1 && pesoIzq != -1) {
		if (pesoIzq * distanciaIzq == pesoDer * distanciaDer) {
			ret = pesoIzq + pesoDer;
		}
	}

	return ret;
}