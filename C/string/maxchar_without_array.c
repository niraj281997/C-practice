#include <stdio.h>
#include <stdlib.h>
int fun(char arr [],int n)
{
	/*finding particular highest character gets repeted dynamic allocation*/
int ans,temp,i;
ans=temp=1;
for (i=0;i<n;i++)
{
	if(arr[i]==arr[i-1])
		++temp;
	else
	{
		if(ans<temp)
			ans=temp;
			temp=1;
	
	}

}

		if(ans<temp)
			ans=temp;
	return ans;




}

int main()
{
int n;
printf("Enter string size :");
scanf("%d",&n);
char *arr;
arr=malloc(n*sizeof(char));
printf("Ennter string");
scanf("%s",arr);
printf("%d",fun(arr,n));



}
