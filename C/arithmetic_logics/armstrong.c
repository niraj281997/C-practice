#include <stdio.h>
#include <stdlib.h>
int rec (int ,int );
int main()
{
int compare;
int n,number,rem,i=0;
int *arr,*barr,sum=0;
printf("\nEnter the number : ");
scanf("%d",&number);
compare=number;
printf("\nsize of elememt : ");
scanf("%d",&n);
barr=arr=malloc(n*sizeof(int));
while(number!=0)
{
	rem=number%10;
	arr[i]=rem;
	++i;
	number=number/10;
}
for (i=0;i<n;i++)
{
	printf("\narray data arr[%d] =%d ",i,arr[i]);

}
	printf("\n\n");

	for (i=0;i<n;i++)
	{
		int temp;
		temp=arr[i];
		barr[i]=rec(temp,n);
	}

	for (i=0;i<n;i++)
	{
	printf("\narray data brr[%d] =%d ",i,barr[i]);
	sum=sum+barr[i];
	}

printf(" summation of array  %d\n " ,sum);

if(sum==compare)
	printf("\nNumber is armstrong\n");
else 
	printf("\nNumber is not armstrong\n");
}

int rec(int a, int b)
{
if(b==0)
	return 1;
else 
	return a*rec(a,b-1);
}
