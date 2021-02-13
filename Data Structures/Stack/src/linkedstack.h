/*
 ============================================================================
 Name        : linkedstack.h
 Author      : Mert PEHLİVANCIK
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Implementing Stack using Arrays
 ============================================================================
 */

#ifndef LINKEDSTACK_H_
#define LINKEDSTACK_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct LINKED_STACK_NODE_s *LINKED_STACK_NODE;
typedef struct LINKED_STACK_NODE_s {
	int data;
	LINKED_STACK_NODE next;
} LINKED_STACK_NODE_t[1];

typedef struct LINKED_STACK_s *LINKED_STACK;
typedef struct LINKED_STACK_s {
	LINKED_STACK_NODE head;
} LINKED_STACK_t[1];

LINKED_STACK linkedstack_init();
LINKED_STACK_NODE linkedstack_node_init(int data);
bool linkedstack_isEmpty(LINKED_STACK linkedstack);
void linkedstack_push(LINKED_STACK linkedstack, int data);
void linkedstack_pop(LINKED_STACK linkedstack);
void linkedstack_print(LINKED_STACK linkedstack);

#endif /* LINKEDSTACK_H_ */
