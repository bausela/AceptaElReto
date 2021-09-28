#include <iostream>
using namespace std;

int main(){
	int n, m;

	cin >> n >> m;

	while (n != 0 || m != 0) {

		if (n >= m) {

			cout << "CUERDO" << endl;

		}
		else {

			cout << "SENIL" << endl;

		}

		cin >> n >> m;
	}


	return 0;
}