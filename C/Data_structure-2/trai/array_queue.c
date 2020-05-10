#include <stdio.h>
#include <stdlib.h>
int front=-1,rear=-1;
int call(int n)
{
	if(n==front-1)
	{
		printf("Queue is full");
		return 0;	
	}
	return 1;

}
void add(int arr[],int n,int data)
{	if(front == -1)
	{
		front=0;
		rear=0;
		arr[front]=data;

	}
	else arr[++front]=data;


}

void delete(int arr[])
{
	arr[rear++]=0;
}
void print(int arr[],int n)
{	
	for(int i=0;i<n;i++)
		printf("\narray [%d] %d",i,arr[i]);
		printf("\n");
}
int main()
{
	int n,sel,*arr;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	arr=calloc(n,sizeof(int));
	while(1)
	{
		printf("\n1. Add \n2. Delete \n3. print \n");
		printf("Enter your choice : ");
		scanf("%d",&sel);

		switch (sel)
		{
			case 1:
			       if(call(n))
			       {
				      printf("Enter element : ");
			      		 scanf("%d",&sel);
					add(arr,n,sel);
			       }
				break;
			case 2:
				if(rear==-1 || rear==front)
				{
					printf("Queue is emapty");
					continue;
				}

			case 3:
				print(arr,n);
				break;
			case 4:
				exit(0);
			default:
				printf("\ninvalid\n");

		
		
		
		}
	}

}
