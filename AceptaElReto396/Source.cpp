#include <iostream>

using namespace std;

int v[100000];
int resuelve(int k, int n);
int resuelveCaso(int k, int n, int v[]);
int busquedaBinaria(int ini, int fin, int v[]);

int main() {

	int k, n;

	while (cin >> k >> n) {


		cout << resuelve(k, n) << endl;

	}



	return 0;
}

int resuelve(int k, int n) {

	for (int i = 0; i < n; i++) {

		cin >> v[i];

	}
	return resuelveCaso(k - n, n, v);
}
int resuelveCaso(int k, int n, int v[]) {

	int res;

	if (n == 0) {

		return 0;

	}
	//buscamos el elemento mas grande, que sera el maximo de musicos por atril que podems poner
	int max = v[busquedaBinaria(0, n - 1, v)];

	int p;
	int act;
	//probamos cada maximo de musicos posibles
	for (int i = 1; i <= max; i++) {

		res = i;
		p = 0;
		//recorremos el array
		for (int j = 0; j < n; j++) {

			act = j;
			//calculo de cuantas partituras necesitamos si el v[j] es mayor al maximo esperado
			if (v[j] > i) {
				
				if (v[j] % i != 0) {

					p = p + v[j] / i;
				}
				else {

					p = p + v[j] / i -1;
				}
			}

			//si hemos usado partituras de mas para
			if (p > k ) {

				j = n;
			}
		}
		//si ha llegado al final supone que lo hemos encontrado
		
		//comprueba que no hemos usado partituras de mas y si es asi sale del bucle
		if (p <= k) {

			i = max + 1;

		}

	}


	return res;
}

int busquedaBinaria(int ini, int fin, int v[]) {
	int res;
	if (fin == ini) {	
		return fin;
	}
	else {
		int mid;
		mid = (fin - ini + 1) / 2;
		int maxD = busquedaBinaria(ini + mid, fin, v);
		int maxI = busquedaBinaria(ini, fin - mid, v);
		if (v[maxD] > v[maxI]) {
			res = maxD;
		}
		else {
			res = maxI;
		}
	}
	return res;
}

