#include <stdio.h>

int counter(int n)
{
 int count;
 while(n)
 {
	 count++;
 	n>>=1;
 }
 return count;



}

int main()
{

	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf(" number of bits : %d",counter(n));



}
