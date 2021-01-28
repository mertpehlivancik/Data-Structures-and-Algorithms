#include "h_linked_binary_tree.h"
#include "h_linked_list.h"
#include <string.h>
#define TRIAL 100

unsigned long myRandom() {
	return ((unsigned long) random()) * ((unsigned long) random());
}

//void decode_morsecode(LINKED_TREE tree) {
//	char *str =
//			".../*.**/**.**/../..../*.*/**..**/**../**.**./..../**...*/**.**/..../*****/**.**/***/..../***.*/**..**/**./**.**./**.*./..../**.***/**../**.**/**.***/**.*.*/**../..../**...*/**./**../.*.*./..../*.*/**..**/**../**.**./..../***.*/**..**/**../*****/..../*/***../**../..../***./**..**/**.**/***.*/..../***.*/**..**/***../**.**/***/**..*/**..**/..../***.*/**..**/**../..../**..**/**../*/***../***.*/..../**..../*****/..../***.*/**..**/**../..../**..../***/**.*.*/**.*.*/**../***.*/..../**.**/**..*./..../*/..../**.***/**./***./***.*/**.**/**.*.*/.*.*./..../*...*/**.**/../..../*.*/**..**/**../**.**./..../***.*/**..**/**../*****/..../*/***../**../..../***../*/****./*/**..*/**../**...*/..../**..../*****/..../*/**.**./..../**./**.**./**.../***/***../*/**..../**.*.*/**../..../**...*/**./***./**../*/***./**../.*.*./..../*...*/**.**/../..../*.*/**..**/**../**.**./..../***.*/**..**/**../*****/..../**...*/***../**./**.**./**.*./..../*/..../***./**.**/***/**.***/..../**.*/*/**...*/**../..../**..*./***../**.**/**.*/..../*/..../**.***/**.**/**./***./**.**/**.**./**.**/***/***./..../**.*/***/***./**..**/***../**.**/**.**/**.*/....*/.*.*./..../*...*/**.**/....*/..../.***/***.*/..../**./***./..../****/**..**/**../**.**./../../../..../***.*/**..**/**../*****/..../*/***../**../..../**..*./**.**/***../**..*/**.**/***.*/***.*/**../**.**./../..../.**./****./**../**.**./..../*/**..*./***.*/**../***../..../.***/..../*/**.*/..../**..*/**.**/**.**./**../...*/..../**.*/*****/..../**...*/***../**../*/**.*/..../****/**./**.*.*/**.*.*/..../**.../**.**/**.*/**../..../***.*/***../***/**../../..../*.*../**..**/**../..../*/**./**.*.*/**./**.**./**..*/..../**..**/**../*/***../***.*/***./..../**.**/**..*./..../***.*/**..**/**../..../**.***/**../**.**/**.***/**.*.*/**../..../****/**./**.*.*/**.*.*/..../**..../**../..../**.../***/***../**../**...*/../.../..../...**/..../.**../**.**/**.../***.*/**.**/***../..../.***./**./**.*.*/***/**.*.*/***/**.*./..../...../.../.***/..../**.*.*/**.**/****./**../..../**..**/**../***../**.**/**../***./...*/..../**..../***/***.*/..../.***/..../**...*/**.**/**.**./...*./***.*/..../****/*/**.**./***.*/..../***.*/**.**/..../**..../**../..../**.**/**.**./**../../..../.**../**.**/..../*****/**.**/***/..../**../****./**../**.**./..../**.*./**.**./**.**/****/..../****/**..**/*/***.*/..../*/..../**..**/**../***../**.**/..../**./***./....*/.*.*./..../.**.*/**.**/***../..../**../*****./*/**.*/**.***/**.*.*/**../...*/..../*****/**.**/***/..../**..**/*/****./**../..../***./**.**/**.*/**../..../**.*/**../*/***.*/../..../*..*./**./***../*/***.*/**../***./..../****/**./**.*.*/**.*.*/..../**..*./**../*/***./***.*/..../**.**/**.**./..../***.*/**..**/**../..../**.*/**../*/***.*/...*/..../**..../***/***.*/..../***.*/**..**/**../..../**..**/**../***../**.**/..../****/**./**.*.*/**.*.*/..../**...*/**./***./***.*/***../**./**..../***/***.*/**../..../**./***.*/..../*/**.*/**.**/**.**./**..*/..../***.*/**..**/**../..../**.***/**../**.**/**.***/**.*.*/**../....*/..../.***/..../****/*/**.**./***.*/..../***.*/**.**/..../**../*/***.*/..../***.*/**..**/**../..../**.*/**../*/***.*/....*/.../..../...**/..../.*.*./**.**/**.**./**.*./**../*****/..../.**../../..../*..../***/**..*./**..*./*****/";
//	int i = 0;
//	LINKED_TREE_NODE cur = tree->root;
//	while (i != strlen(str)) {
//		if (str[i] == '*') {
//			cur = cur->right;
//			i++;
//		} else if (str[i] == '.') {
//			cur = cur->left;
//			i++;
//		} else {
//			printf("%c ", (char) cur->data);
//			fflush(stdout);
//			cur = tree->root;
//			i++;
//		}
//	}
//}

