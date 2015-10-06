#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
	//  This would normally be provided by the polygon
	int lengthOfArray = 2;
	int *element = (int*)malloc(sizeof(int)*lengthOfArray);

	element[0] = 0;
	element[1] = 1;

	element = (int*)realloc(element, sizeof(int)*(lengthOfArray+5));
	element[2] = 2;
	element[3] = 3;
	element[4] = 4;
//	element[1] = 5;
//	element[0] = 6;
	printf("%d %d %d %d %d", element[0], element[1], element[2], element[3], element[4]);
}