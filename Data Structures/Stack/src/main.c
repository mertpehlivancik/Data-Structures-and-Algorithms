/*
 ============================================================================
 Name        : main.c
 Author      : Mert PEHLİVANCIK
 Version     : 1.1
 Copyright   : Your copyright notice
 Description : Using stack
 ============================================================================
 */
#include "arraystack.h"
#include "linkedstack.h"

int main() {
	ARRAY_STACK stack = arraystack_create(100);
	arraystack_push(stack, 10);
	arraystack_push(stack, 20);
	arraystack_push(stack, 30);
	printf("%d is peek of stack\n", arraystack_peek(stack));
	printf("%d popped from stack\n", arraystack_pop(stack));
	printf("%d popped from stack\n", arraystack_pop(stack));
	printf("%d popped from stack\n", arraystack_pop(stack));

	LINKED_STACK mylinkedstack = linkedstack_init();
	linkedstack_push(mylinkedstack, 4);
	linkedstack_push(mylinkedstack, 3);
	linkedstack_push(mylinkedstack, 2);
	linkedstack_push(mylinkedstack, 1);
	linkedstack_push(mylinkedstack, 0);

	int x = *((int*) linkedstack_pop(mylinkedstack));
	printf("%d is popped from linkedstack\n", x);
	x = *((int*) linkedstack_pop(mylinkedstack));
	printf("%d is popped from linkedstack\n", x);
	x = *((int*) linkedstack_pop(mylinkedstack));
	printf("%d is popped from linkedstack\n", x);
	x = *((int*) linkedstack_pop(mylinkedstack));
	printf("%d is popped from linkedstack\n", x);
	x = *((int*) linkedstack_pop(mylinkedstack));
	printf("%d is popped from linkedstack", x);
	return 0;
}
