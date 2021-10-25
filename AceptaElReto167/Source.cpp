#include <iostream>

using namespace std; 


long long int resuelveCaso(long long int n);

int main() {

	int n;

	while (cin >> n) {


		cout << resuelveCaso(n) << endl;

	}


	return 0;
}

long long int resuelveCaso(long long int n) {

	if (n == 1) {

		return 4;

	}


	return 4 * n + 4 * resuelveCaso(n / 2);
}