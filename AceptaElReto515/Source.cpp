#include <iostream>

using namespace std;

int resuelveCaso(int n, bool peque);

int main() {
	int n;

	cin >> n;

	while (n != 0) {

		cout << resuelveCaso(n, true) << endl;

		cin >> n;
	}


	return 0;
}

int resuelveCaso(int n, bool peque) {

	if (n <= 0) {


		return 0;
	}



	if (peque) {

		
		n--;
		peque = false;
	}
	else {

		if (n % 2 == 1) {
			
			n--;
		}
		else {
			
			n = n - 2;
		}
		peque = true;
	}


	return 1 + resuelveCaso(n, peque);
}