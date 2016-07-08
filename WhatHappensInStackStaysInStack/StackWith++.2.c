#include <stdio.h>
void fun(int i, int j, int k, int l, int m)
{
	printf("%d%d%d%d%d\n",i,j,k,l,m);
}
int main()
{
	int i=5;
	fun(++i,++i,++i,++i,++i);
	i=5;
	fun(i++,i++,i++,i++,i++);
	i=5;
	fun(i++,i--,++i,--i,i);
	i = 1;
	printf("%d%d%d%d%d\n",i++,i--,++i,--i,i);
}

//Output
//1010101010
//98765
//45555
//01111
