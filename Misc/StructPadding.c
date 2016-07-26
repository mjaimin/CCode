#include <stdio.h>

struct data1
{
	char j;//8//address aligned with 8byte
	double l;//8//alignment based on longest basic data type in 
	int k;//4
	char m;//1
	short n;//2
	char o;//8
};
struct data
{
int j;//8
struct data1 a;//32

};
int main()
{
	printf("%d\n",sizeof(struct data1));//32
	printf("%d\n",sizeof(struct data));//40
}
