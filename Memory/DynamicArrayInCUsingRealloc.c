#include <stdio.h>
#include <stdlib.h>
//  This would normally be used by the polygon logic
int main(int argc, const char * argv[])
{
	int lengthOfArray = 3;
	int *element = (int*)malloc(sizeof(int)*lengthOfArray);
	element[0] = 0;
	element[1] = 1;

	element = (int*)realloc(element, sizeof(int)*(lengthOfArray+6));	
	element[2] = 2;
	element[3] = 3;
	element[4] = 4;
	element[5] = 5;
	
	printf("%d %d %d %d %d", element[0], element[1], element[2], element[3], element[4]);
}
