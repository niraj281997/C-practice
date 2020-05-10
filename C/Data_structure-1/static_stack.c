#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

static int t;
int top=-1;
int  push(int []);
void pop(int []);
void print(int []);

int main()
{
	int *arr,n,yy;
	printf(" Enter the Number of the elements ");
	scanf("%d",&t);
	arr=(int *)malloc(t*sizeof(int));
	while(1)
	{
		printf(" 1.PUSH\n 2.POP\n 3.PRINT\n 4.EXIT \n\t");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				yy=push(arr);
				break;
			case 2:
				pop(arr);
				break;
			case 3:
				print(arr);
				break;
			case 4:
				exit(0);
		}



	}

}

void print(int arr[])
{

	if(top==-1)
	printf("\n\nStack is empty Nothing to Print\n\n");
	for (int i=0;i<=top;i++)
	{
		printf("\n%d",*(arr+i));
	}
}

int push(int arr[])
{	
	if(top==t-1)
	{
		printf("\n\n\n  SIZE IS FULL \n\n\n");
		return 1;
	}
	int temp;
	printf("\n\nEnter Data ");
	scanf("%d",&temp);
	top++;
	*(arr+top)=temp;
	
	
	
}
void pop(int arr[])
{
	if(top==-1)
	{
		printf(" Stack empty\n\n ");
	}	
	else	*(arr+top)=0;
		*(arr+(--top));

		

}
