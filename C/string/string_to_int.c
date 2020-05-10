#include <stdio.h>
#include <stdlib.h>
int to1string(char []);
int main()
{
  char a[100];
  int n;

  printf("Input a valid string to convert to integer\n");
  scanf("%s", a);

  //n = toString(a);
  n = to1string(a);

  printf("String  = %s\nInteger = %d\n", a, n);

  return 0;
}
int to1string(char a[])
{

	int n,c,offset,sign;
	if(a[0]=='-')
		sign=-1;
	if(sign==-1)
		offset=1;
	else 
		offset=0;
	n=0;
	for(c=offset;a[c]!='\0';c++)
		n=n*10+a[c]-'0';
	if(sign==-1)
		n=-n;
	return n;
		








}


























int toString(char a[])
{
  int c, sign, offset, n;

  if (a[0] == '-')   // Handle negative integers
    sign = -1;


  if (sign == -1)    // Set starting position to convert
    offset = 1;

  else 
    offset = 0;

  n = 0;

  for (c = offset; a[c] != '\0'; c++) {
    n = n * 10 + a[c] - '0';
  }

  if (sign == -1) 
    n = -n;

  return n;
}
