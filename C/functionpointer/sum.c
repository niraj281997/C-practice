#include <stdio.h>
int *sum(int a,int b){
static int sum;
sum=a+b;
return &sum;
}
int main()
{

	int n1,n2,*n3;
	printf("\nEnter a number:");
	scanf("%d",&n1);
	printf("\nEnter a number:");
	scanf("%d",&n2);
	n3=sum(n1,n2);
	printf("%d",*n3);

}
