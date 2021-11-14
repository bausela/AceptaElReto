#include <iostream>

using namespace std;

const int k = 46337;

struct matriz{
	int m1;
	int m2;
	int m3;
	int m4;
};

matriz resuelve(int n);

int main() {

	int n;

	matriz m;
	m.m1 = 0;
	m.m2 = 1;
	m.m3 = 1;
	m.m4 = 1;

	cin >> n;

	while (n != 0) {


		cout << resuelve(n).m2 << endl;

		cin >> n;
	}



	return 0;
}

matriz resuelve(int n) {

	if (n == 1) {


		matriz aux;

		aux.m1 = 0;
		aux.m2 = 1;
		aux.m3 = 1;
		aux.m4 = 1;

		return aux;

	}

	matriz res;

	matriz aux = resuelve(n / 2);

	///////FORMULA////////

	res.m1 = ((aux.m1 * aux.m1) % k + (aux.m2 * aux.m3) % k) % k;
	res.m2 = ((aux.m1 * aux.m2) % k + (aux.m2 * aux.m4) % k) % k;
	res.m3 = ((aux.m3 * aux.m1) % k + (aux.m4 * aux.m3) % k) % k;
	res.m4 = ((aux.m3 * aux.m2) % k + (aux.m4 * aux.m4) % k) % k;

	if (n % 2 == 1) {

		aux = res;

		res.m1 = aux.m2;
		res.m2 = (aux.m1 + aux.m2) % k;
		res.m3 = aux.m4;
		res.m4 = (aux.m3 + aux.m4) % k;

	}




	return res;
}