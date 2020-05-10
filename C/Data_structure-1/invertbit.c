#include <stdio.h>
int main()
{
int a[100],i=0;
int number;
printf("Enter a number :");
scanf("%d",&number);
//printf("inverted  number :%d",number);
while(number!=0)
{
	a[i]=number%2;
	number/=2;
printf("%d",a[i++]);
}
a[i]='\n';
int j=i;
for (i=0;j>i;j--,i++)
{
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
//	*(a+i)=*(a+j)^*(a+i);
//	*(a+j)=*(a+j)^*(a+i);
//	*(a+i)=*(a+j)^*(a+i);
}
while(a[i++]!='\n');
//printf("%d",a[i]);


}
