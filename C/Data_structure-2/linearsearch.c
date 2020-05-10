#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[]={10,20,30,40,50,60,70,80,90,100};
        int element,count,i=count=0;
        int n =(sizeof(a)/sizeof(int));
//	printf("size of n : %d",n);
        printf("Enter number that you want to find :\n");
        scanf("%d",&element);
while(i<n)
	{
		if(a[i]==element)
		{
			count++;
			 break;
		}
		i++;
		//printf("%d\n",i);
	}



if(count==0)
	printf("\ndata not found \n");
else
	printf("data is found at %d position ",i);
}
