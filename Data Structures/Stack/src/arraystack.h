/*
 ============================================================================
 Name        : arraystack.h
 Author      : Mert PEHLİVANCIK
 Version     : 1.1
 Copyright   : Your copyright notice
 Description : Implementing Stack using Arrays
 ============================================================================
 */
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack

typedef struct ARRAY_STACK_s *ARRAY_STACK;
typedef struct ARRAY_STACK_s {
	int top;
	unsigned capacity;
	int *array;
} ARRAY_STACK_t[1];

ARRAY_STACK arraystack_create(unsigned capacity);
int arraystack_isFull(ARRAY_STACK stack);
int arraystack_isEmpty(ARRAY_STACK stack);
void arraystack_push(ARRAY_STACK stack, int item);
int arraystack_pop(ARRAY_STACK stack);
int arraystack_peek(ARRAY_STACK stack);
