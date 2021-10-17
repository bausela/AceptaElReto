#include <iostream>

int main() {

	int n, p, q, i =0;
	std::cin >> n;
	while (i < n) {

		std::cin >> p >> q;
		std::cout << q - p << std::endl;
		i++;
	}
	return 0;
}