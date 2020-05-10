#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
struct node 
{

	int a;
	char b[20];
	struct node *next;
	struct node *prev;

};

void add(struct node **pera)
{
 
	struct node *t=(struct node *)malloc (sizeof(struct node));
	t->next=NULL;
	t->prev=NULL;
	printf("\nEnter a Integer data\n");
	scanf("%d",&(t->a));
	printf("\nEnter the String data\n");
	scanf("%s",t->b);


	printf("\n String %s",t->b );

	if(*pera==NULL)
	*pera=t;
	//printf("hiiii\n\n");
	
	else
	{
		struct node *tra=*pera;
		while(tra->next!=NULL)
		{
			tra=tra->next;
		}
		tra->next=t;

	
	}

}


void eadd(struct node **pera)
{
struct node *t=(struct node *)malloc(sizeof(struct node));
	printf("\nEnnter intiger ");
	scanf("%d",&(t->a));
//fpurge();
	printf("\nEnter string ");
	scanf("%s",t->b);
		t->next=*pera;
		*pera=t;





}

void delete (struct node **head)
{
	struct node *t1=*head;
		*head=t1->next;
		
		free(t1);
	


}

void Edelete( struct node **head)
{
	struct node *t1,*t2;
	       	t1=*head;
	while(t1->next->next!=NULL)
	{
		t1=t1->next;
	}
	t2=t1->next;
	t1->next=NULL;
	free(t2);





}	
void print(struct node *head)
{
struct node *t1=head;
while(t1->next!=NULL)
{	

	printf("%d\n",t1->a);
	printf("%s\n",t1->b);

	t1=t1->next;

}

	printf("%d\n",t1->a);
	printf("%s\n",t1->b);




}

void main()
{
	struct node *head=NULL;
	int swi;
	while(1)
	{	printf("\n1.Enter at the end\n2.Enter at Begining\n 3. delete at beginnig\n 4.delete at end");
		printf("\nenter the choice \n");
		scanf("%d",&swi);
		switch(swi)
		{
			case 1:
				add(&head);
				break;
			case 2:	eadd(&head);
				break;	
			case 3:
				delete(&head);
				break;
			case 4:
				Edelete(&head);
				break;
			case 5:
				print(head);
				break;

		}

	
	
	
	
	
	}


}
