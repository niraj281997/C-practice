#define BIT_SET(a,b) 	((a) |= (1<<b))
#define BIT_CLEAR(a,b)	 ((a) &= ~(1<<b))
#define BIT_FLIP(a,b)	 ((a) ^= (1<<b))
#define BIT_CHECK(a,b) 	(!!((a) & (1<<b))) 
#include <stdio.h>
#include <stdlib.h>
int main()
{

int number,position;
printf("Enter a number :");
scanf("%d",&number);
printf("\nposition ");
scanf("%d",&position);
printf("\ncheck : %d",BIT_CHECK(number,position));
printf("\nflip : %d",BIT_FLIP(number,position));
printf("\nclear : %d",BIT_CLEAR(number,position));
printf("\nset : %d",BIT_SET(number,position));
//printf("\ncheck : %d",BIT_CHECK(number,position));



}
