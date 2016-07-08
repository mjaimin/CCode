#include <stdio.h>
void fun(int i, int j, int k, int l, int m)
{
	printf("%d%d%d%d%d\n",i,j,k,l,m);
}
int main()
{
	int i=5;
	fun(++i,++i,++i,++i,++i);
	printf("%d\n",i);
	i=5;
	fun(i++,i++,i++,i++,i++);
	printf("%d\n",i);
	i=5;
	fun(i++,i--,++i,--i,i);
	printf("%d\n",i);
	i = 5;
	printf("%d%d%d%d%d\n",i++,i--,++i,--i,i);
	printf("%d\n",i);
}

//All pre-increment/decremet happens before variable place holder is created on the stack
//All post-increment/decremet happens after variable place holder is created on the stack but before passed values are assigned to place holder on the stack, from right to left assignment

//1010101010
//10
//98765
//10
//45555
//5
//45555
//5
