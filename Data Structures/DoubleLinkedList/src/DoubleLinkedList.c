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

// Creating double linked list
DOUBLE_LINKED_LIST double_linked_list_init() {
	DOUBLE_LINKED_LIST list = (DOUBLE_LINKED_LIST) malloc(
			sizeof(DOUBLE_LINKED_LIST_t));
	list->head = NULL;
	return list;
}

// Creating double linked list node
DOUBLE_LINKED_LIST_NODE double_linked_list_node_init(int data) {
	DOUBLE_LINKED_LIST_NODE node = (DOUBLE_LINKED_LIST_NODE) malloc(
			sizeof(DOUBLE_LINKED_LIST_NODE_t));
	node->data = data;
	node->prev = NULL;
	node->next = NULL;
	return node;
}

// Adding node after last node of double linked list.
void double_linked_list_append(DOUBLE_LINKED_LIST list, int data) {
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

// Adding node before first node of given double linked list
void double_linked_list_prepend(DOUBLE_LINKED_LIST list, int data) {
	DOUBLE_LINKED_LIST_NODE node = double_linked_list_node_init(data);
	if (list->head == NULL) {
		list->head = node;
	} else {
		node->next = list->head;
		list->head->prev = node;
		list->head = node;
	}
}

// This wasn't completed.
void double_linked_list_insert(DOUBLE_LINKED_LIST list, int position, int data) {
	if(position == 0){
		double_linked_list_prepend(list, data);
	}else{
		DOUBLE_LINKED_LIST_NODE temp = list->head;
		DOUBLE_LINKED_LIST_NODE node = double_linked_list_node_init(data);
		while(position != 1){
			temp = temp->next;
			position--;
		}
		node->next = temp->next;
		temp->next->prev = node;
		temp->next = node;
		node->prev = temp;
	}
}

// This function prints given double linked list as node by node.
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
