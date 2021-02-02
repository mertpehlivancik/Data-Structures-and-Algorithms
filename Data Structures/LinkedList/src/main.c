/*
 ============================================================================
 Name        : main.c
 Author      : Mert PEHLİVANCIK
 Version     : 1.2
 Copyright   : Your copyright notice
 Description : Linked list operations
 ============================================================================
 */
#include "LinkedList.h"

int main(void) {
	LINKED_LIST mylist;
	mylist = linked_list_init();

	linked_list_append(mylist, 1);
	linked_list_append(mylist, 2);
	linked_list_append(mylist, 3);
	linked_list_append(mylist, 4);
	linked_list_prepend(mylist, 0);
	linked_list_prepend(mylist, -1);

	linked_list_insert(mylist, 3, 99);
	linked_list_delete_node_as_key(mylist, 99);
	// -1 0 1 2 3 4 Data
	//  0 1 2 3 4 5 Index(position)
//	linked_list_delete_node_as_position(mylist, 2);
//	linked_list_delete_list(mylist);
//	printf("%d\n", linked_list_find_length_iterative(mylist));
//	printf("%d\n", linked_list_find_length_recursive(mylist->head));
//
//	linked_list_search_element_iterative(mylist, 0) ?
//			printf("Yes\n") : printf("No\n");
//	linked_list_search_element_recursive(mylist->head, 5) ?
//			printf("Yes\n") : printf("No\n");
//
//	printf("%d\n", linked_list_getNth_data(mylist, 5));
//	LINKED_LIST_NODE node = linked_list_getNth_node(mylist->head, 10);
//	if (node == NULL) {
//		printf("Node is NULL\n");
//	} else {
//		printf("%d\n", node->data);
//	}
//	LINKED_LIST_NODE node = linked_list_find_middle_node_with_fastnodeMethod(
//			mylist);
//	printf("%d\n", node->data);
//	LINKED_LIST_NODE node = linked_list_find_middle_node(mylist);
//	printf("%d\n", node->data);

	linked_list_print(mylist);
	return 0;
}

