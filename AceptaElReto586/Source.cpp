#include <iostream>

using namespace std;

int v[60];

int resuelve();
int resuelveCaso(int p, int v[]);

int main() {

	int n ;

	cin >> n;



	for (int i = 0; i < n; i++) {

		cout << resuelve() << endl;


	}




	return 0;
}

int resuelve() {

	int p;

	cin >> p;

	for (int i = 0; i < p; i++) {


		cin >> v[i];

	}

	return resuelveCaso(p, v);
}

int resuelveCaso(int p, int v[]) {

	if (p == 1) return 0;

	int i = 0;
	int max, min;

	max = v[0];
	min = v[1];

	if (max < min) {

		min = v[0];
		max = v[1];
	}

	while (i < p) {

		if (v[i] > max) {

			max = v[i];

		}
		else if (v[i] < min) {

			min = v[i];
		}

		i++;

	}

	return max - min - (p - 1);
}