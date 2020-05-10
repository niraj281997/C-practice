#include <stdlib.h>
#include <malloc.h>
#include <string.h>

struct node
{
        int a;
        char b[10];
        struct node *next;

};

        struct node  *head=NULL;

void add(struct node **head)
{

        struct node *current,*tra;
        current=malloc(sizeof(struct node));
        tra=*head;
        printf("Enter a intiger :");
        scanf("%d",&(current->a));
        printf("\nEnter a string :\n");
        scanf("%s",(current->b));
	current->next=NULL;
        fflush(stdin);
//      fpurge(stdin);
//      fgets(current->b,10,stdin);
//      gets(current->b);
        current->next=NULL;
                        if(*head==NULL)
                        {
                                *head= current;
                        }
                        else
                        {
                                while(tra->next!=NULL)
                                        tra=tra->next;
                                tra->next=current;
                        }

}



void delete(struct node *head)
{
        struct node *tra,*tra2;
        tra=head;
        if(tra->next==NULL)
        {
                tra=NULL;
                printf("\nSTACK IS EMPATY NOW \n");

        }
        else
        {
        while(tra->next->next!=NULL)
                tra=tra->next;
        free(tra->next);
        tra->next=NULL;
        }


}

void deletest(struct node **head)
{

struct node *temp;
temp=*head;
*head=(*head)->next;
free(temp);
if(*head==NULL)
	printf("\nLinklist last node deleted \n");
     /*   struct node *tra=head;
        if(tra->next==NULL)
        {
        printf("\nSTACK WILL BE  EMAPTY NOW \n");
        tra=NULL;
        }
        else {
                head =tra->next;
                //tra->a=0;
               // strcpy(tra->b,NULL);
                free(tra);

                }
*/

}

void delposition(struct node *head,int n)
{
struct node *temp=head;
for(int i=2;i<n;i++)
	head=head->next;
	temp=head->next;
	head->next=head->next->next;
	free(temp);
}


void reverse(struct node **head)
{
	
    struct node *prevNode, *curNode;

    if(head != NULL)
    {
        prevNode = *head;
        curNode = (*head)->next;
        *head = (*head)->next;
        prevNode->next = NULL; // Make first node as last node
        while(*head != NULL)
        {
            *head = (*head)->next;
            curNode->next = prevNode;
            prevNode = curNode;
            curNode = *head;
        }
        *head = prevNode; // Make last node as head
        printf("SUCCESSFULLY REVERSED LIST\n");
    }


}
void print(struct node *tra)
{
        int i=1;
	while(tra->next!=NULL)
	{
 		printf("%d",i++);
      	 	printf("\n\t\tNumber %d",tra->a);
      		printf("\n\t\tstring %s\n\n",tra->b);
   		tra=tra->next;

	}

        printf("%d",i++);
        printf("\n\t\tNumber %d",tra->a);
1        printf("\n\t\tstring %s\n\n",tra->b);


}


void insert(struct node *head,int position)
{

struct node *tra,*temp=(struct node *)malloc(sizeof(struct node ));
printf("Enter number :");
scanf("%d",&(temp->a));
printf("\nEnter string ");
scanf("%s",temp->b);
temp->next=NULL;
tra=head;
for(int i=2;i<position;i++)
        tra=tra->next;

        temp->next=tra->next;
        tra->next=temp;
}


int main()
{

        int n;
        //struct node  *head=NULL;
while(1){
        printf("\n1. ADD \n2. DELETE AT ENDING  \n3. PRINT \n4. DELETE AT STARTING \n5. Enter at position \n6. Delete at position \n7. REVERSE LINKLIST \n8. EXIT \n\n");
        printf("Enter a number :: ");
        scanf("%d",&n);
        switch(n)
        {
                case 1:
                        add(&head);
                        break;
                case 2:
                        if(head==NULL)
                                printf("STACK IS EMAPTY");
                        else
                                delete(head);
                        break;


                case 3:
                        print(head);
                        break;


                case 4:if(head==NULL)
                                printf("\nSTACK IS EMPATY\n");
                        else
                                deletest(&head);
                        break;

                case 5: print(head);
                        printf("\nEnter position");
                        scanf("%d",&n);
                        insert(head,n);
                        break;
		case 6:
			print(head);
			printf("\nEnter at position \n");
			scanf("%d",&n);
			delposition(head,n);
			break;
		case 7:
			reverse(&head);
			print(head);
			break;

                case 8:
                        printf ("HAVE A GREAT A DAY :-)\n");
                        exit(0);
			break;

                default :
                        printf("\ninvalid\n");
                        break;


        	}
	}

}
