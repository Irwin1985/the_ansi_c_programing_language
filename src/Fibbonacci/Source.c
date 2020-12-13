#include <stdio.h>
int fibbonacci(n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibbonacci(n - 1) + fibbonacci(n - 2);
}

//int main() {
//	for (int i = 1; i <= 35; i++)
//		printf("%d ", fibbonacci(i));
//	return 0;
//}