#include<stdio.h>
#include<stdlib.h>
int i,j,k;
void basicperamid()

{
		printf("\n\nNumber of Lines ?  ");
		scanf("%d",&k);
		for (i=0;i<=k;i++)
		{
			for (j=0;j<=i;j++)
				printf("*");
			printf("\n");
		}
}
void numeric()
{

		printf("\n\nNumber of Lines ?  ");
		scanf("%d",&k);
		for (i=0;i<=k;i++)
		{
			for (j=0;j<=i;j++)
				printf("%d",i);
			printf("\n");
		}
}


void incnumeric()
{


		printf("\n\nNumber of Lines ?  ");
		scanf("%d",&k);
		for (i=1;i<=k;i++)
		{
			for (j=1;j<=i;j++)
				printf("%d",j);
			printf("\n");
		}




}

void conti(){
		printf("\n\nNumber of Lines ?  ");
		scanf("%d",&k);
		static int a=1;
		for (i=0;i<=k;i++)
		{
			for (j=0;j<=i;j++)
			{	printf("%d\t",a);a++;}
			printf("\n");
		}

}


void reverse()
{


		printf("\n\nNumber of Lines ?  ");
		scanf("%d",&k);
		for (i=0;i<k;i++)
		{
		int a=k;
			for (j=0;j<=i;j++)
			{	printf("%d\t",a); a--;}
			printf("\n");
		}
}

void staticlooprev()
{


		printf("\n\nNumber of Lines ?  ");
		scanf("%d",&k);
		int a=k;
		for (i=0;i<k;i++)
		{
		
			for (j=0;j<=i;j++)
			{	printf("%d\t",a); }
			printf("\n");
		a--;}

}
void main()
	{	
		int n;
		static int i=0;

		while(1)
		{
		printf("1: basis peramid\n2:basic Number peramid\n3:increament permanid\n4:continue increment");
		printf("\n5:peramid inside loop Decrement\n6:outerside Decement\n 7:Exit");
		printf("\n\nEnter Your choice");
		scanf("%d",&n);

		switch(n)
		{
			case 1:
				basicperamid();
				break;
			case 2: 
				numeric();
				break;
			case 3:
				incnumeric();
				break;
			case 4:	conti();
			      	 break;
			case 5:reverse();
			       break;
			case 6:staticlooprev();
			       break;
		case 7: exit(0);
		default:
			if(i<2)
			{
			 printf("3  invalid Cases observed");
			i++;
			}
			else 
				exit(0);
	
		}
	
		}
	
	}
