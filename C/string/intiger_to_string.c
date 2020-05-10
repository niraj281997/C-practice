#include <stdio.h>
#include <stdlib.h>
char *ItoA(int n)
{
		/* intiger to string convertor */
	int reminder;
	char Num_str[33];
	Num_str[32]='\0';
	char *ptr=&Num_str[32];

	while(n!=0)
	{
		reminder=n%10;
		n/=10;
		*--ptr=(unsigned char  )reminder +'0';

	}


return ptr;



}
int main()
{
int i;
printf("Enter intiger : ");
scanf ("%d",&i);
printf("\n");

printf("%s\n",ItoA(i));

}

