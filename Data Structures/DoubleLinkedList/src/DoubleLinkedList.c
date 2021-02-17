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

// This function inserts given value to given position in given double linked list.
void double_linked_list_insert(DOUBLE_LINKED_LIST list, int position, int data) {
	if (position == 0) {
		double_linked_list_prepend(list, data);
	} else {
		DOUBLE_LINKED_LIST_NODE temp = list->head;
		DOUBLE_LINKED_LIST_NODE node = double_linked_list_node_init(data);
		while (position != 1) {
			if (temp->next == NULL) {
				return;
			}
			temp = temp->next;
			position--;
		}
		node->next = temp->next;
		node->prev = temp;
		temp->next->prev = node;
		temp->next = node;
	}
}

// This function deletes node from given position in given list.
void double_linked_list_delete_node_as_position(DOUBLE_LINKED_LIST list,
		unsigned int position) {
	DOUBLE_LINKED_LIST_NODE node = list->head;
	if (position == 0) {
		node = node->next;
		node->prev = NULL;
		free(list->head);
		list->head = node;
	} else {
		while (position != 0) {
			node = node->next;
			if (node == NULL) {
				return;
			}
			position--;
		}
		if (node->next != NULL) {
			node->prev->next = node->next;
			node->next->prev = node->prev;
			free(node);
		} else {
			node->prev->next = node->next;
			free(node);
		}
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
