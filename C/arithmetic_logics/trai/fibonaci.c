#include <stdio.h>
int main()
{
	int n,x=0,y=1,z=0,i=0;
	printf("number of element that you want to print:");
	scanf("%d",&n);
	printf("%d %d",x,y);
	i=i+2;
	while(i<n)
	{
		z=x+y;
		printf(" %d",z);
		x=y;
		y=z;
		i++;

	}
	printf("\n");
}
