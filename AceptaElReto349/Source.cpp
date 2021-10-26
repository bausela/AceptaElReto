#include <iostream>

using namespace std;

long long int resuelveCaso();
long long int operar(long long int operador1, long long int operador2, char operador);

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {

		cout << resuelveCaso() << endl;


	}



	return 0;
}

long long int resuelveCaso() {

	char aux;

	cin >> aux;
	if (aux - '0' == 0 || aux - '0' == 1 || aux - '0' == 2 || aux - '0' == 3 || aux - '0' == 4 || aux - '0' == 5 || aux - '0' == 6 || aux - '0' == 7 || aux - '0' == 8 || aux - '0' == 9) {
		return aux - '0';

	}
	else {
		int operador1, operador2;

		operador1 = resuelveCaso();
		operador2 = resuelveCaso();

		return operar(operador1, operador2, aux);

	}
}


long long int operar(long long int operador1, long long int operador2, char operador) {

	if (operador == '+') {

		//cout << "SUMA" << endl;

		return operador1 + operador2;

	}
	else if (operador == '-') {

		//cout << "RESTA" << endl;

		return operador1 - operador2;

	}
	else if (operador == '*') {

		//cout << "MULT" << endl;

		return operador1 * operador2;

	}
	else if (operador == '/') {

		//cout << "DIV" << endl;

		return operador1 / operador2;

	}



}