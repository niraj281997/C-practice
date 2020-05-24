#include <stdio.h>
#include <stdlib.h>
int i=1,hd=1;
struct node
{
int val;
struct node *left,*right;
};

struct node * create(int a)
{
	struct node *temp = malloc(sizeof(struct node));
	temp->val=a;
	temp->left=temp->right=NULL;
}
void print(struct node *head)
{
  if (head != NULL) 
    { 
        print(head->left); 
        printf("%d \n", head->val); 
        print(head->right); 
    } 
}
struct node* find(struct node *head,int n)
{
	if(head==NULL)
	{
		printf("\nElement is not available\n");
		return head;
	}
	if(i==1)
	{
		printf("Enter a data ");
		scanf("%d",&n);
		i=0;
	}  
	if(head->val==n)
             printf("\nData is found %d ",n);
        else if((head->val)>n)
             head->left=find(head->left,n);
        else if((head->val)<n)
             head->right=find(head->right,n);
	return head;

}
void clear(struct node **head)
{

}
struct node * add(struct node *head,int n)
{

	if(i==1)
	{
		printf("Enter a data ");
		scanf("%d",&n);
		i=0;
		hd=0;
	}
	
		if(head==NULL)
			return create(n);
		else if((head->val)>n)
			head->left=add(head->left,n);
		else if((head->val)<n)
			head->right=add(head->right,n);
		return head;
	
}

int main()
{
	struct node *head=NULL;
	int n;
	while(1)
	{i=1;	
		printf("1> Add elements \n2> find \n3> print");
		printf("\n5> Exit");
		printf("\n\nEnter your choice : ");
		scanf("%d",&n);
		switch (n)
		{
			case 1:
				if(hd)
					head=add(head,0);
				else 
					add(head,0);
				break;
			case 2:
				find(head,0);
				break;
			case 3:
				print(head);
				break;
			case 5:
				clear(&head);
				exit(0);
		}
	}
}
