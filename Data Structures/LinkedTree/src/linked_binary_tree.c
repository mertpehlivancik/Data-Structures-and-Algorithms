#include "h_linked_binary_tree.h"

LINKED_TREE linked_tree_init() {
	LINKED_TREE new = (LINKED_TREE) malloc(sizeof(LINKED_TREE_t));
	new->root = NULL;
	return new;
}

void linked_tree_free(LINKED_TREE tree) {
	if (tree != NULL) {
		//linked_tree_make_empty(tree);
		free(tree);
	}
}

LINKED_TREE_NODE linked_tree_node_init(int data) {
	LINKED_TREE_NODE new;
	new = (LINKED_TREE_NODE) malloc(sizeof(LINKED_TREE_NODE_t));
	new->left = NULL;
	new->right = NULL;
	new->data = data;
	new->balancefactor = 0;
	return new;
}

int compare_data(int data1, int data2) {
	if (data1 > data2) {
		return 1;
	} else if (data1 < data2) {
		return -1;
	} else {
		return 0;
	}
}

int linked_tree_height_recursive(LINKED_TREE_NODE node) {
	if (node == NULL) {
		return 0;
	}
	int hleft = linked_tree_height_recursive(node->left);
	int hright = linked_tree_height_recursive(node->right);
	if (hleft > hright) {
		return hleft + 1;
	} else {
		return hright + 1;
	}
}

int linked_tree_height(LINKED_TREE tree) {
	return linked_tree_height_recursive(tree->root);
}

void linked_tree_insert(LINKED_TREE tree, int data) {
	LINKED_TREE_NODE cur;
	if (tree->root == NULL) {
		tree->root = linked_tree_node_init(data);
	} else {
		cur = tree->root;
		while (cur != NULL)
			if (compare_data(data, cur->data) == -1) {
				if (cur->left != NULL) {
					cur = cur->left;
				} else {
					cur->left = linked_tree_node_init(data);
					cur = NULL; //break yerine while(1)di
				}
			} else if (compare_data(data, cur->data) == 1) {
				if (cur->right != NULL) {
					cur = cur->right;
				} else {
					cur->right = linked_tree_node_init(data);
					cur = NULL; //break yerine while(1)di
				}
			} else {
				printf("no duplicate data\n");
			}
	}
}

void linked_tree_insert_recursive(LINKED_TREE_NODE node, int data) {
	if (data < node->data) {
		if (node->left == NULL) {
			node->left = linked_tree_node_init(data);
		} else {
			linked_tree_insert_recursive(node->left, data);
		}
	} else if (data > node->data) {
		if (node->right == NULL) {
			node->right = linked_tree_node_init(data);
		} else {
			linked_tree_insert_recursive(node->right, data);
		}
	} else {
		printf("duplicate data\n");
	}

	node->balancefactor = linked_tree_height_recursive(node->left)
			- linked_tree_height_recursive(node->right);
	if (node->balancefactor == 2 || node->balancefactor == -2) {
		LINKED_TREE_t tree;
		tree->root = node;
		linked_tree_create_balanced_tree(tree);
		node = tree->root;
	}

}

void linked_tree_insert_rec(LINKED_TREE tree, int data) {
	if (tree->root == NULL) {
		tree->root = linked_tree_node_init(data);
	} else {
		linked_tree_insert_recursive(tree->root, data);
	}
}

LINKED_TREE_NODE toLift(LINKED_TREE_NODE node, LINKED_TREE_NODE toRemove) {
	if (node->right == NULL) {
		toRemove->data = node->data;
		return node->left;
	} else {
		node->right = toLift(node->right, toRemove);
		return node;
	}
}

LINKED_TREE_NODE linked_tree_delete(LINKED_TREE_NODE node, int data) {
	if (node == NULL) {
		return NULL;
	} else if (data == node->data) {
		if (node->left == NULL) {
			return node->right;
		} else if (node->right == NULL) {
			return node->left;
		} else {
			node->left = toLift(node->left, node);
			return node;
		}
	} else {
		if (data < node->data) {
			node->left = linked_tree_delete(node->left, data);
		} else {
			node->right = linked_tree_delete(node->right, data);
		}
		return node;
	}
}

void linked_tree_make_backbone(LINKED_TREE tree) {
	LINKED_TREE_NODE grandparent = tree->root;
	LINKED_TREE_NODE parent = tree->root;
	int count = 1;
	while (parent != NULL) {
		LINKED_TREE_NODE child = parent->left;
		if (child != NULL) {
			if (grandparent == tree->root && count == 1) {
				tree->root = child;
				grandparent = tree->root;
			} else {
				grandparent->right = child;
			}
			parent->left = child->right;
			child->right = parent;
			parent = child;
		} else {
			grandparent = parent;
			parent = parent->right;
			count++;
		}
	}
}

void linked_tree_make_left_rotation(LINKED_TREE tree, int t) {
	LINKED_TREE_NODE grandparent = NULL;
	LINKED_TREE_NODE parent = tree->root;
	LINKED_TREE_NODE child = parent->right;
	while (t > 0) {
		if (parent == tree->root) {
			tree->root = child;
		} else {
			grandparent->right = child;
		}
		parent->right = child->left;
		child->left = parent;

		grandparent = child;
		parent = child->right;
		if (parent != NULL) {
			child = parent->right;
		}
		t--;
	}
}

int count_tree_nodes(LINKED_TREE tree) {
	int count = 0;
	LINKED_TREE_NODE cur = tree->root;
	while (cur != NULL) {
		cur = cur->right;
		count++;
	}
	return count;
}

void linked_tree_create_balanced_tree(LINKED_TREE tree) {
	linked_tree_make_backbone(tree);
	int n = count_tree_nodes(tree);

	int k = n + 1;
	int l = 0;
	while (k > 1) { // l := Floor(Log(2,n+1))
		k = k / 2;
		l = l + 1;
	}
	int m = (1 << l) - 1; // m := 2^(l := Floor(Log(2,n+1))) - 1
	linked_tree_make_left_rotation(tree, n - m);
	while (m > 1) {
		m = m / 2;
		linked_tree_make_left_rotation(tree, m);
	}
}

void linked_tree_traverse_inorder(LINKED_TREE tree) {
	printf("\n");
	linked_tree_traverse_inorder_recursive(tree->root);
}

void linked_tree_traverse_inorder_recursive(LINKED_TREE_NODE node) {
	if (node != NULL) {
		linked_tree_traverse_inorder_recursive(node->left);
		printf("%d ", node->data);
		linked_tree_traverse_inorder_recursive(node->right);
	}
}

void linked_tree_print_horizontal(LINKED_TREE tree) {
	printf("\n");
	int cnt = 0;
	linked_tree_print_horizontal_recursive(tree->root, cnt);
}

void linked_tree_print_horizontal_recursive(LINKED_TREE_NODE node, int l) {
	if (node != NULL) {
		linked_tree_print_horizontal_recursive(node->right, l + 1);
		int i;
		for (i = 0; i < l; i++) {
			printf("    ");
		}
		printf("%d %d", node->data, node->balancefactor);
		printf("\n");
		linked_tree_print_horizontal_recursive(node->left, l + 1);
	}
}

