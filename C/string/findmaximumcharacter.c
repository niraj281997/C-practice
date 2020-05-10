#include <stdio.h>
#include <stdlib.h>
int main ()
{
	/*find the highest ` character repetd how many times */
int n,arr[256]={0};
printf("Enter string size  : ");
scanf("%d",&n);
char *a=calloc(n,sizeof(char));
printf("\nEnter string :");
scanf("%s",a);
char result;
int i,max=-1;
for (i=0;i<n;i++)
{
	arr[*(a+i)]++;
							//	printf("%d",arr[*(a+i)]);
}
for (i=0;i<n;i++)
	if(max<arr[*(a+i)])
	{
		max=arr[*(a+i)];
		result=*(a+i);
	}

	printf("\n highest character came is ::::::  %c %d",result,max);
}	
