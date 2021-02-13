/*
 ============================================================================
 Name        : linkedstack.h
 Author      : Mert PEHLİVANCIK
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Implementing Stack using Arrays
 ============================================================================
 */

#include "linkedstack.h"

LINKED_STACK linkedstack_init() {
	LINKED_STACK linkedstack = (LINKED_STACK) malloc(sizeof(LINKED_STACK_t));
	linkedstack->head = NULL;
	return linkedstack;
}

LINKED_STACK_NODE linkedstack_node_init(int data) {
	LINKED_STACK_NODE node = (LINKED_STACK_NODE) malloc(
			sizeof(LINKED_STACK_NODE_t));
	node->data = data;
	node->next = NULL;
	return node;
}

// If linkedstack is empty, function returns true. If not empty, return false.
bool linkedstack_isEmpty(LINKED_STACK linkedstack) {
	if (linkedstack->head == NULL)
		return true;
	return false;
}

// This function push data to linkedstack with "last in first out(LIFO)" principle.
void linkedstack_push(LINKED_STACK linkedstack, int data) {
	if (linkedstack_isEmpty(linkedstack) == true) {
		linkedstack->head = linkedstack_node_init(data);
	} else {
		LINKED_STACK_NODE node = linkedstack_node_init(data);
		node->next = linkedstack->head;
		linkedstack->head = node;
	}
}

// This function pop data to linkedstack with "last in first out(LIFO)" principle.
void linkedstack_pop(LINKED_STACK linkedstack) {
	if (linkedstack->head == NULL) {
		printf("LinkedStack is underflow");
		return;
	}
	LINKED_STACK_NODE node = linkedstack->head->next;
	free(linkedstack->head);
	linkedstack->head = node;
}

