/*
 ============================================================================
 Name        : LinkedBinarySearchTree.c
 Author      : Mert PEHLIVANCIK
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "LinkedBinarySearchTree.h"

LINKED_BINARY_SEARCH_TREE linked_binary_search_tree_init() {
	LINKED_BINARY_SEARCH_TREE tree = (LINKED_BINARY_SEARCH_TREE) malloc(
			sizeof(LINKED_BINARY_SEARCH_TREE_t));
	tree->root = NULL;
	return tree;
}

LINKED_BINARY_SEARCH_TREE_NODE linked_binary_search_tree_node_init(int data) {
	LINKED_BINARY_SEARCH_TREE_NODE node =
			(LINKED_BINARY_SEARCH_TREE_NODE) malloc(
					sizeof(LINKED_BINARY_SEARCH_TREE_NODE_t));
	node->left = NULL;
	node->right = NULL;
	node->data = data;
	return node;
}

