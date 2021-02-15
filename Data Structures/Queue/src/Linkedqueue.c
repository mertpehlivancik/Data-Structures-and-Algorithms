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

// Add element to tail
// head(front) tail(rear)
// Adding element to queue
void linkedqueue_enqueue(LINKED_QUEUE queue, int data) {
	if (queue->head == NULL && queue->tail == NULL) {
		queue->tail = linkedqueue_node_init(data);
		queue->head = queue->tail;
	} else {
		queue->tail->next = linkedqueue_node_init(data);
		queue->tail = queue->tail->next;
	}
}

// Removing element from queue
// remove element from head
void* linkedqueue_dequeue(LINKED_QUEUE queue) {
	if (queue->head == NULL && queue->tail == NULL) {
		return NULL;
	} else if (queue->head == queue->tail) {
		void *data = &queue->tail->data;
		queue->head = NULL;
		queue->tail = NULL;
		return data;
	} else {
		LINKED_QUEUE_NODE node = queue->head;
		node = node->next;
		void *data = &queue->head->data;
		// temp was used because if memory address of data isn't changed, data will be deleted with "free(queue->head);".
		int temp = *((int*) data);
		data = &temp;
		free(queue->head);
		queue->head = node;
		return data;
	}
}

// This function returns size of given queue.
int linkedqueue_getsize(LINKED_QUEUE queue) {
	int counter = 0;
	if (queue->head != NULL && queue->tail != NULL) {
		LINKED_QUEUE_NODE node = queue->head;
		while (node != queue->tail) {
			node = node->next;
			counter++;
		}
		return counter + 1;
	} else {
		return counter;
	}
}

// Printing queue from head to tail.
void linkedqueue_print(LINKED_QUEUE queue) {
	if (queue->head == NULL) {
		return;
	} else {
		LINKED_QUEUE_NODE node = queue->head;
		while (node != queue->tail) {
			printf("%d ", node->data);
			node = node->next;
		}
		printf("%d\n", node->data);
	}
}

// This function deletes queue as node by node.
void linkedqueue_delete(LINKED_QUEUE queue) {
	while (queue->head != queue->tail) {
		LINKED_QUEUE_NODE node = queue->head;
		node = node->next;
		free(queue->head);
		queue->head = node;
	}
	if (queue->head == queue->tail) {
		free(queue->head);
		free(queue->tail);
		free(queue);
	}
}

