/*
 ============================================================================
 Name        : DoubleLinkedList.h
 Author      : Mert PEHLİVANCIK
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Header of Double Linked List
 ============================================================================
 */

#ifndef DOUBLELINKEDLIST_H_
#define DOUBLELINKEDLIST_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct DOUBLE_LINKED_LIST_NODE_s *DOUBLE_LINKED_LIST_NODE;
typedef struct DOUBLE_LINKED_LIST_NODE_s {
	int data;
	DOUBLE_LINKED_LIST_NODE prev;
	DOUBLE_LINKED_LIST_NODE next;
} DOUBLE_LINKED_LIST_NODE_t[1];

typedef struct DOUBLE_LINKED_LIST_s *DOUBLE_LINKED_LIST;
typedef struct DOUBLE_LINKED_LIST_s {
	DOUBLE_LINKED_LIST_NODE head;
} DOUBLE_LINKED_LIST_t[1];

DOUBLE_LINKED_LIST double_linked_list_init();
DOUBLE_LINKED_LIST_NODE double_linked_list_node_init(int data);
void double_linked_list_append(DOUBLE_LINKED_LIST list, int data);
void double_linked_list_prepend(DOUBLE_LINKED_LIST list, int data);
void double_linked_list_insert(DOUBLE_LINKED_LIST list, int position, int data);
void double_linked_list_delete_node_as_position(DOUBLE_LINKED_LIST list,
		unsigned int position);
void double_linked_list_print(DOUBLE_LINKED_LIST list);

#endif /* DOUBLELINKEDLIST_H_ */
