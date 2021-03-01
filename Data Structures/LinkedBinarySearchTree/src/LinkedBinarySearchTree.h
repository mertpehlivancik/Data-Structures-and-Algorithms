/*
 ============================================================================
 Name        : LinkedBinarySearchTree.h
 Author      : Mert PEHLIVANCIK
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Linked Binary Search Tree Implementation
 ============================================================================
 */

#ifndef LINKEDBINARYSEARCHTREE_H_
#define LINKEDBINARYSEARCHTREE_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct LINKED_BINARY_SEARCH_TREE_NODE_s *LINKED_BINARY_SEARCH_TREE_NODE;
typedef struct LINKED_BINARY_SEARCH_TREE_NODE_s {
	LINKED_BINARY_SEARCH_TREE_NODE left;
	LINKED_BINARY_SEARCH_TREE_NODE right;
	int data;
} LINKED_BINARY_SEARCH_TREE_NODE_t[1];

typedef struct LINKED_BINARY_SEARCH_TREE_s *LINKED_BINARY_SEARCH_TREE;
typedef struct LINKED_BINARY_SEARCH_TREE_s {
	LINKED_BINARY_SEARCH_TREE_NODE root;
} LINKED_BINARY_SEARCH_TREE_t[1];

LINKED_BINARY_SEARCH_TREE linked_binary_search_tree_init();
LINKED_BINARY_SEARCH_TREE_NODE linked_binary_search_tree_node_init(int data);
void linked_binary_search_tree_insert(LINKED_BINARY_SEARCH_TREE tree, int data);
LINKED_BINARY_SEARCH_TREE_NODE linked_binary_search_tree_findLargestNode(
		LINKED_BINARY_SEARCH_TREE_NODE node);
LINKED_BINARY_SEARCH_TREE_NODE linked_binary_search_tree_delete(
		LINKED_BINARY_SEARCH_TREE_NODE node, int data);
int linked_binary_search_tree_height(LINKED_BINARY_SEARCH_TREE_NODE node);
int linked_binary_search_tree_totalNodes(LINKED_BINARY_SEARCH_TREE_NODE node);
int linked_binary_search_tree_totalInternalNodes(
		LINKED_BINARY_SEARCH_TREE_NODE node);
int linked_binary_search_tree_totalExternalNodes(
		LINKED_BINARY_SEARCH_TREE_NODE node);
#endif /* LINKEDBINARYSEARCHTREE_H_ */
