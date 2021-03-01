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
	linked_binary_search_tree_insert(mytree, 45);
	linked_binary_search_tree_insert(mytree, 39);
	linked_binary_search_tree_insert(mytree, 56);
	linked_binary_search_tree_insert(mytree, 54);
	linked_binary_search_tree_insert(mytree, 55);
	linked_binary_search_tree_insert(mytree, 78);
	linked_binary_search_tree_insert(mytree, 80);
//	linked_binary_search_tree_insert(mytree, 79);
//	linked_binary_search_tree_delete(mytree->root, 56);
//	linked_binary_search_tree_delete(mytree->root, 54);
//	linked_binary_search_tree_delete(mytree->root, 80);
	int height = linked_binary_search_tree_height(mytree->root);
	printf("%d\n", height);
	return 0;
}

