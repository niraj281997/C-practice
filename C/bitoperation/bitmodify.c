#include <stdio.h>
#include <stdlib.h>
int modifyBit(int n, int p, int b)
{
    int mask = 1 << p;
   // printf("%d\n",mask);
    return (n & ~mask) | ((b << p) & mask);
}

// Driver code
int main()
{
	//printf("");
    printf("\n%d", modifyBit(5,1,0));
    //printf("\n%d",modifyBit(6, 5, 1));
    return 0;
}

