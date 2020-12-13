#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SPACE 32
char* alltrim(char* s);

int main() {
	char str1[100];
	puts("Type some text and press ENTER");
	puts("Press Ctrl+C to Exit.");
	while (1) {
		fputs("type> ", stdout);
		memset(str1, '\0', 100);
		fgets(str1, 100, stdin);
		char* str2 = alltrim(str1);
		printf("your text =\"%s\"\nyour text length=%d\n", str1, strlen(str1));
		printf("trimmed text =\"%s\"\ntrimmed text length=%d\n", str2, strlen(str2));
		free(str2);
	}
	return 0;
}

char* alltrim(char* s) {
	int left_offset = 0, right_offset = 0;
	int len = strlen(s) - 1; // recordar que es de 0 a n-1
	// Left side
	while (1) {
		if (s[len - left_offset] == SPACE)
			left_offset++;
		else
			break;
	}
	// Right side
	while (1) {
		if (s[right_offset] == SPACE)
			right_offset++;
		else
			break;
	}
	char* new_str = malloc(right_offset + left_offset + 1);
	int index = 0;
	int length = right_offset + left_offset;
	if (length == 0)
		length = len - 1;
	for (int i = right_offset; i < length; i++, index++) {
		new_str[index] = s[i];
	}
	new_str[index + 1] = '\0';
	return new_str;
}