#include <iostream>
#include <string>

using namespace std;

long long int resuelveCaso(int n);

int main() {


	int n; 
	cin >> n;

	for (int i = 0; i < n; i++) {

		int q;
		cin >> q;

		cout << resuelveCaso(q) << endl;

	}



	return 0;
}

long long int resuelveCaso(int n) {

	if (n < 6 ) {

		return n;

	}
	




	return n % 6 + 10*resuelveCaso(n/6);
	
}