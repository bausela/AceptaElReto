#include <iostream>

using namespace std;

bool resuelveCaso(long long int n,long long  int div);

int main() {

	long long int n; 
	while (cin >> n) {

		long long int dec = 10;
		long long int cont = 1;
		while (dec <= n) {

			cont++;
			dec = dec * 10;

		}

		if (resuelveCaso(n , cont)) {

			cout << "POLIDIVISIBLE" << endl;

		}
		else {
			cout << "NO POLIDIVISIBLE" << endl;

		}
		

	}



	return 0;
}

bool resuelveCaso(long long int n,long long  int div) {

	if (n < 10) {


		return true;
	}
	if (n % div != 0) {

		//cout << "ENTRA: " << n << endl;

		return false;
	}


	return resuelveCaso(n / 10, div - 1);
}