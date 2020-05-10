#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i=0;
	char *a,*b;
	printf("Enrter First string size : ");
	scanf("%d",&n);
	a=calloc(n,sizeof(char ));
while(i<n)
	*(a+i++)=getc(stdin);

	printf("Enrter Second  string size : ");
	scanf("%d",&n);
	b=calloc(n,sizeof(char ));
	i=0;
scanf("%s",b);
//while(i<n)
//	*(b+i++)=getc(stdin);

	int j,l;
	for (l=0;b[l]!='\0';l++)

		for (i=0,j=0;a[i]!='\0' && b[j]!='\0';i++,j++)
		{
			if(a[i]==b[i])
				j++;
			else 
				j=0;
		}
	if(j==l)
		printf("\nString is found : \n");
	else
	       	printf("\nString is not found \n");








}
