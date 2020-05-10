#include <stdio.h>
int bitswapping(int x,int p1,int p2)
{
	unsigned int bit1=(x>>p1)&1;
	unsigned int bit2=(x>>p2)&1;
	int y=(bit1^bit2);
	y=(y<<p1)|(y<<p2);
	return x^y;
}


int main()
{
int number,x,y;
printf("Enter a number :");
scanf("%d",&number);
printf("\nEnter the bits that you want to change it :");
printf("\nEnter First  bit position :");

scanf("%d",&x);
printf("\nEnter Second  bit position :");
scanf("%d",&y);
printf("\nreturn nunber :%d\n",bitswapping(number,x,y));
}
