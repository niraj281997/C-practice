#include <stdio.h> 
#include <stdlib.h>
int main()
{
int i=0;
int j=0;
int c=0;
int y=0;
char *str1;
printf("Enter a string : ");
scanf("%s",str1);
int str1[100];
while(str2[i]!='\0')
	{
	str1[i]=str2[i];
	++i;
	++j;

	}
	//str1[i]='\0';
	printf("%s\n",str1);
	for (i=0;i<j;i++)
	printf("\n%d\n",str1[i]);
	int *str=(int *)malloc(8*j*sizeof(int));
	int n=0;
	for (i=0;i<j;i++)
	{
		while(str1[i]>0)
		{	
			int rem=str1[i]%2;
			printf("%d",rem);
		//	*(str+y)=rem;
			str[n++]=rem;
			str1[i]=str1[i]/2;
		//	y++;
		
		}
		printf("\n");
	
	}
		printf("\n");
		printf("\n");
	while(str[i]<(8*j*8))
	printf("%d",str[i++]);

	//while()


}



