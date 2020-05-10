#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int a;
	struct node *next;
};
struct node *last;

void add(struct node **head ,int number )
{
	struct node *nexus= (struct node *)malloc(sizeof(struct node ));
	nexus->a=number;
	nexus->next=NULL;
	if(*head==NULL)
	{
		(*head)=nexus;
		nexus->next=nexus;
		last=nexus;
	}
	else 
	{
		last->next=nexus;
		nexus->next=*head;
		last=nexus;
	}
	


}

void delete(struct node **head)
{
	if((*head)->next==(*head))
	{
		free(*head);
		last=NULL;
		(*head)=NULL;


	}
	else 
	{
		struct node *tra;
		tra=*head;
		(*head)=(*head)->next;
		free(tra);
		last->next=*head;
	}

}
void print(struct node *head)
{int i=0;
struct node *tra=head;
do{
	printf("\n%d element is %d",i++,tra->a);
	tra=tra->next;
}while(tra!=head);
printf("\n\n");



}

void reverseprint(struct node *head,int i)
{
//int i=0;
	if(head!=last)
		reverseprint(head->next,++i);
	if(head==last)
		i++;
	printf("\n%d element is %d",i,head->a);

}
int call(struct node *head)
{
	if(head==NULL)
	{	printf("\nQueue is empty \n");
		return 0;
	}
	return 1;
}



int main()
{
	struct node *head=NULL;
	int n;
	while (1)
	{
		printf("1. New node \n2. Delete node \n3. Print \n4. Reverse print \n 5. Exit \n");
		printf ("Enter your choice : ");
		scanf("%d",&n);
		switch (n)
		{
			case 1:
				printf("\n Enter a data");
				scanf("%d",&n);
				add(&head,n);
				break;		
			case 2:	if(call(head))
				delete(&head);
				break;
				
			case 3:	if(call(head))
				print(head);
				break;
			case 5:	if(call(head))
				reverseprint(head,0);
				printf("\n\n");
				break;
			case 4:
				printf("Exit protocol executed \n ");
				exit (0);
			default :
				printf("\nInvalid you fuckerrr !!\n");
		}
	}
}
