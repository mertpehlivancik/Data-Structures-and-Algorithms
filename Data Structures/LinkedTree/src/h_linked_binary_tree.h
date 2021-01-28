#include <stdio.h>
#include <stdlib.h>

typedef struct LINKED_TREE_NODE_s *LINKED_TREE_NODE;
typedef struct LINKED_TREE_NODE_s {
	LINKED_TREE_NODE right; /*Do not alter -- DSW--*/
	LINKED_TREE_NODE left;
	int data;
	int balancefactor;
} LINKED_TREE_NODE_t[1];

typedef struct LINKED_TREE_s *LINKED_TREE;
typedef struct LINKED_TREE_s {
	LINKED_TREE_NODE root;
} LINKED_TREE_t[1];

LINKED_TREE linked_tree_init();
LINKED_TREE_NODE linked_tree_node_init(int data);
void linked_tree_free(LINKED_TREE tree);
int compare_data(int data1, int data2);
void linked_tree_insert(LINKED_TREE tree, int data);
void linked_tree_insert_recursive(LINKED_TREE_NODE node, int data);
void linked_tree_insert_rec(LINKED_TREE tree, int data);
LINKED_TREE_NODE linked_tree_delete(LINKED_TREE_NODE node, int data);
void linked_tree_traverse_inorder(LINKED_TREE tree);
void linked_tree_traverse_inorder_recursive(LINKED_TREE_NODE node);
void linked_tree_print_horizontal_recursive(LINKED_TREE_NODE node, int l);
void linked_tree_print_horizontal(LINKED_TREE tree);
void linked_tree_make_backbone(LINKED_TREE tree);
void linked_tree_make_left_rotation(LINKED_TREE tree, int t);
void linked_tree_create_balanced_tree(LINKED_TREE tree);
