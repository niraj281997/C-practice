#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,*arr,i=0,sum=0;
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int ));
    while(i<n)
        scanf("%d",(arr+i++));
    while(i<n)
        sum+=(*(arr+i++));
    printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
