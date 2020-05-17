#include <stdio.h>
#include <stdlib.h>
static int  pos=0;
struct node 
{
	int Number;
	struct node *prev;
	struct node *next;
};
void add(struct node **head,int n)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node ));
	temp->prev=NULL;
	temp->next=NULL;
	temp->Number=n;

	if(*head==NULL)
	*head=temp;
	else 
	{
		struct node *tra;
		tra=*head;
		while(tra->next!=NULL)
			tra=tra->next;
		tra->next=temp;
		temp->prev=tra;
	}
	pos++;
}

void posadd(struct node *head,int n,int p)
{
	struct node *tra=head;
	struct node *temp=(struct node *)malloc(sizeof(struct node ));
	temp->prev=NULL;
	temp->next=NULL;
	temp->Number=n;
	int i=1;
	if(p>pos)
	{
		printf("\nPosition is unacceptable\n");

	}
	
	else
       	{
		while(i<p-1)
		{
			tra=tra->next;
			i++;
		}
		temp->next=tra->next;
		temp->prev=tra;
		tra->next=temp;
		temp->next->prev=temp;
		pos++;
	}


}
void delpos(struct node *head,int p,struct node **head1)
{
	struct node *t,*tra=head;
	if(p==1)
	{
		(*head1)=tra->next;
		(*head1)->prev=NULL;
		free(tra);
		--pos;
	}
	int i=1;
	if(p>pos)
	{
		printf("\nPosition is unacceptable\n");

	}
	else if(p==pos)
	{
		while(tra->next!=NULL)
		tra=tra->next;
		t=tra->next;
		free(t);
		--pos;

	}
	else
       	{
		while(i<p-1)
		{
			tra=tra->next;
			i++;
		}
		t=tra->next;
		tra->next=tra->next->next;
		tra->next->prev=tra;
		free(t);
		--pos;
	}
}
	
void reverse (struct node *head)
{
int i=1;
struct node *tra=head;
	while(head->next!=NULL)
	{
		head=head->next;
	}
	while(head->prev!=NULL)
	{
		printf("\t%d--> %d\n",i++,head->Number);
		head=head->prev;
	}
	if(head->prev==NULL)
		printf("\t%d--> %d\n",i++,head->Number);


}
void deletefirst(struct node **head)
{	--pos;
	struct node *tra=*head;
	if(tra->next==NULL)
	{
		printf("\nLast node is deleted\n");
		*head=NULL;
	}
	else
	{
		*head=tra->next;
		(*head)->prev=NULL;
		free(tra);
	}
}
void Reverse(struct node **head)
{
	struct node* prev = NULL;
    struct node* current = *head;
    struct node* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head = prev;

	current=*head;
	next=prev=NULL;
    while (current != NULL) {
        // Store next
        next = current->prev;

        // Reverse current node's pointer
        current->prev = prev;

        // Move pointers one position ahead.
        prev = current;
       current = next;
    }




}
void deleteend(struct node *head,struct node **head1)
{
	struct node *tra=head;
	if((*head1)==NULL)
		printf("No data is available");
	else 
	{
		if(tra->next==NULL)
		{
			tra=*head1;
			printf("\nLast node is deleted\n");
			free(tra);
		
		}
	else	
	{
		while(head->next->next!=NULL)
			head=head->next;
		
			tra=head->next;
			head->next=NULL;
			tra->prev=NULL;
			free(tra);
	}

	}


}
void firstadd(struct node **head,int n)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->Number=n;
	temp->prev=NULL;
	if((*head)==NULL)
	{
		temp->next=NULL;
		temp->prev=NULL;
	}
	else{
		temp->next=*head;
		(*head)->prev=temp;
		*head=temp;
	}
	pos++;
}

void print(struct node *tra)
{	int i=1;
	while(tra->next!=NULL)
	{
		printf("\t%d--> %d\n",i++,tra->Number);
		tra=tra->next;
	}
		printf("\t%d--> %d\n",i++,tra->Number);

}
void clear (struct node *head)
{
	struct node *tra=head;
	if(head==NULL)
	{
		printf("No Data was add till now\n ");
	}
	else if(head->next==NULL)
	{
		free(tra);
	}
	else {
	while(head->next!=NULL)
	{
		tra=head;
		head=head->next;
		free(tra);
	}
	free(head);
	}

}

int main()
{
	struct node *head=NULL;
	int n,p1;
	while(1)
	{
		printf("1> Enter at first \n2> print \n3> first add\n4> position add \n5> delete first \n6> deleposition\n7> delete at end \n8> Reverse print");
		printf("\n9> Reverse Linklist \n10> Exit");
		printf("\nEnter a number : ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("\nEnter a number ");
				scanf("%d",&n);
				add(&head,n);
				break;
			case 2:
				print(head);
				break;
			case 3:
				printf("\nEnter a number ");
				scanf("%d",&n);
				firstadd(&head,n);
				break;
			case 5:
				deletefirst(&head);
				break;
			case 4:
				printf("\nEnter position:: ");
				scanf("%d",&p1);
				printf("\nEnter data:: ");
				scanf("%d",&n);
				posadd(head,n,p1);
				break;
			case 6:
				printf("\nEnter position:: ");
				scanf("%d",&p1);
				delpos(head,p1,&head);
				break;
			case 7:
				deleteend(head,&head);
				break;
			case 8:
				reverse(head);
				break;
			case 9:
				Reverse(&head);
				break;
			case 10:printf("Exit protocol executed \n");
				clear(head);
				exit(1);

			default:
				printf("\nAnnoying input\n");

		}	
	}	
}
