/*
 ============================================================================
 Name        : main.c
 Author      : Mert PEHLİVANCIK
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Implementation of Double Linked List
 ============================================================================
 */
#include "DoubleLinkedList.h"

// -3	-2	-1	0	1	2	3
int main(void) {
	DOUBLE_LINKED_LIST mylist = double_linked_list_init();
	double_linked_list_prepend(mylist, -1);
	double_linked_list_append(mylist, 0);
	double_linked_list_append(mylist, 1);
	double_linked_list_append(mylist, 2);
	double_linked_list_append(mylist, 3);
	double_linked_list_prepend(mylist, -3);
	double_linked_list_insert(mylist, 1, -2);
	double_linked_list_delete_node_as_position(mylist, 6);
	double_linked_list_print(mylist);
	return 0;
}

