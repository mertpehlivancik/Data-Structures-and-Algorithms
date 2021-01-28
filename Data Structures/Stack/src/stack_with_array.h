/*
 ============================================================================
 Name        : stack_with_array.h
 Author      : Mert PEHLİVANCIK
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Implementing Stack using Arrays
 Reference   : https://www.geeksforgeeks.org/
 ============================================================================
 */
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
typedef struct Stack {
	int top;
	unsigned capacity;
	int *array;
} Stack;

Stack* createStack(unsigned capacity);
int isFull(Stack *stack);
int isEmpty(Stack *stack);
void push(Stack *stack, int item);
int pop(Stack *stack);
int peek(Stack *stack);
