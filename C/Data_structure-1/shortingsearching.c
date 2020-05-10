#include <stdio.h>
#include <stdlib.h>

int shorting(int *p1,int n)
{
int i,j;
for (i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		if(p1[i]>p1[j])			//--> Bubb;
		{
		*(p1+i)=(*(p1+i))^(*(p1+j));	
		*(p1+j)=(*(p1+i))^(*(p1+j));	
		*(p1+i)=(*(p1+i))^(*(p1+j));	
		}
	
	
	}

/*
for (i=0;i<n-1;i++)
	for (j=0;j<n-1;j++)
		if(p1[j]>p1[j+1])
	{
	
	int temp=p1[j];
	p1[j]=p1[j+1];
	p1[j+1]=temp;
	//	*(p1+j)=(*(p1+j+1))^(*(p1+j));	
	//	*(p1+j+1)=(*(p1+j+1))^(*(p1+j));	
	//	*(p1+i)=(*(p1+j+1))^(*(p1+j));	
	
	
	}*/
}
int binarysearch(int *p1,int n , int e)
{

int down,up,mid;
down=0;
up=n-1;
while(down<=up)
{

	mid=(up+down)/2;
	if(e==p1[mid])
		return mid;
	if(e>p1[mid])
		down=mid+1;
	if(e<p1[mid])
		up=mid-1;


}
return -1;



}
int main()
{

 int n,i;
 int *p1;
 printf("Enter number of elements:");
 scanf("%d",&n);
 p1=calloc(n,sizeof(int ));
 for(i=0;i<n;i++)
 {
 	printf("\nEnter ARRAYth %d's elements :",i);
	scanf("%d",(p1+i));
 
 }

 for(i=0;i<n;i++)
 {

	printf(" \nEntered %d element %d",i,*(p1+i));
 }

 shorting(p1,n);
printf("After shorting");
 for(i=0;i<n;i++)
 {
	printf(" \nEntered %d element %d",i,*(p1+i));
 }
int a;
printf("Enter the elemnents : which you want to find:");
scanf("%d",&a);
printf("element found on %d position ",binarysearch(p1,n,a));



}
