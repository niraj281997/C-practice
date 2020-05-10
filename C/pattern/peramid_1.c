#include<stdio.h>
#include<stdlib.h>


int i,j,k;
void star()
{
printf("enter the length of the peramid\n");
scanf("%d",&k);

for(i=0;i<=k;i++)
{ 
	for(j=1;j<=k-i;j++)
	printf(" ");
	
	for(j=1;j<=i;j++)
	printf("*");
printf("\n");
}



}

void dualstar()
{
printf("enter the length of the peramid\n");
scanf("%d",&k);

for(i=0;i<=k;i++)
{ 
	for(j=1;j<=k-i;j++)
	printf(" ");
	
	for(j=1;j<=2*i-1;j++)
	printf("*");
printf("\n");
}

}
void main()
{
	static int ii=0;
   while(1){
	   printf("\nEnter Number:  ");
	   scanf("%d",&k);

	   if(k==1)star();
	  else if(k==2)dualstar();
	   else
	   {
	   if(i<2)
	   	i++;
	   else exit(0);
	   }
   }



}
