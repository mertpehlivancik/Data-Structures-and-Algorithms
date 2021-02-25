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

// This function is used to create a new tree.
LINKED_BINARY_SEARCH_TREE linked_binary_search_tree_init() {
	LINKED_BINARY_SEARCH_TREE tree = (LINKED_BINARY_SEARCH_TREE) malloc(
			sizeof(LINKED_BINARY_SEARCH_TREE_t));
	tree->root = NULL;
	return tree;
}

// This function is used to create a new node in the linked binary search tree.
LINKED_BINARY_SEARCH_TREE_NODE linked_binary_search_tree_node_init(int data) {
	LINKED_BINARY_SEARCH_TREE_NODE node =
			(LINKED_BINARY_SEARCH_TREE_NODE) malloc(
					sizeof(LINKED_BINARY_SEARCH_TREE_NODE_t));
	node->left = NULL;
	node->right = NULL;
	node->data = data;
	return node;
}

// This function is used to add a new node with a given value at the correct position in the binary search tree.
void linked_binary_search_tree_insert(LINKED_BINARY_SEARCH_TREE tree, int data) {
	if (tree->root == NULL) {
		tree->root = linked_binary_search_tree_node_init(data);
	} else {
		LINKED_BINARY_SEARCH_TREE_NODE temp = tree->root;
		while (1) {
			if (data < temp->data) {
				if (temp->left == NULL) {
					temp->left = linked_binary_search_tree_node_init(data);
					break;
				} else {
					temp = temp->left;
					continue;
				}
			} else {
				if (temp->right == NULL) {
					temp->right = linked_binary_search_tree_node_init(data);
					break;
				} else {
					temp = temp->right;
					continue;
				}
			}
		}
	}
}

