#include <iostream>

using namespace std;

int v[200000][2];

int resuelve(int n, int p);
int resuelveCaso(int n, int p, int v[200000][2]);

int main() {

	int n, p;

	cin >> n >> p;

	while (n != 0 || p != 0) {

		cout << resuelve(n,p) << endl;

		cin >> n >> p;

	}
	return 0;
}

int resuelve(int n, int p) {



	int aux;
	int j = -1;

	for (int i = 0; i < n; i++) {

		cin >> aux;

		if (aux == v[j][0]) {

			v[j][1] = v[j][1] + 1;
		}
		else {

			j++;
			v[j][0] = aux;
			v[j][1] = 1;
			

		}
	}


	//caso base, si no hay elementos entonces el numero maximo de nacidos es 0;
	if (n == 0 || p == 0) {


		return 0;
	}


	return resuelveCaso(j, p, v);
}
int resuelveCaso(int n, int p,int v[200000][2]) {


	
	//posicion del primer año del elemento actual
	int prim = 0;

	//contador el intervalo actual y contador del intervalo con mas nacimientos
	int cont = v[prim][1];
	int contmax = v[prim][1];




	int i = 1;

	while (i <= n) {


		//se comprueba si la diferencia de años se acomoda a la deseada, en caso de ser asi se suma el numero de nacimientos de ese años
		if (v[prim][0] + p - 1 >= v[i][0]) {


			cont = cont + v[i][1];

			

		}
		//en caso de que se supere el intervalo deseado se resta el numero de nacimientos de prim, se actualiza prim al siguiente y se resta 1 a i para que se repita ese calculo
		else {

			cont = cont - v[prim][1];

			prim++;

			i--;

		}

		//se comprueba si el contador despues del calculo supera alq ue era mas grande
		if (cont > contmax) {

			contmax = cont;

		}


		i++;
	}

	return contmax;
}