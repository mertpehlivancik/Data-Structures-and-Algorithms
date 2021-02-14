/*
 ============================================================================
 Name        : linkedqueue.h
 Author      : Mert PEHLİVANCIK
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Queue implementation
 ============================================================================
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct LINKED_QUEUE_NODE_s *LINKED_QUEUE_NODE;
typedef struct LINKED_QUEUE_NODE_s {
	int data;
	LINKED_QUEUE_NODE next;
} LINKED_QUEUE_NODE_t[1];

typedef struct LINKED_QUEUE_s *LINKED_QUEUE;
typedef struct LINKED_QUEUE_s {
	LINKED_QUEUE_NODE head, tail;
} LINKED_QUEUE_t[1];

LINKED_QUEUE linkedqueue_init();
LINKED_QUEUE_NODE linkedqueue_node_init(int data);
void linkedqueue_enqueue(LINKED_QUEUE queue, int data);
void* linkedqueue_dequeue(LINKED_QUEUE queue);
int linkedqueue_getsize(LINKED_QUEUE queue);
#endif /* QUEUE_H_ */
