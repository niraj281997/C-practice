#include <stdio.h>
int main()
{
	int number,temp,one=0,zero=0;
	printf("Enter a number : ");
	scanf("%d",&number );
	while(number)
	{
		temp=number& 1;
		if(temp)
			one++;
		else 
			zero++;
		number>>=1;
	}
	printf("\nNumber of zero : %d\n",zero);
	printf("Number of ones : %d\n",one);

}
