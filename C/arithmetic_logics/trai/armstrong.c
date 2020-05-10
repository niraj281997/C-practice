#include <stdio.h>
int rec(int n,int e)
{
	if(e==0)
		return 1;
	else 
		return n*rec(n,e-1);
}
int main()
{
	int n,i=0,j,sum=0,x;
	printf("Number :");
	scanf("%d",&n);
	j=n;
	while(j!=0)
	{
		i++;
		j/=10;
	}
	j=n;


	printf("\nintigers %d",i);
	while(j!=0)
	{
		x=j%10;
		sum+=rec(x,i);
	//	printf("\nin loop %d\n",sum);
		j/=10;
	}
	printf("sum %d entered the  %d",sum,n);


}

