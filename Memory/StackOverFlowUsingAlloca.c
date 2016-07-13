#include <malloc.h>
//The stack memory allocated by alloca automatically gets freed when you leave the function.
int OverflowMyStack() 
{
	char * p = (char *)alloca(4096);	
	return OverflowMyStack();
}

int main() 
{
	return OverflowMyStack();
}
