#include <iostream>
#include <string>

using namespace std;
int v[10000];

string resuelve();
string resuelveCaso(int p, int v[]);

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {

		 cout << resuelve() << endl;
		

	}


	return 0;
}

string resuelve() {

	int p; 

	cin >> p;

	for (int i = 0; i < p; i++) {

		cin >> v[i];


	}

	return resuelveCaso(p, v);
}
string resuelveCaso(int p, int v[]) {

	int valles = 0;
	int picos = 0;

	int i = 1;

	while (i < p - 1) {

		if (v[i - 1] > v[i] && v[i] < v[i + 1]) {

			valles++;

		}
		else if (v[i - 1] < v[i] && v[i] > v[i + 1]) {

			picos++;
		}

		i++;
	}


	string  res =   to_string(picos)   + " " + to_string(valles);
	return res;
}