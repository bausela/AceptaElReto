#include <iostream>
#include <string>

using namespace std;

int resuelveCaso(string n, int tam, int actual);

int main() {

	string n;

	cin >> n;	
	while(n[0] - '0' >=  0 ){
		cout << resuelveCaso(n, n.length(), 0) << endl;

		cin >> n;

	}

	return 0;
}

int resuelveCaso(string n ,int tam, int actual) {

	//cout << "\n Actual: " << actual << endl;

	if (tam - 1 == actual) {

		cout << n[tam - 1] << " = ";

		return n[tam - 1] - '0';

	}

	

	cout << n[actual] - '0' << " + ";



	return (n[actual] - '0') + resuelveCaso( n , tam , actual + 1);
}

