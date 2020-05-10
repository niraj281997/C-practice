#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node 
{
	int a;
	char b[10];
	struct node *next;

};


void add(struct node **head)
{
	
	struct node *current,*tra;
	current=(struct *node )malloc(sizeof(struct node));
	tra=*head;
	printf("Enter a intiger :");
	scanf("%d",&(current->a));
	printf("\nEnter a string :\n");
	scanf("%s",(current->b));
	current->next=NULL;
			if(*head==NULL)
			{
				*head= current;
			}
			else 
			{
				while(tra->next!=NULL)
					tra=tra->next;
				tra=current;
			
			
			}

}



void delete(struct node *head)
{
	struct node *tra1,*tra2;




}
int main()
{

	struct node  *head=NULL;
	int n;
while(1){
		printf("Enter a number :: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			add(&head);
			break;
		case 2:
			delete(head);
			break;
	
	
	
	}
}
	
}

