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
	LINKED_BINARY_SEARCH_TREE mytree2 = linked_binary_search_tree_init();
	linked_binary_search_tree_insert(mytree, 45);
	linked_binary_search_tree_insert(mytree, 39);
	linked_binary_search_tree_insert(mytree, 56);
	linked_binary_search_tree_insert(mytree, 54);
	linked_binary_search_tree_insert(mytree, 55);
	linked_binary_search_tree_insert(mytree, 78);
	linked_binary_search_tree_insert(mytree, 80);

	linked_binary_search_tree_insert(mytree2, 45);
	linked_binary_search_tree_insert(mytree2, 39);
	linked_binary_search_tree_insert(mytree2, 78);
	linked_binary_search_tree_insert(mytree2, 54);
	linked_binary_search_tree_insert(mytree2, 79);

//	linked_binary_search_tree_insert(mytree, 79);
//	linked_binary_search_tree_delete(mytree->root, 56);
//	linked_binary_search_tree_delete(mytree->root, 54);
//	linked_binary_search_tree_delete(mytree->root, 80);
	int height = linked_binary_search_tree_height(mytree->root);
	printf("%d\n", height);
	int totalNodes = linked_binary_search_tree_totalNodes(mytree->root);
	printf("%d\n", totalNodes);
	int totalInternalNodes = linked_binary_search_tree_totalInternalNodes(
			mytree->root);
	printf("%d\n", totalInternalNodes);
	int totalExternaNodes = linked_binary_search_tree_totalExternalNodes(
			mytree->root);
	printf("%d\n", totalExternaNodes);
	linked_binary_search_tree_mirrorImage(mytree2->root);
	linked_binary_search_tree_deleteTree(mytree2->root);
	LINKED_BINARY_SEARCH_TREE_NODE smallestNode =
			linked_binary_search_tree_findSmallestNode(mytree->root);
	printf("%d\n", smallestNode->data);
	return 0;
}

