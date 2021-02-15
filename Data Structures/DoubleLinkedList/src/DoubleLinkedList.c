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

void double_linked_list_node_append(DOUBLE_LINKED_LIST list, int data) {
	if (list->head == NULL) {
		list->head = double_linked_list_node_init(data);
	} else {
		DOUBLE_LINKED_LIST_NODE node = list->head;
		while (node->next != NULL) {
			node = node->next;
		}
		node->next = double_linked_list_node_init(data);
		node->next->prev = node;
	}
}

void double_linked_list_print(DOUBLE_LINKED_LIST list) {
	DOUBLE_LINKED_LIST_NODE node = list->head;
	if (node == NULL) {
		return;
	} else {
		while (node->next != NULL) {
			printf("%d\t", node->data);
			node = node->next;
		}
		printf("%d", node->data);
	}
}
