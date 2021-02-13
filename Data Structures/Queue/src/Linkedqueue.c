/*
 ============================================================================
 Name        : linkedqueue.c
 Author      : Mert PEHLİVANCIK
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Queue implementation
 ============================================================================
 */

#include "Linkedqueue.h"

LINKED_QUEUE linkedqueue_init() {
	LINKED_QUEUE queue = (LINKED_QUEUE) malloc(sizeof(LINKED_QUEUE_t));
	queue->head = NULL;
	queue->tail = NULL;
	return queue;
}

LINKED_QUEUE_NODE linkedqueue_node_init(int data) {
	LINKED_QUEUE_NODE node = (LINKED_QUEUE_NODE) malloc(
			sizeof(LINKED_QUEUE_NODE_t));
	node->data = data;
	node->next = NULL;
	return node;
}

// Add element to tail and remove element from head
// head(front) tail(rear)
void linkedqueue_enqueue(LINKED_QUEUE queue, int data) {
	if (queue->head == NULL && queue->tail == NULL) {
		queue->tail = linkedqueue_node_init(data);
		queue->head = queue->tail;
	} else {
		queue->tail->next = linkedqueue_node_init(data);
		queue->tail = queue->tail->next;
	}
}
