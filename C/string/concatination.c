#include <stdio.h>
#include <stdlib.h>
int main()
{
char *a,*b;
int n,n1,i,j;
i=j=0;
printf("\neneter the first string length");
scanf("%d",&n);
	a=calloc(n,sizeof(char));
	printf("\nenter string :");
	scanf("%s",a);

printf("\neneter the second string length");
scanf("%d",&n1);
	b=calloc(n1,sizeof(char));
	printf("\nenter string :");
	scanf("%s",b);

	a=realloc(a,n+n1);
	while(*(a+i)!='\0')i++;
//		printf("%c",*(a+i++));
	
//printf("%c",*a++);
while(*(b+j)!='\0')
{
	*(a+i++)=*(b+j++);
}
printf("\nconacatination ::  %s\n",a);







}
