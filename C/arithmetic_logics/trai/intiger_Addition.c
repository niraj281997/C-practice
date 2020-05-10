#include <stdio.h>
int addition(int n)
{	
	int sum=0;
while(n)
	{
		sum=sum+(n%10);
		n/=10;
	}
return sum;
}
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);

	printf(" Number is %d",addition(n));

}
