#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100

char str1[MAX_LENGTH];
char* reverse(char* s);

int main() {
	puts("Reverse string program v.0.0.1");
	puts("Press Ctrl+C to Exit.\n");
	while (1) {
		fputs("Type> ", stdout);
		memset(str1, '\0', MAX_LENGTH);
		fgets(str1, MAX_LENGTH, stdin);

		char* reverse_str = reverse(str1);
		printf("%s\n", reverse_str);

		free(reverse_str);
	}
	
	return 0;
}

// Vale mencionar que el puntero result se debe liberar con free() para evitar pérdida de memoria.
char* reverse(char* s) {
	int len = strlen(s);
	char* result = malloc(len + 1); // se agrega + 1 por el terminal null. '\0'
	int i, index;

	for (i = len - 1, index = 0; i >= 0; i--, index++)
		result[index] = s[i];

	result[index] = '\0'; // no se debe olvidar el terminal null. '\0'
	return result;
}