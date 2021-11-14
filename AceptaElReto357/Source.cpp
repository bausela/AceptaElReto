#include <iostream>

using namespace std;


int resuelve(int n);

int main() {

	int n; 

	while (cin >> n) {


		cout << resuelve(n) <<endl;


	}



	return 0;

}

int resuelve(int n) {

	if (n == 1) {

		return 1;
	}

	int cuadrado;


	cuadrado = n / 2;

	if (n % 2 == 1) {

		cuadrado++;
	}



	return 1 + resuelve(n - cuadrado);
}