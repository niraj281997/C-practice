#include <stdio.h>
#include <stdlib.h>
/*int main()
{

	char *arr=malloc(10*sizeof(char));
	printf("Enter string : ");
	scanf("%s",arr);

	printf("\nhoo");
	char element;
	//printf("Enter element that you want to remove :");
	//printf("%c",element);
	int i,j;

		for (i=0;i<40;i++)
		//	printf("%c",arr[i]);
			if(*(arr+i)==*(arr+i+1))
					for(j=i;j<40;j++){
						*(arr+j)=*(arr+j+1);
					
	//	printf("%c",arr[i]);
					}
	
	
	
	
	printf("%s",arr);



}*/
int main()
{
static int i=0;
//char string[30]="ab*bc*cd";
char string[30]="abbccddddaaaa";
for ( i=1;string[i]!='\0';i++)
{
	if(string[i]==string[i-1])
//	if(string[i]=='*')
	{
	for (int  j=i;string[j]!='\0';j++)
		string[j]=string[j+1];
		i=i+1;
	}


}
printf("\n%s\n",string);
}
