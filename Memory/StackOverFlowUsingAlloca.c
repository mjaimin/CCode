#include <malloc.h>
//The only reason a C programmer should even be aware of alloca's existence is to understand and fix legacy code that's using it.

//The stack memory allocated by alloca automatically gets freed when you leave the function.
int OverflowMyStack(int start) 
{
	if (start == 0)
		return 0;
	//Here it is recursive function, hence execution will end in stack overflow
	char * p = (char *)alloca(4096);
	*p = '0';

	return OverflowMyStack(start - 1);
}

int main() 
{
	return OverflowMyStack(512);
}
