#include<stdio.h>
#include<stdlib.h>
#define size 5
void add (int Arr[],int *top,int a)
{
	
if(*top==-1)
	{
      	        (*top)++;
        	Arr[*top]=a;
	}

	else if (*top==size-1)
		{
			printf("Stack is Full");

		}
	else
	{
	(*top)++;
	Arr[*top]=a;
	}	


}
void  delete( int  Arr[],int *top)
	{
	if (*top==size-1)
	{
		printf("DATA IS NOT AVAILABLE");
	}
	else 	
	 Arr[*top]=0;
	(*top)--;
	 }
void display(int  Arr[])
{
	for (int a=0;a<size;a++)
			{
				printf("Array=%d\n",Arr[a]);

			}


}
int main ()
{
	int top=-1;
	int n;
	int data;
	while (1)
	{
	//printf("add Size of an array\n");
	//scanf("%d",&size);
	  int arr[size]; 
	 printf("1:add\n2:delete\n3:print\n4:EXIT\n");
	 scanf("%d",&n);
	 switch(n)
	 {
	    case 1:
		    printf("\n ENTER DATA ");
		    scanf("%d",&data);
		    add(arr,&top,data);
		    break;
	    case 2:
		   delete(arr,&top);
	           break; 
	
	    case 3:
		   display(arr);
	           break;

	    case 4:   exit(0); 
	 
	 
	 }
	
	
	
	}




}
