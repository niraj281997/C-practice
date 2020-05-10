
#include <stdio.h>
#define DEBUGG
//#include <>
int main()
{

	int x,y;
	x=2;
	y=3;

#ifdef DEBUGG
	macro(x,y) x>y?x:y
#endif
#ifndef DEBUGG
	macro(x,y) (x)
#endif
	macro(++x,++y);
	printf("%d %d",x,y);
		
}
