#include<stdio.h>
void main()
{
	int x = 9 ,y = 10;
	x=x^y;
	y=y^x;
	x=x^y;
	printf("%d,%d\n",x,y);
}
