#include <stdio.h>
void dun();
int a=20;
int main()
{
        int a[][2]={10,20,30,40,50,60};
        int *b=(a+1);
        printf("%d",*b);
        //printf("%d",a);
        //dun();
        //printf("%d",a);

}
void dun()
{
static int a=10;
printf("%d",a);




}

