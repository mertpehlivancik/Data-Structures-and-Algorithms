/*
 ============================================================================
 Name        : LinkedList.c
 Author      : Mert PEHLİVANCIK
 Version     : 1.2
 Copyright   : Your copyright notice
 Description : Linked list operations
 ============================================================================
 */
#include "LinkedList.h"

// Creating linked list.
LINKED_LIST linked_list_init() {
	LINKED_LIST list = (LINKED_LIST) malloc(sizeof(LINKED_LIST_t));
	list->head = NULL;
	return list;
}

// Creating node.
LINKED_LIST_NODE linked_list_node_init(int data) {
	LINKED_LIST_NODE node = (LINKED_LIST_NODE) malloc(
			sizeof(LINKED_LIST_NODE_t));
	node->data = data;
	node->next = NULL;
	return node;
}

// Adding node after last node of linked list.
void linked_list_append(LINKED_LIST list, int data) {
	if (list->head == NULL) {
		list->head = linked_list_node_init(data);
	} else {
		LINKED_LIST_NODE node = list->head;
		while (node->next != NULL) {
			node = node->next;
		}
		node->next = linked_list_node_init(data);
	}
}

// Adding node before first node of linked list.
void linked_list_prepend(LINKED_LIST list, int data) {
	if (list->head == NULL) {
		list->head = linked_list_node_init(data);
	} else {
		LINKED_LIST_NODE node = linked_list_node_init(data);
		node->next = list->head;
		list->head = node;
	}
}

// Adding node to linked list as a given position.
void linked_list_insert(LINKED_LIST list, int position, int data) {
	LINKED_LIST_NODE temp = list->head;
	if (position == 0) {
		linked_list_prepend(list, data);
	}
	while (position != 1) {
		if (temp == NULL) {
			break;
		}
		temp = temp->next;
		position--;
	}
	if (temp != NULL) {
		LINKED_LIST_NODE node = linked_list_node_init(data);
		node->next = temp->next;
		temp->next = node;
	}
}

// Deleting node as a given key value.
void linked_list_delete_node_as_key(LINKED_LIST list, int data) {
	LINKED_LIST_NODE prev = list->head;
	while (prev != NULL) {
		if (prev->next->data == data) {
			break;
		}
		prev = prev->next;
	}
	LINKED_LIST_NODE node;
	node = prev->next;
	prev->next = node->next;
	free(node);
}

// Deleting node as a given position of list.
void linked_list_delete_node_as_position(LINKED_LIST list, int position) {
	if (list == NULL) {
		return;
	}
	LINKED_LIST_NODE node = list->head;
	LINKED_LIST_NODE prev = list->head;
	// if head of linked list needs to be removed.
	if (position == 0) {
		list->head = node->next;
		free(node);
	} else {
		// Finding previous node of the node to be deleted.
		for (int i = 0; prev != NULL && i < position - 1; i++) {
			prev = prev->next;
			// if given position for deleting node is more than number of nodes
			if (prev == NULL || prev->next == NULL) {
				return;
			}
		}
		node = prev->next;
		prev->next = node->next;
		free(node);
	}
}
// -1 0 1 2 3 4 NULL
// Deleting all list as node by node from memory
void linked_list_delete_list(LINKED_LIST list) {
	LINKED_LIST_NODE node = list->head;
	LINKED_LIST_NODE temp = list->head;
	while (node != NULL) {
		temp = temp->next;
		free(node);
		node = temp;
	}
}

// Finding length of linked list using iterative function.
int linked_list_find_length_iterative(LINKED_LIST list) {
	LINKED_LIST_NODE node = list->head;
	int counter = 0;
	while (node != NULL) {
		node = node->next;
		counter++;
	}
	return counter;
}

// Finding length of linked list using recursive function.
int linked_list_find_length_recursive(LINKED_LIST_NODE node) {
	if (node == NULL) {
		return 0;
	}
	return 1 + linked_list_find_length_recursive(node->next);
}

// Searching given value from given linked list with iterative function. If value is in linked list, function returns true. If not, return false.
bool linked_list_search_element_iterative(LINKED_LIST list, int data) {
	LINKED_LIST_NODE node = list->head;
	while (node != NULL) {
		if (node->data == data) {
			return true;
		}
		node = node->next;
	}
	return false;
}

// Searching given value from given linked list with recursive function. If value is in linked list, function returns true. If not, return false.
bool linked_list_search_element_recursive(LINKED_LIST_NODE node, int data){
	if(node==NULL){
		return false;
	}else if(node->data == data){
		return true;
	}
	return linked_list_search_element_recursive(node->next,data);
}

// Printing elements of linked list
void linked_list_print(LINKED_LIST list) {
	LINKED_LIST_NODE node = list->head;
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}

