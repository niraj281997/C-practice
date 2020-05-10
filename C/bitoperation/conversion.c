#include <stdio.h>
#include <stdlib.h>
int conversion(int number,int base )
{
int rem=number%base;
if(number==0)
	return 1;

else conversion(number/base,base);
if(rem<10)
	printf("%d",rem);
else 
	printf("%c",rem-10+'A');


}

int main()
{

	int number;
	printf("Enter a number :");
	scanf("%d",&number);
	conversion(number,2);
	printf("\n");
	conversion(number,8);
	printf("\n");
	conversion(number,16);
	printf("\n");



}

