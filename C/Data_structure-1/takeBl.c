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
 
	struct node *t1,*t=(struct node *)malloc (sizeof(struct node));
	t->next=NULL;
	t->prev=NULL;
	printf("\nEnter a Integer data\n");
	scanf("%d",&(t->a));
	printf("\nEnter the String data\n");
	scanf("%s",t->b);

	if(*pera ==NULL)
	{
		*pera=t;
	}
	else
	{
		t1=*pera;
		while(t1->next!=NULL)
		{
			t1=t1->next;
		}
		t1->next=t;
	}
}
void Sadd(struct node **pera)

{


	struct node *t1,*t=(struct node *)malloc (sizeof(struct node));
	t->next=NULL;
	t->prev=NULL;
	printf("\nEnter a Integer data\n");
	scanf("%d",&(t->a));
	printf("\nEnter the String data\n");
	scanf("%s",t->b);

	t->next=*pera;
	*pera=t;


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
void Edelete(struct node **pera)
{


	struct node *t2,*t=*pera;
	while(t->next->next!=NULL)
	{
	t=t->next;
	}
	t2=t->next;
	t->next=NULL;
	free(t2);

}
void delete(struct node **pera )
{
	struct node *t1=*pera;
	*pera=t1->next;
	free(t1);

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
			case 1: add(&head);
				break;
			
			case 2:	Sadd(&head);
				break;
			
			case 3: delete(&head);
				break;
		
			case 4: Edelete(&head);
				break;

			case 5:	print(head);
				break;

		}






	}


}
