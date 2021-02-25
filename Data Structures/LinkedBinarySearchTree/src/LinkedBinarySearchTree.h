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

#endif /* LINKEDBINARYSEARCHTREE_H_ */
