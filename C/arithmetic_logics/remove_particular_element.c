#include <stdio.h>
#include <string.h>
int main()
{
static int i=0;
char string[30]="ab bc cd";
for ( i=0;string[i]!='\0';i++)
{
	if(string[i]==' ')
	{
	for (int  j=i;string[j]!='\0';j++)
		string[j]=string[j+1];
		i=i+1;
	}
		

}

printf("\n%s\n",string);
int i1=0;
int j=0;
char *ptr="123";
while(string[i1]!='\0')
{
i1++;
}
while(ptr[j]!='\0')
{
string[i1]=ptr[j];
i1++;j++;
	
}



printf("\n%s\n",string);
}

