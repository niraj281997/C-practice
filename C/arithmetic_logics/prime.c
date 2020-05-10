#include<stdio.h>
#include <stdlib.h>
int prime(int a);


int main()
{
int number;
printf("Enter a number :");
scanf("%d",&number);

if(prime(number))
	printf("Number is prime");

else
       	printf("NUmber is not prime");

}
int prime(int a)
{
int temp=a/2;
for (int i=2;i<=temp;i++)
{
	if(a%i==0)
		return 0;


}
return 1;
}
