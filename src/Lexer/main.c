#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	void* value;
	struct node* next;
} node;

typedef struct _token {
	int type;
	void* value;
} token;

void create_token(int type, void* value);
void print_tokens();

node* head = NULL; // Token List Head

int main() {
	create_token(34, (int*)1985);
	create_token(11, "Irwin es el mejor");
	print_tokens();
	if (head != NULL)
		free(head);
	return 0;
}

// Crea un token y lo agrega a la lista.
void create_token(int type, void* value) {
	token *t = (token*) malloc(sizeof(token));
	t->type = type;
	t->value = value;
	// add token to list.

}
// Agrega un token a la lista.
void add_token(token* t) {
	if (head == NULL) {
		head = (node*)malloc(sizeof(node));
		head->value = t;
		head->next = NULL;
	}
	else {
		node* n = (node*)malloc(sizeof(node));
		n->value = t;
		n->next = NULL;
		// Añade el nodo 'n' a la lista enlazada.
		head->next = n;
	}
}
// Imprime la lista de tokens.
void print_tokens() {
	node* current = head;
	int i = 0;
	while (current != NULL) {
		i++;
		token *t = (token*)current->value;
		switch (i) {
		case 1:
			printf("token.type = %d, token.value = %d\n", (int)t->type, (int)t->value);
			break;
		case 2:
			printf("token.type = %d, token.value = \"%s\"\n", (int)t->type, (char*)t->value);
			break;
		}
		current = (node*)current->next;
	}
}