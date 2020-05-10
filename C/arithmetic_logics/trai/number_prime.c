#include <stdio.h>

int main()
{
	int n,count=0;
	printf("Enter a number :");
	scanf("%d",&n);
	for (int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			count++;
			printf("\nNumber is a prime number \n");
			return 0;
		}
	//	else 
	//		printf("\n%d",i)a;
	}
	printf("\nNumber is not a prime number \n");
	return 0;

}

