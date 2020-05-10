#include <stdio.h>
#include <stdlib.h>

void insertion(int arr[] ,int n)
{
	int i,j,temp;
	for (i=0;i<n;i++)
	{
		temp=arr[i];
		for (j=i-1; j>=0 && arr[j]>temp;j--)
			arr[j+1]=arr[j];
		arr[j+1]=temp;
	}


}

int main ()
{
	int n,*arr,i=0;
	printf("Number of elements : ");
	scanf("%d",&n);
	arr=(int *)malloc(sizeof(int )*n);
	while(i<n)
	{
		printf("array[%d] ",i);
		scanf("%d",(arr+i++));
	
	}
	insertion(arr,n);
	
printf("\nShorted data ");
	i=0;
	while(i<n)
		printf("\narray[%d] = %d",i++,*(arr+i));
		printf("\n");
		free(arr);
}
