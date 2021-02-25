/*
 ============================================================================
 Name        : main.c
 Author      : Mert PEHLIVANCIK
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Linked Binary Search Tree Implementation
 ============================================================================
 */

#include "LinkedBinarySearchTree.h"

int main(void) {
	LINKED_BINARY_SEARCH_TREE mytree = linked_binary_search_tree_init();
	linked_binary_search_tree_insert(mytree, 50);
	linked_binary_search_tree_insert(mytree, 25);
	linked_binary_search_tree_insert(mytree, 75);
	linked_binary_search_tree_insert(mytree, 20);
	return 0;
}

