#include <stdio.h>
#include <stdlib.h>
int fact(int n)
{
	if(n == 0 || n==1)
		return 1;
	else 

		return (n*fact(n-1));
}


int main()
{
unsigned long n;
while(1)
{
printf("Enter a number : ");
scanf("%ld",&n);
printf("\nReturn factorial : %d",fact(n));
printf("\nwant perform opearation : \n1 for yes \n0 for No  \n\t  ");
scanf("%ld",&n);
if(n!=1)
	exit(0);

	}

}
