#include <stdio.h>
struct 
{
   unsigned char x1:1;
   unsigned char x2:7;
} status;
 
struct 
{
   //unsigned char x1:0;// Error : named bit field cannot have zero width
   //unsigned char x2:9; //Error: type of bit field too small for number of bits
} errorStruct;

int main( ) 
{
   printf( "sizeof(status) : %d\n", sizeof(status));
   printf( "sizeof(errorStruct) : %d\n", sizeof(errorStruct));
}
