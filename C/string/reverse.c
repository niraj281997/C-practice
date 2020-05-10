#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*reverse string */
	int n,i,j;
printf("Enter a string size :");
scanf("%d",&n);
char *a=calloc(n,sizeof(char));
printf("\nEnter string :\n");
scanf("%s",a);
//	printf("\nrever strning  %s ",a);
	for(i=0,j=((n*sizeof(char))-1);i<j;i++,j--)
	{
		*(a+i)=*(a+i)+*(a+j);
		*(a+j)=*(a+i)-*(a+j);
		*(a+i)=*(a+i)-*(a+j);
	}

	printf("\nrever strning  %s ",a);








}
