#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int val;
	struct node *next;
} node_t;

void push(node_t* head, int val);
void print(node_t *head);

int main() {
	node_t* head = (node_t*)malloc(sizeof(node_t));
	head->val = 10;
	head->next = NULL;

	push(head, 15);
	push(head, 20);
	push(head, 25);
	push(head, 30);

	print(head);

	free(head);
	return 0;
}

void push(node_t* head, int val) {
	node_t* current = head;
	// Recorrer toda la lista hasta llegar al último (next nulo).
	while (current->next != NULL) {
		current = current->next;
	}
	current->next = (node_t*)malloc(sizeof(node_t));
	current->next->val = val;
	current->next->next = NULL;
}

void print(node_t* head) {
	node_t* current = head;
	while (current != NULL) {
		printf("%d\n", current->val);
		current = current->next;
	}
}