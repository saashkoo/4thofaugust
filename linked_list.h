#pragma once
#include <stdio.h>
#include <stdlib.h>


struct a_t{
	long data;
	struct a_t* next;
}typedef Node;


void pushb(long d, Node**head);
void pop_front(Node **head_pp);
void print_ll(Node *head);
void pushfr(long d, Node**head);
void pop_back(Node **head);
void reverse(Node **head);
