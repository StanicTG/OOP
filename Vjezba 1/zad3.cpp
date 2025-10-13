#include <iostream>

int limit(int x, int low, int high) {
	if (x < low) return low;
	if (x > high) return high;
	return x;
}

double limit(double x, double low, double high) {
	if (x < low) return low;
	if (x > high) return high;
	return x;
}

int main() {
	std::cout << limit(5, 10, 20) << std::endl;
	std::cout << limit(15, 10, 20) << std::endl;
	std::cout << limit(6.7, 7.0, 20.0) << std::endl;
	return 0;
}