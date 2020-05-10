#include <stdio.h>
#include <stdlib.h>
void insertion (int array[], int n)
{
	int i,j,temp;
	for (i=0;i<n;i++)
	{
		temp=array[i];
		for (j=i-1;j>=0 && array[j]>temp;j--)
			array[j+1]=array[j];
		array[j+1]=temp;
	}
}
int main()
{
	int n,*arr,i=0;
	printf("number of elements are : ");
	scanf("%d",&n);
	arr=(int *)calloc(n,sizeof(int));
	while(i<n)
	{
		printf("\narray[%d]",i);
		scanf("%d",(arr+i++));
	}
	printf("shorted data by insertion ");
	insertion(arr,n);
	i=0;
	while(i<n)
		printf("\narray[%d] = %d",i++,*(arr+i));
		printf("\n");
}
