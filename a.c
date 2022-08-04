//xxd -> cat, no v 16 broina sistema

#include <stdio.h>
#include <stdlib.h>
#include"linked_list.h"


int main(){
	Node *head = (Node*)NULL;
	pushb(13, &head);
	pushb(15, &head);
	pushfr(16, &head);
	pushfr(16, &head);
	pushfr(16, &head);
	pushfr(16, &head);
	print_ll(head);
	printf("\n");
	reverse(&head);
	print_ll(head);
	return 0;
}
