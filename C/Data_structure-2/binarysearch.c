#include <stdio.h>
#include <stdlib.h>
/*int binarysearch(int a[],int n, int element)
{
	int start=0;
	int end=n-1;
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
	}*/

int rbinarysearch(int a[],int element,int start,int end)
{
        
        	if(start>end)
      			  return -1;
        
                int mid=(start+end)/2;
                if(a[mid]==element)
                        return mid;
                else if(element<a[mid])
			rbinarysearch(a,element,start,mid-1);
                else if(element>a[mid])
			rbinarysearch(a,element,mid+1,end);

}




int main()
{
	int a[]={10,20,30,40,50,60,70,80,90,100};
	int element;
	int n =(sizeof(a)/sizeof(int));
	printf("Enter number that you want to find :\n");
	scanf("%d",&element);
	int start,end;
		start=0;end=n-1;
	if(rbinarysearch(a,element,start,end)<0)
		printf("\nData not found  ");
	else
	printf("\n number find at this position : %d",rbinarysearch(a,element,start,end)+1);




}
