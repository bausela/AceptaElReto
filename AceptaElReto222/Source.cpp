#include <iostream>

using namespace std;

int main() {

	int x, n;

	while (cin >> x >> n) {

		int res = 1;
		int fact = 1;
		for (int i = 0; i < n; i++) {

			fact = fact * x % 1000007;

			res = (res + fact) % 1000007;

		}

		cout << res << endl;

	}




	return 0;
}