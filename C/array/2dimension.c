#include <stdio.h>
#include <stdlib.h>
/*int main()
{

int **arr,n,j,i,row,columan;
printf("Enter size of :");
scanf("%d",&n);

printf("Enter size of row:");
scanf("%d",&row);
printf("Enter size of :");
scanf("%d",&columan);
arr=calloc(n,sizeof(int));
printf("Enter element");
	for (i=0;i<row;i++)
	{
		for (j=0;j<columan;j++)
			scanf("%d",&(*(*(arr+i)+j)));
		printf("\n");
	}
	printf("\n Entered string is  ");
	

	for (i=0;i<row;i++)
	{
		for (j=0;j<columan;j++)
			printf("%d",arr[i][j]);
		printf("\n");
	}


}*/


//#include<stdio.h>
int main(){
  //  2D array declaration
   int disp[2][3];
 //  Counter variables for the loop
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}
