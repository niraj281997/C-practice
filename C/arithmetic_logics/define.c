#define CUBE(x) (x*x*x)
#include <stdlib.h>
#include <stdio.h>
void main()
{
int a,b=1;
a=((++b)*(++b)*(++b));
//b=CUBE(b++);
printf("\n %d %d",a,b);
}
