#include <stdio.h>
void bubble_sort() {
	char vowels[5] = { 'u', 'i', 'a', 'o', 'e' };
	// print the array
	puts("unordered list:");
	for (int i = 0; i < 5; i++)
		printf("vowels[%d] = '%c'\n", i, vowels[i]);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (vowels[i] < vowels[j]) {
				char temp = vowels[i];
				vowels[i] = vowels[j];
				vowels[j] = temp;
			}
		}
	}
	puts("ordered list:");
	// print the array
	for (int i = 0; i < 5; i++)
		printf("vowels[%d] = '%c'\n", i, vowels[i]);
}

int main() {
	bubble_sort();
	return 0;
}