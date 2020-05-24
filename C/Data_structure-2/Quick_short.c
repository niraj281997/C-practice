#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
//	(*a)^=(*b)^=(*a)^=(*b);
	int t=*a;
	*a=*b;
	*b=t;
}
int shorting(int arr[],int low,int high)
{
	int pivot,i=low-1;
	pivot=arr[high];
	for(int j=low;j<high;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap((arr+i),(arr+j));
		}
	}
	swap((arr+i+1),(arr+high));
	return (i+1);

}

void Heap(int arr[],int low,int high)
{
	int pi;
	if(low<high)
	{
		pi=shorting(arr,low,high);
		
 	Heap( arr, low, pi-1);
	Heap( arr, pi+1, high);
 
	}
     
}
int main()
{
	//int  n=5,arr[5]={55,66,33,22,11};
	int  n=5,arr[5]={5,2,8,3,1};
//	int  n,*arr;
/*printf("Number of elements : ");
	scanf("%d",&n);
	arr=calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("\narr[%d]= ",i+1);
		scanf("%d",(arr+i));
	}*/
	Heap(arr,0,n-1);
	for(int i=0;i<n;i++)
		printf("\narr[%d]= %d",i+1,arr[i]);
		printf("\n");
	//free(arr);
return 0;
}
