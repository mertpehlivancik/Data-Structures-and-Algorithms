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

void linked_list_print(LINKED_LIST list){
	LINKED_LIST_NODE node = list->head;
	while(node != NULL){
		printf("%d ",node->data);
		node = node->next;
	}
}

int main(void) {

	LINKED_LIST mylist = (LINKED_LIST)malloc(sizeof(LINKED_LIST_t));
	mylist->head = NULL;
	LINKED_LIST_NODE node1 = (LINKED_LIST_NODE)malloc(sizeof(LINKED_LIST_NODE_t));
	LINKED_LIST_NODE node2 = (LINKED_LIST_NODE)malloc(sizeof(LINKED_LIST_NODE_t));
	LINKED_LIST_NODE node3 = (LINKED_LIST_NODE)malloc(sizeof(LINKED_LIST_NODE_t));
	mylist->head = node1;
	node1->data=1;
	node1->next=node2;
	node2->data=2;
	node2->next=node3;
	node3->data = 3;
	node3->next = NULL;

	linked_list_print(mylist);
//	printf("asdsad");
	return 0;
}
