#include <iostream>
int fibbonacci(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibbonacci(n - 1) + fibbonacci(n - 2);
}

int main() {
	for (int i = 0; i <= 35; i++)
		std::cout << fibbonacci(i) << " ";
	return 0;
}