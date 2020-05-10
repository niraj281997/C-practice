#include<stdio.h>
#include <stdlib.h>
struct A
{
 char c1 : 3;
 char c2 : 5;
 char c3 : 1;
};
int main()
{

struct A a;
printf(" size of structer :%d\n",sizeof(a));
}

