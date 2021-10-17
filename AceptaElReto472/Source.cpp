#include <iostream>

using namespace std;

int v[200000];

bool resuelve(int d, int n);
bool resuelveCaso(int d, int n, int v[]);

int main() {

	int d, n;

	while (cin >> d >> n) {

		bool apto;
		apto = resuelve(d, n);

		if (apto) {

			cout << "APTA" << endl;
		}
		else {

			cout << "NO APTA" << endl;
		}


	}


	return 0;
}


bool resuelve(int d, int n) {


	for (int i = 0; i < n; i++) {


		cin >> v[i];
	}

	return resuelveCaso(d, n, v);
}
bool resuelveCaso(int d, int n, int v[]) {

	if (n == 1) {

		return true;

	}

	
	int min = v[0];
	int max = v[0];

	int i = 1;

	while (i < n) {

		if (v[i] > max) {
		
			max = v[i];
			if (max - min > d) {



				return false;
			}
		}

		else if (v[i] <= max) {
			min = v[i];
			max = v[i];

		}

		i++;
	}



	return true;
}