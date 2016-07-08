#include <stdio.h>
void fun(int i, int* j)
{
	printf("%d, %d\n", i,*j);
}
int main()
{
	int i=5;
	fun(i++,&i);	
	printf("%d\n", i);
}
//OutPut
// 5, 6
// 6
