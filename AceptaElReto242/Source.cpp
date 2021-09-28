#include <iostream>

using namespace std;



long long int resuelve(int n);
long long int resuelveCaso(int n, long long int total , long long int resta);

int main() {

	int n;
	cin >> n;

	while (n != 0) {
		cout << resuelve(n) << endl;
		cin >> n;
	}
	return 0;
}
long long int resuelve(int n) {

	long long int total = 0;
	long long int resta = 0;
	long long int v;

	for (int i = 0; i < n; i++) {
		cin >> v;
		total = total + v;

		if (v > 1 ) {
			resta = resta + (v*(v-1)/2);
		}
	}
	return resuelveCaso(n, total, resta);
}
long long int resuelveCaso(int n, long long int total, long long int resta ) {

	if (n < 2) {
		return 0;
	}

	long long int res;
	long long int fact = total*(total-1);
	res = (fact / 2) - resta;

	return res;
}
