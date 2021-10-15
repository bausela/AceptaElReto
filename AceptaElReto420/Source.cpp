#include <iostream>

using namespace std;

int resuelveCaso(int p, string q);

int main() {

	int n, p;
	string q;

	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> p >> q;

		cout << resuelveCaso(p, q) << endl;


	}



	return 0;
}

int resuelveCaso(int p, string q) {

	if (q.length() == 1) {
		if (q[0] - '0' == p) {

			return 1;

		}
	}
	int cont = 0;
	int suma = q[0] - '0';
	int primero = 0;
	int i = 1;
	if (suma == p) {
		//cout << "suma primero" << endl;
		cont++;
		suma = 0;
		primero++;
	}

	while (i < q.length()) {

		int comparacion = (q[i] - '0');
		if (comparacion == p) {
			//cout << "suma por numero igual y pone a cero" << endl;
			
			cont++;
			suma = 0;
			primero = i + 1;

		}
		

		else if (suma + comparacion == p) {

			//cout << "Entra por que es igual    " ;

			cont++;

			suma = suma + comparacion;

			int resta = q[primero] - '0';

			suma = suma - resta;

			primero++;

			//cout << "Sale con una suma: " << suma << endl;
			
		}

		else if (suma + comparacion < p) {

		//	cout << "entra porque la suma se queda corta: " << suma + comparacion  <<endl;

			suma = suma + comparacion;
			

		}
		else if (suma + comparacion > p) {

			//cout << "entra porque la suma se queda largo: " << suma + comparacion;

			int resta = q[primero] - '0';

			suma = suma - resta;
			primero++;
			i--;
			
			//cout << "    sale con la siguiente suma: " << suma << endl;
		}


		i++;
	}

	return cont;
}