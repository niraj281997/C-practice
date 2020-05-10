#include <stdio.h>
#include <stdlib.h>
int *insertion(int arr[],int n)
{
	int i,j,temp;
static int *a;
 for(i=1;i<n;i++)
     {
	     a[i]=arr[i];
             temp=a[i];
     	 for(j=i-1;j>=0 && a[j]>temp;j--)
       		 {
		
		       a[j+1]=a[j];
	         }
			a[j+1]=temp;
     }

											//*** failed it has segmentaion fault 
											//
return a;


}
int main()
{
int n,*arr,*a,i;
printf("Enter a array size:");
scanf("%d",&n);
arr=calloc(n,sizeof(int));
printf("enter a elements:");
//printf("%d",sizeof(&arr));
for (i=0;i<n;i++)
{
printf("\nelement %d ",i);
scanf("%d",(arr+i));
}

for (i=0;i<=n;i++)
//for (i=0;i<(sizeof(arr)/sizeof(int));i++)
	printf("\nelement %d ",*(arr+i));
a=insertion(arr,n);

for (i=0;i<n;i++)
	printf("\nelement %d ",*(arr+i));
}
