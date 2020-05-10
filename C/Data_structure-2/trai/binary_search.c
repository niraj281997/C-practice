#include <stdio.h>
#include <stdlib.h>
int search(int arr[],int temp, int left ,int right)
{
	if(left>right)
		return -1;
	
		int mid=(left+right)/2;
		if(arr[mid]==temp)
			return mid;
		else if(temp<arr[mid])
			search(arr,temp,left,mid-1);
		else if (temp>arr[mid])
			search(arr,temp,mid+1,right);


}
int main()
{

	int n=5,*arr,temp,i=0,j=0,brr[5]={11,22,33,44,55};
	printf("Enter a number ");
	scanf("%d",&n);
	arr=(int *)calloc(n,sizeof(int));
	for (i=0;i<n;i++)
	{
		printf("\narray[%d]= ",i);
		scanf("%d",(arr+i));
	}
	printf("\nInsertion sort ");
	for (i=0;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0 && arr[j]>temp;j--)
			arr[j+1]=arr[j];
		arr[j+1]=temp;

	}
	for (i=0;i<n;i++)
		printf("\narray[%d]= %d ",i,*(arr+i));
/*	for (i=0;i<n;i++)
		printf("\narray[%d]= %d ",i,*(brr+i));*/
	printf("\nEnter a number that you want to find");
	scanf("%d",&temp);
	int s=0;
	//int ret=search(brr,temp,s,n-1);
	int ret=search(arr,temp,0,n-1);
	if(ret>=0)
		printf("\nData %d is found on %d index\n",arr[ret],ret);
	else 
		printf("\nData is not available \n ");
}