int main(void) {
	LINKED_TREE mytree;
	mytree = linked_tree_init();
//	srand(time(NULL));
//	int i;
//	for (i = 0; i < 25; i++) {
//		linked_tree_insert_rec(mytree, rand() % 1000);
//	}

	int data1, data2, data3, data4, data5, data6, data7, data8, data9, data10;
	data1 = 5;
	data2 = 2;
	data3 = 7;
	data4 = 1;
	data5 = 4;
	data6 = 6;
	data7 = 9;
	data8 = 3;
	data9 = 16;
	data10 = 15;

	linked_tree_insert(mytree, data1);
	linked_tree_insert(mytree, data2);
	linked_tree_insert(mytree, data3);
	linked_tree_insert(mytree, data4);
	linked_tree_insert(mytree, data5);
	linked_tree_insert(mytree, data6);

//	linked_tree_insert_rec(mytree, data1);
//	linked_tree_insert_rec(mytree, data2);
//	linked_tree_insert_rec(mytree, data3);
//	linked_tree_insert_rec(mytree, data4);
//	linked_tree_insert_rec(mytree, data5);
//	linked_tree_insert_rec(mytree, data6);
//	linked_tree_insert_rec(mytree, data7);
//	linked_tree_insert_rec(mytree, data8);
//	linked_tree_insert_rec(mytree, data9);
//	linked_tree_insert_rec(mytree, data10);

//linked_tree_create_balanced_tree(mytree);

	linked_tree_print_horizontal(mytree);

//
//	 int data1, data2, data3, data4, data5, data6, data7, data8, data9, data10,
//	 data11, data12, data13, data14, data15, data16, data17, data18,
//	 data19;
//	 data1 = 14;
//	 data2 = 12;
//	 data3 = 65;
//	 data4 = 10;
//	 data5 = 70;
//	 data6 = 40;
//	 data7 = 11;
//	 data8 = 13;
//	 data9 = 41;
//	 data10 = 68;
//	 data11 = 9;
//	 data12 = 89;
//	 data13 = 100;
//	 data14 = 50;
//	 data15 = 110;
//	 data16 = 120;
//	 data17 = 18;
//	 data18 = 71;
//	 data19 = 19;
//	 int data20 = 20;
//	 int data40 = 40;
//	 int data60 = 60;
//	 int data80 = 80;
//
//	 LINKED_LIST list;
//	 list = linked_list_init();
//	 linked_list_append(list, &data20);
//	 linked_list_append(list, &data40);
//	 linked_list_append(list, &data60);
//	 linked_list_append(list, &data80);
//
//	 linked_list_print(list);
//	 LINKED_TREE tree;
//	 tree = linked_tree_init();
//
//	 linked_tree_insert(tree, &data1);
//	 linked_tree_insert(tree, &data2);
//	 linked_tree_insert(tree, &data3);
//	 linked_tree_insert(tree, &data4);
//	 linked_tree_insert(tree, &data5);
//	 linked_tree_insert(tree, &data6);
//	 linked_tree_insert(tree, &data7);
//	 linked_tree_insert(tree, &data8);
//	 linked_tree_insert(tree, &data9);
//	 linked_tree_insert(tree, &data10);
//	 linked_tree_insert(tree, &data11);
//	 linked_tree_insert(tree, &data12);
//	 linked_tree_insert(tree, &data13);
//	 linked_tree_insert(tree, &data14);
//	 linked_tree_insert(tree, &data15);
//	 linked_tree_insert(tree, &data16);
//	 linked_tree_insert(tree, &data17);
//	 linked_tree_insert(tree, &data18);
//	 linked_tree_insert(tree, &data19);
//
//	 linked_tree_print_horizontal(tree);
//	 //linked_tree_delete(tree->root, &data19);
//	 //linked_tree_print_horizontal(tree);
//
//
//	 linked_tree_create_balanced_tree(tree);
//	 printf("\n");
//	 linked_tree_print_horizontal(tree);
//

	linked_tree_free(mytree);
	return 0;
}
