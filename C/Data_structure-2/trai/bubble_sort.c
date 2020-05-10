#include<stdio.h>
#include <stdlib.h>

void bubblesort(int *arr,int n)
{
	for (int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
			if(arr[j]>arr[j+1])
			{
				*(arr+j)=*(arr+j)+*(arr+j+1);
				*(arr+j+1)=*(arr+j)-*(arr+j+1);
				*(arr+j)=*(arr+j)-*(arr+j+1);
			
			}
}
int main()
{
	int n,*arr,i=0;
	printf("Elements : ");
	scanf("%d",&n);
	arr=(int *)calloc(n,sizeof(int));
	while(i<n)
	{
		printf("\nArray[%d]= ",i);
		scanf("%d",(arr+i++));
	}
	printf("\n");
	for (i=0;i<n;i++)
		printf("Array[%d]=%d\n",i,arr[i]);
	printf("Bubble sort ");
	bubblesort(arr,n);

	for (i=0;i<n;i++)
		printf("Array[%d]=%d\n",i,arr[i]);
}

