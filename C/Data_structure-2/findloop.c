// C program to detect and remove loop in linked list 
#include <stdio.h> 
#include <stdlib.h> 

/* Link list node */
struct Node { 
	int data; 
	struct Node* next; 
}; 


/* This function detects and removes loop in the list 
If loop was there in the list then it returns 1, 
otherwise returns 0 */
int detectAndRemoveLoop(struct Node* list) 
{ 
	struct Node *slow_p = list, *fast_p = list; 

	while (slow_p && fast_p ) { 
		slow_p = slow_p->next; 
		fast_p = fast_p->next->next; 

		/* If slow_p and fast_p meet at some point then there 
		is a loop */
		if (slow_p == fast_p) { 
			/* Return 1 to indicate that loop is found */
			return 1; 
		} 
	} 

	/* Return 0 to indeciate that ther is no loop*/
	return 0; 
} 

/* Function to print linked list */
void printList(struct Node* node) 
{ 
	while (node != NULL) { 
		printf("%d ", node->data); 
		node = node->next; 
	} 
} 

struct Node* newNode(int key) 
{ 
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); 
	temp->data = key; 
	temp->next = NULL; 
	return temp; 
} 

/* Drier program to test above function*/
int main() 
{ 
	struct Node* head = newNode(50); 
	head->next = newNode(20); 
	head->next->next = newNode(15); 
	head->next->next->next = newNode(4); 
	head->next->next->next->next = newNode(10); 

	/* Create a loop for testing */
	head->next->next->next->next->next = head->next->next; 

	int x=detectAndRemoveLoop(head); 
	if(x==1)
		printf("Loop is here");
	else printf("Loop is not here");

//	printList(head); 
	return 0; 
} 

