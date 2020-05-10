#include <stdio.h>
#include <stdlib.h>
struct node
{

	int a;
	struct node *left;
	struct node *right;

};
void Add(struct node **head, int number )
{
	struct node *prev=*head,*temp=*head;
	if(*head==NULL)
	{
		*head=(struct node *)malloc(sizeof(struct node ));
		(*head)->a=number;
		(*head)->left=(*head)->right=NULL;
	
	}
	while (temp==NULL)
	{
		if(number>temp->a)
		{
			prev=temp;
			temp=temp->right;
		
		}
		else 
		{
			prev= temp;
			temp=temp->left;
			
		}
	
	
	}
	temp=(struct node*)malloc(sizeof(struct node ));
	temp->a=number;
	if(number>prev->a)
		prev->right=temp;
	else 
		prev->left=temp;


}
void delete(struct node **head)
{
	if((*head)!=NULL)
	{
		if((*head)->left)
			delete(&(*head)->left);
		else
			delete(&(*head)->right);

	}
	free(*head);

}
void infix(struct node *head)
{
	infix(head->left);
	printf("%d",head->a);
	infix(head->right);

}

void postfix(struct node *head)
{	printf("%d",head->a);
	postfix(head->left);
	postfix(head->right);
}

void prefix(struct node *head)
{	prefix(head->left);
	prefix(head->right);
	printf("%d",head->a);


}
int main()
{
struct node *head=NULL;
int n ;
while(1)
{	printf("1. ADD \n2. Delete \n3. infix \n4. Prefix \n5. Postfix \n6. Exit\n");
	printf("Enter  a number :");
	scanf("%d",&n);
	switch (n)
	{
		case 1:
			printf("\nEnter a data :");
			scanf("%d",&n);
			Add(&head,n);
			break;
		case 2:
			delete(&head);
			break;
		case 3:
			infix(head);
			break;
		case 4:
			postfix(head);
			break;
		case 5:
			prefix(head);
			break;
		case 6:	printf("Have a nice day");
			exit(0);
		
	}

}



}
