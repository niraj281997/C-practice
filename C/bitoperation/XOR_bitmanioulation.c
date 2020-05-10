#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define FLIP(a,b)  ((a)^=(1<<b))
#define SET(a,b) (a|=(1<<b))
int main()
{

	int number,number1,i=0;
	printf("\nEnter a number : ");
	scanf("%d",&number); 
	number1=number;
	printf("Count the number of the bits : ");
	while(number1>>=1)
	{
		i++;		
		printf("%d, ",i);
	}	//to get counter

	printf("\n");
	for (int j=0;j<=i;j++)
		number=FLIP(number,j);//with iteration trying to manipulate the bits
	printf("\n%d\n",number);




}
