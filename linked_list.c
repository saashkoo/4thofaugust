#include"linked_list.h"

void pushb(long d, Node**head){
	Node * a = malloc(sizeof(Node));
	a->data = d;
	a->next = NULL;
	if (NULL == *head){
		*head = a;
		return;
	}
	Node * currnode = *head;
	while(currnode->next != NULL){
		currnode = currnode->next;
	}
	currnode->next = a;
}

void pop_front(Node **head_pp) {
    // Error is linked list is empty
    if(!(*head_pp)) {
        perror("Pop_front: Linked list is empty\n");
        return;
    }
    Node *deleted_node = *head_pp;
    *head_pp = (*head_pp)->next;
    free(deleted_node);
}

void print_ll(Node *head) {
    if(!head) {
        printf("Empty linked list\n");
        return;
    }
    Node *curNode = head;
    while(curNode) {
        printf("addr: %p,  data: %ld,   next: %p\n",
            curNode, curNode->data, curNode->next);
        curNode = curNode->next;
    }
}

void pushfr(long d, Node**head){
	Node * a = malloc(sizeof(Node));
	a->data = d;
	a->next = *head;
	*head = a;
}


void pop_back(Node **head){
	if(*head == NULL){return;}
	Node *a = *head;
	Node *sec_t_last;
	if(a->next == NULL){
		*head = NULL;
		free(a);
		return;
	}
	sec_t_last = *head;
	a = a->next;
	while(a->next != NULL){
		a = a->next;
		sec_t_last = sec_t_last->next;
	}
	sec_t_last -> next = NULL;
	free(a);
}


void reverse(Node **head){
	Node ** newhead = NULL;
	Node *a = *head;
	Node *reverse_last = NULL;
	if(*head == NULL){return;}
	if(a->next == NULL){return;}
	while(a->next != NULL){
		a = a->next;
	}
	newhead = &a;
	reverse_last = a;
	reverse_last->next = NULL;
	while(reverse_last != *head){
		Node *a = *head;
		while(a->next != reverse_last){
			a = a->next;
		}
		reverse_last->next = a;
		reverse_last = a;
		reverse_last->next = NULL;
	}
	*head = *newhead;
}
