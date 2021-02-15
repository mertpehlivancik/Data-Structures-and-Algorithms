/*
 ============================================================================
 Name        : DoubleLinkedList.c
 Author      : Mert PEHLİVANCIK
 Version     :
 Copyright   : Your copyright notice
 Description : Source codes of Double Linked List
 ============================================================================
 */
#include "DoubleLinkedList.h"

DOUBLE_LINKED_LIST double_linked_list_init() {
	DOUBLE_LINKED_LIST list = (DOUBLE_LINKED_LIST) malloc(
			sizeof(DOUBLE_LINKED_LIST_t));
	list->head = NULL;
	return list;
}

DOUBLE_LINKED_LIST_NODE double_linked_list_node_init(int data) {
	DOUBLE_LINKED_LIST_NODE node = (DOUBLE_LINKED_LIST_NODE) malloc(
			sizeof(DOUBLE_LINKED_LIST_NODE_t));
	node->data = data;
	node->prev = NULL;
	node->next = NULL;
	return node;
}

