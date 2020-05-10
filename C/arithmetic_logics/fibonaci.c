#include <stdio.h>
#include <stdlib.h>

int fib(int );
int main()
{	int number;
	printf("Enter the number of elements \n");
	scanf("%d",&number);
	for (int i=0;i<number;i++)
	{
		printf("\n%d",fib(i));
	}
	printf("\n");

}

int fib(int a)
{
	if(a==0||a==1)
		return 1;
	else 
		return (fib(a-1)+fib(a-2));


}
	
