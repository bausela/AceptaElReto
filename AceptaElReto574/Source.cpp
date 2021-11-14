#include <iostream>

using namespace std;

struct letra {
	char caracter;
	long long int contador;
};

letra resuelve(long long int n, letra x);

int main() {

	long long int n, pos;
	letra x;

	while (cin >> n >> pos) {

		x.contador = pos;
		cout << resuelve(n, x).caracter << endl;

	}

	return 0;
}


letra resuelve(long long int n, letra x) {
	//caso base, el contador se queda como esta
	if (n == 0) {
		return x;
	}

	//calculo del numero de caracteres que tiene el bloque anterior
	long long int numant;
	if (n == 1) {
		numant = 0;
	}
	else if (n == 2) {
		numant = 3;
	}
	else {
		//el bloque central, del bloque anterior
		numant = n - 1 + 2;

		long long int aux = numant;
		long long nivel = 2;
		//sumamos el numero de caracteres en los bloqeus laterales
		for (long long int i = aux -1; i >= 3; i--) {
			numant = numant + nivel * i;
			nivel = nivel * 2;
		}
	}

	//comprueba si es necesario entrar en la primera bloque o se puede saltar, si se puede saltar, se borran las posibilidades
	if (x.contador <= numant) {
		x = resuelve(n - 1, x);
		//si el contador es 0 significa que ya se tiene el valor deseeado
		if (x.contador == 0) {
			return x;
		}
	}
	else {
		x.contador = x.contador - numant;

	}

	//comprueba si es necesario entrar en el bloque central o se puede saltar, si se puede saltar, se borran las posibilidades
	if (x.contador <= n + 2) {
		x.caracter = 'B';
		x.contador--;
		if (x.contador == 0) {
			return x;
		}
		for (long long int i = 0; i < n; i++) {
			x.caracter = 'U';
			x.contador--;
			if (x.contador == 0) {
				return x;
			}
		}
		x.caracter = 'H';
		x.contador--;
		if (x.contador == 0) {
			return x;
		}
	}
	else {	
		x.contador = x.contador - (n + 2);
	}
	//entra en el bloque de la derecha puesto que los anteriores se han descartado
	x = resuelve(n - 1, x);
	if (x.contador == 0) {
		return x;
	}
}