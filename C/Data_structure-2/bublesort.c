#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i,j,*arr;
printf("Number of elements : ");
scanf("%d",&n);
printf("\n");
arr=calloc(n,sizeof(int));
i=0;
while(i<n)
{
	printf("\n a[%d]=",i);
	scanf("%d",(arr+i++));

}
printf("Bubble short : \n");
/*
for (i=0;i<n-1;i++)									//Bubble short algorithem:wq

	for(j=0;j<n-1;j++)
	{
		if(arr[j]>arr[j+1])
		{	
			
			 

			// 	*(arr+j)=*(arr+j)^*(arr+j+1);				//EX-OR logic is working perfactly
			//	*(arr+j+1)=*(arr+j)^*(arr+j+1);
			//	*(arr+j)=*(arr+j)^*(arr+j+1);
			
		
			 	*(arr+j)=*(arr+j)+*(arr+j+1);				//this one is also working perfactly 
				*(arr+j+1)=*(arr+j)-*(arr+j+1);
				*(arr+j)=*(arr+j)-*(arr+j+1);
		
		}

	}


*/
printf("Selection short:  \n");
for (i=0;i<n-1;i++)									// Selection short algorithem
	for(j=i;j<n;j++)
	{
		if(arr[i]>arr[j])
		{	
			
			 

			// 	*(arr+i)=*(arr+i)^*(arr+j);				//EX-OR logic is working perfactly
			//	*(arr+j)=*(arr+i)^*(arr+j);
			//	*(arr+i)=*(arr+i)^*(arr+j);
			
		
			 	*(arr+i)=*(arr+i)^*(arr+j);				//this one is also working perfactly 
				*(arr+j)=*(arr+i)^*(arr+j);
				*(arr+i)=*(arr+i)^*(arr+j);
		
		}
	}

for (i=0;i<n;i++)
	printf("\n a[%d]=%d",i,arr[i]);
printf("\n");

}

