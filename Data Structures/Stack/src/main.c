/*
 ============================================================================
 Name        : main.c
 Author      : Mert PEHLİVANCIK
 Version     : 1.1
 Copyright   : Your copyright notice
 Description : Using arraystack
 ============================================================================
 */
#include "arraystack.h"
#include "linkedstack.h"

int main() {
//	ARRAY_STACK stack = createStack(100);
//	push(stack, 10);
//	push(stack, 20);
//	push(stack, 30);
//	printf("%d is peek of stack\n", peek(stack));
//	printf("%d popped from stack\n", pop(stack));
//	printf("%d popped from stack\n", pop(stack));
//	printf("%d popped from stack\n", pop(stack));

	LINKED_STACK mylinkedstack = linkedstack_init();
	linkedstack_push(mylinkedstack, 4);
	linkedstack_push(mylinkedstack, 3);
	linkedstack_push(mylinkedstack, 2);
	linkedstack_push(mylinkedstack, 1);

	return 0;
}
