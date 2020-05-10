#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i=0,j=0,count=0,k;
	char *arr,*brr;
	printf("Enter bits you want to : ");
	scanf("%d",&n);
	arr=malloc(n*sizeof(char));
	brr=calloc((n+(n/5)),sizeof(char));
	//printf("%d",(n+(n/5)));
	printf("Enter elements");
	while(i<=n)
		scanf("%c",(arr+i++));
	printf("%s",arr);
	i=0;
	
	while(i<=n)
	{ count=0;
		if(arr[i]=='1')
		{
			brr[j]=arr[i];
			count++;
			for(k=i+1;k<=n && arr[k]=='1' && count<5;k++)
			{
				j++;
				brr[j]=arr[k];
				count++;
				if(count==5)
				{
					j++;
					brr[j]='0';
					count=0;
				}
				i=k;
			
			}
		
		
		}
		
		else
			brr[j]=arr[i];
			i++;
			j++;
	
	}
	printf("%s",brr);




}
