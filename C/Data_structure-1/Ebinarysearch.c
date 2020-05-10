#include<stdio.h>
int iterativeBsearch(int A[], int size, int element);
int main() {
   int n,i,A[] = {0,12,6,12,12,18,34,45,55,99};
   n=(sizeof(A)/sizeof(int));
   printf("size of array%d\n",n);
   i=0;
   while(i<n)
	   printf("%d ",A[i++]);
   printf("\nEnter data :");
   scanf("%d",&n);
   printf("%d is found at Index %d and position %d \n",n,iterativeBsearch(A,10,n),iterativeBsearch(A,10,n)+1);
   return 1;
}
int iterativeBsearch(int A[], int size, int element)
{
   int start = 0;
   int end = size-1;
   while(start<=end) 
   {
      int mid = (start+end)/2;
      if( A[mid] == element) 
      {
         return mid;
      } else if( element < A[mid] )
      {
         end = mid-1;
      } else 
      {
         start = mid+1;
      }
   }
   return -1;
}
