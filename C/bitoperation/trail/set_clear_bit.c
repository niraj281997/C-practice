#include <stdio.h>
int main()
{
	int bit=0,one=0,zero=0,n;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n)
	{
		bit=n&1;
		n>>=1;
		if(bit)
			one++;
		else 
			zero++;
	}
	printf("number of ones %d and number of zero %d\n",one,zero);
}

