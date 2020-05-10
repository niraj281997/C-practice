#include <stdio.h>
#include <stdlib.h>
#define MAX 5
static int i=0;
int a[MAX]={0};
void add(int a[])
{
	if(i < MAX)
	{
		printf("Enter data a[%d]",i);
		scanf("%d",(a+i++));
	}
	else
	       	printf("data is full");
	


}
void delete(int a[])
{
	if(i==0)
		printf("\nall member eliments are deleted : \n");
	else
		a[i--]=0;


}
void print(int a[])
{
	int j=0;
	while(j<i)
		printf("array[%d]=%d",j,*(a+j++));
}

int main()
{
	int n;
	while(1)
	{
	printf("\nEnter a number : ");
	printf("\n1. Add\n2. Delete \n3. print\n");
	scanf("%d",&n);
	switch (n)
	{
		case 1:add(a);
			break;
		case 2:delete(a);
			break;
		case 3:print(a);
			break;
		default:
			printf("Enter appropriate number");

	
	
	}



	}

}
