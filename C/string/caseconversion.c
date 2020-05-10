#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i=0;
printf("entet size ");
scanf("%d",&n);
char *arr=calloc(n,sizeof(char));
printf("ente string :");
//scanf("%s",arr);
//scanf("%[^\n]",arr);
//printf("\n Entered string : %s\n",arr);
//gets(arr);

while(i<=n)
{
	*(arr+i)=getc(stdin);
	i++;
}
i=0;

printf("\n Entered string : %s\n",arr);
while(i<=n)
{
	if(arr[i]>=65 && arr[i]<=90)
		arr[i]+=32;
	else
       	{
		if(arr[i]>=97 && arr[i]<=122)
			arr[i]-=32;
	}

	i++;
}
i=0;


while(i<=n)
	printf("%c",arr[i++]);
free(arr);


}

