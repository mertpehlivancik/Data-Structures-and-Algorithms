/*
 ============================================================================
 Name        : LinkedList.c
 Author      : Mert PEHLİVANCIK
 Version     : 1.1
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct LINKED_LIST_NODE_s *LINKED_LIST_NODE;
typedef struct LINKED_LIST_NODE_s {
	int data;
	LINKED_LIST_NODE next;
} LINKED_LIST_NODE_t[1];

typedef struct LINKED_LIST_s *LINKED_LIST;
typedef struct LINKED_LIST_s {
	LINKED_LIST_NODE head;
} LINKED_LIST_t[1];

LINKED_LIST linked_list_init() {
	LINKED_LIST list = (LINKED_LIST) malloc(sizeof(LINKED_LIST_t));
	list->head = NULL;
	return list;
}

LINKED_LIST_NODE linked_list_node_init(int data) {
	LINKED_LIST_NODE node = (LINKED_LIST_NODE) malloc(
			sizeof(LINKED_LIST_NODE_t));
	node->data = data;
	node->next = NULL;
	return node;
}

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

void linked_list_prepend(LINKED_LIST list, int data){
	if(list->head == NULL){
		list->head = linked_list_node_init(data);
	}else{
		LINKED_LIST_NODE node = linked_list_node_init(data);
		node->next = list->head;
		list->head = node;
	}
}

void linked_list_print(LINKED_LIST list) {
	LINKED_LIST_NODE node = list->head;
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}

int main(void) {

	LINKED_LIST mylist;
	mylist = linked_list_init();

	linked_list_append(mylist, 1);
	linked_list_append(mylist, 2);
	linked_list_append(mylist, 3);
	linked_list_append(mylist, 4);

	linked_list_prepend(mylist, 0);
	linked_list_prepend(mylist, -1);

	linked_list_print(mylist);
//	printf("asdsad");
	return 0;
}
