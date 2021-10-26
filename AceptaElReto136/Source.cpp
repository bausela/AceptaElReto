#include <iostream>

using namespace std;
 
int resuelveCaso(int n, int m);


int main() {

	int n, m;

	cin >> n >> m;

	while (n != 0) {


		cout << resuelveCaso(n,m) << endl;


		cin >> n >> m;
	}




	return 0;
}

int resuelveCaso(int n, int m) {

	int trozos = 0;

	if (n * 2  >= m) {


		return trozos;
	}
	else {

		trozos++;

		int peque = m / 3;
		int grande = m / 3 * 2 + (m - m / 3 * 3);

		if (n * 2 <= peque ) {

			trozos = trozos + resuelveCaso(n, peque);

		}
		if (n * 2 <=  grande) {

			trozos = trozos + resuelveCaso(n, grande);
		}


	}
	




	return trozos;
	
}