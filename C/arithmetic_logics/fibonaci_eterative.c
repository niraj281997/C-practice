#include <stdio.h>
#include <stdlib.h>
int main()
{
        int n,z,x,y;
        x=0;
        y=1;
        printf("Enter a number :");
        scanf("%d",&n);
        printf("%d\n%d",x,y);
	for (int i=0;i<n-2;i++)
        {
        	z=x+y;
       		printf("\n%d",z);
      		x=y;
        	y=z;
        }
}

