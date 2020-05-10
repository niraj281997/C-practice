#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i=0;
	printf("size\n");
	scanf("%d",&n);

	printf("\nsize\n");
	char *a=calloc(n,sizeof(char));
	while(i<n)
		*(a+i++)=getc(stdin);

	printf("%s",a);

	char *b=calloc(n,sizeof(char));
	scanf("%s",b);
	printf("%s",b);


}	

