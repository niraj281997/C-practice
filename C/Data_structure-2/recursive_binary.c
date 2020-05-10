#include <stdio.h>
#include <stdlib.h>

void insertion (int a[],int n)
{
 int i,j;
 for (i=0;i<n-1;i++)
	 for(j=i+1;j<n;j++)
		 if(a[i]>a[j])
		 {
			*(a+i)=*(a+i)+*(a+j);
			*(a+j)=*(a+i)-*(a+j);
			*(a+i)=*(a+i)-*(a+j);
		 }


}
/*
int binary(int arr[],int n, int ele, int start, int end)
{	
	if(start > end)
		return -1;

	int mid=(start+end)/2;
	if(ele==arr[mid])
		return mid;
	else if (ele<arr[mid])
		binary(arr,n,ele,start,mid-1);
	else 
		binary(arr,n,ele,mid+1,end);

}
*/

int binary(int a[],int n,int element,int start,int end)
{
	start=0;
         end=n-1;
        while(start<=end)
        {
                int mid=(start+end)/2;
                if(a[mid]==element)
                        return mid;
                else if(element<a[mid])
                        end=mid-1;
                else if(element>a[mid])
                        start=mid+1;
        }
        return -1;



}
int main()
{
int n,*arr,i=0;
printf("Number of element : ");
scanf("%d",&n);
arr=(int *)calloc(n,sizeof(int));
while(i<n)
{
	printf("\nArray[%d] = ",i);
	scanf("%d",(arr+i++));
}
i=0;
while(i<n)
	printf("\nArray[%d] = %d ",i++,arr[i]);
printf("\n");
insertion(arr,n);

i=0;
while(i<n)
	printf("\nArray[%d] = %d ",i++,arr[i]);


printf("\n\nwant to search element ?");
scanf("%d",&i);
if(i==1)
{
	printf("\nEnter element");
	scanf("%d",&i);
	if(binary(arr,n,i,0,n-1)!=-1)
		printf("\nIndex of that element is %d\n",binary(arr,n,i,0,n-1));
	else 
		printf("Element is not found \n");

}

	printf("\nEnter element");
	scanf("%d",&i);
	if(binary(arr,n,i,0,n-1)!=-1)
		printf("\nIndex of that element is %d\n",binary(arr,n,i,0,n-1));
	else 
		printf("Element is not found \n");
}
