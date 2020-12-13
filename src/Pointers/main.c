#include <stdio.h>
#include <stdlib.h>

typedef struct _token{
	int type;
	void* value;
} token;

int main() {
	token* t1 = malloc(sizeof(token));
	token* t2 = malloc(sizeof(token));
	
	t1->type = 1;
	t1->value = (char*)"Irwin";

	t2->type = 2;
	t2->value = (int*)1985;

	token* t3 = malloc(sizeof(token));
	t3->type = 2;
	t3->value = (int*)1985;



	printf("t1.type=%d\nt1.value=%s", t1->type, (char*)t1->value);
	printf("t2.type=%d\nt2.value=%d", t2->type, (int)t2->value);

	return 0;
}