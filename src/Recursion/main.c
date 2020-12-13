#include <stdio.h>

int fibonacci(int n);
int factorial(int n);
int decreasing(int n);

void fibonacci_example();
void factorial_example();
void decreasing_example();

int main() {
	puts("Recursion program");
	puts("Please select an item below and press ENTER");
	int choice = 0;
	puts("1. fibonacci example\n");
	puts("2. factorial example\n");
	puts("3. decreasing example\n");
	scanf_s("%d", &choice);
	switch (choice) {
	case 1:
		fibonacci_example();
		break;
	case 2:
		factorial_example();
		break;
	case 3:
		decreasing_example();
		break;
	}
	return 0;
}

void factorial_example() {
	int n = 0;
	fputs("type a number: ", stdout);
	scanf_s("%d", &n);
	printf("The factorial is: %d\n", factorial(n));
}
int factorial(int n) {
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

void decreasing_example() {
	int n = 0;
	fputs("type a number: ", stdout);
	scanf_s("%d", &n);
	decreasing(n);
}
int decreasing(int n) {
	if (n == 0)
		printf("%d", 1);
	printf("%d", decreasing(n - 1));
}

void fibonacci_example() {
	int num = 0;
	fputs("type a number: ", stdout);
	scanf_s("%d", &num);
	if (num > 0) {
		for (int i = 1; i <= num; i++)
			printf("%d\n", fibonacci(i));
	}
}

int fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}