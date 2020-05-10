#include <stdio.h>
#include <stdlib.h>

int binary(int [],int  ,int );
void selection(int arr[],int n)
{

	int i,j,temp;
		for (i=0;i<n-1;i++)
			for (j=i+1;j<n;j++)
			 if(arr[i]>arr[j])
			 {
			 	temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}


	for (i=0;i<n;i++)
		printf("\n %d ",*(arr+i));

}
void bubble(int  arr[],int n)
{
	int i,j,temp;
		for(i=0;i<n-1;i++)
 			 for(j=0;j<n-1;j++)
        			  if(arr[j]>arr[j+1])
         				 {
           				     temp=arr[j];
           				     arr[j]=arr[j+1];
					     arr[j+1]=temp;
        				  }



 for(i=0;i<n;i++)
         printf("\n %d",*(arr+i));

}
      
}

int main()
{
int *arr,size,i,element,index;
	printf("Welecome to The Binary Search Tree");
	printf("How Many element that you want to enter \n");
	scanf("%d",&size);
	arr=(int*)malloc(size*sizeof(int));
	
	printf ("Enter %d Numbers",size);
	for (i=0;i<size;i++)
	{
		printf("\na[%d]=",i);
		scanf("%d",(arr+i));
	
	
	}
	int swi;
	printf("Do you want to elemenyt shorting algorithm ??\n");
	scanf("%d",&swi);
	switch(swi){
	 
		case 1:
			bubble(arr,size);
			break;
		case 2:
			selection(arr,size);
			break;
		case 3:
			printf("No performance \n");
			break;
	
	}
	printf("Enter which element that you want to find\n");
	scanf("%d",&element);
	index=binary(arr,size,element);
	printf("data is found at this position %d",index+1);

	
}
int binary(int arr[],int size ,int element)
{
	int mid;
	int start=0;
	int end=size-1;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==element)
			return mid;
		else if (element<arr[mid])
			end=mid-1;
		else if (element>arr[mid])
			start=mid+1;
	}

}
