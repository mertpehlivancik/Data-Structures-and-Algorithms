/*
 ============================================================================
 Name        : LinkedList.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

void printList(struct node *p) {
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
}

struct node* push(struct node *head, int data) {
	struct node *node;
	node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->next = head;
	return node;
}

int main(void) {
	struct node *head = NULL;
	struct node *first = NULL;
	struct node *second = NULL;

	head = (struct node*) malloc(sizeof(struct node));
	first = (struct node*) malloc(sizeof(struct node));
	second = (struct node*) malloc(sizeof(struct node));

	head->next = first;
	head->data = 0;
	first->data = 1;
	first->next = second;
	second->data = 2;
	second->next = NULL;

	struct node* newHead = NULL;
	newHead = push(head,5);
	printList(newHead);
	return 0;
}
