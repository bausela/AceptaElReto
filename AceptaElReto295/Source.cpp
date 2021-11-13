#include <iostream>

using namespace std;

const int k = 31543;

int resuelve(int n,int x);

int main() {

	int n, x;

	cin >> n >> x;

	while (n != 0 || x != 0) {

		cout << resuelve(n % k, x) << endl;
		cin >> n >> x;
	}


	return 0;
}

int resuelve(int n ,int x) {

	cout << "ENTRA" << endl;
	if (n <= 1) {
		return n;
	}

	if (x == 0) {
		return 1;
	}
	else if (x == 1) {
		return n % k;
	}
	else if (x == 2) {
		return (n % k) * (n%k) %k;
	}

	int res = resuelve(n, x /2) % k;

	res = (res % k * res % k) % k;
	

	if (x % 2 == 1) {
		
		res = (res * n) % k;
	}


	return res;
}