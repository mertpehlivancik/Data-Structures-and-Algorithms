/*
 ============================================================================
 Name        : LinkedList.h
 Author      : Mert PEHLİVANCIK
 Version     : 1.2
 Copyright   : Your copyright notice
 Description : Linked list structures and functions definitions
 ============================================================================
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct LINKED_LIST_NODE_s *LINKED_LIST_NODE;
typedef struct LINKED_LIST_NODE_s {
	int data;
	LINKED_LIST_NODE next;
} LINKED_LIST_NODE_t[1];

typedef struct LINKED_LIST_s *LINKED_LIST;
typedef struct LINKED_LIST_s {
	LINKED_LIST_NODE head;
} LINKED_LIST_t[1];

LINKED_LIST linked_list_init();
LINKED_LIST_NODE linked_list_node_init(int data);
void linked_list_append(LINKED_LIST list, int data);
void linked_list_prepend(LINKED_LIST list, int data);
void linked_list_insert(LINKED_LIST list, int position, int data);
void linked_list_delete_node_as_key(LINKED_LIST list, int data);
void linked_list_delete_node_as_position(LINKED_LIST list, int position);
void linked_list_delete_list(LINKED_LIST list);
int linked_list_find_length_iterative(LINKED_LIST list);
int linked_list_find_length_recursive(LINKED_LIST_NODE node);
bool linked_list_search_element_iterative(LINKED_LIST list, int data);
bool linked_list_search_element_recursive(LINKED_LIST_NODE node, int data);
int linked_list_getNth_data(LINKED_LIST list, int getNth);
LINKED_LIST_NODE linked_list_getNth_node(LINKED_LIST_NODE node, int getNth);
LINKED_LIST_NODE linked_list_find_middle_node_with_fastnodeMethod(
		LINKED_LIST list);
LINKED_LIST_NODE linked_list_find_middle_node(LINKED_LIST list);
int linked_list_count_repetitive_number(LINKED_LIST list, int number);
bool linked_list_detect_loop_with_FloydCycleFindingAlgorithm(LINKED_LIST list);
int linked_list_detectAndCountLoop(LINKED_LIST list);
void linked_list_swap_data(LINKED_LIST_NODE first_node,
		LINKED_LIST_NODE second_node);
bool linked_list_isSorted(LINKED_LIST list);
void linked_list_bubbleSort(LINKED_LIST list);
void linked_list_print(LINKED_LIST list);

#endif /* LINKEDLIST_H_ */
