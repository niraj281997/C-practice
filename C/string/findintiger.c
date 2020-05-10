#include <stdio.h>
#include <stdlib.h>
int main()
{
	//* find intiger from string */
	int n,i,j=0;
	printf("size\n");
	scanf("%d",&n);
	char *a=calloc(n,sizeof(char));
	char *b=calloc(n,sizeof(char));
	printf("Enter string : ");
	scanf("%s",a);
	for (i=0;i<n;i++)
	if(a[i]>='0'&&a[i]<='9')
		b[j++]=a[i];
		b[j]='\n';

	j=0;
	printf("\n");
	while(*(b+j)!='\n')
		printf("%c ",*(b+j++));

	printf("\n");



free(a);
free(b);
}




