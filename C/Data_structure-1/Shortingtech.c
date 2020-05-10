#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int *Bubbleshort (int [],int );
int *SelectionShort(int [],int ); 

int temp,i,j;

int main()
{
 int n;
printf("Enter the Number of Integer that you want to enter \n");
scanf("%d",&n);
int *arr= (int *)malloc(n*sizeof(int));

for(i=0;i<n;i++)
	{
	printf("Enter %d's element ",i);
	scanf("%d",(arr+i));
	}	

for(i=0;i<n;i++)
	{
	printf(" \n\t%d element Value %d ",i,*(arr+i));
	}




	arr =SelectionShort(arr,n);
	printf("\n\t After Selection Shorting \n");
	//arr=Bubbleshort(arr,n);
	//printf("\n\t After Bubble Shorting \n");
	for (i=0;i<n;i++)
	printf(" \n\t%d element Value %d ",i,*(arr+i));

return 0;
}

int *Bubbleshort(int arr[],int n)
{

	for (i=0;i<n-1;i++)
		for (j=0;j<n-1;j++)
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
			}



	
 return arr;
}

int *SelectionShort( int arr[],int n)
{

	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;	
			}

 return arr;

}
