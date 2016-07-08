#include <stdio.h>
struct 
{
   unsigned char widthValidated : 1;
   unsigned char heightValidated : 7;
} status;
 
struct 
{
   //unsigned char widthValidated : 0;// Error : named bit field cannot have zero width
   //unsigned char heightValidated : 9; //Error: type of bit field too small for number of bits
} errorStruct;

int main( ) 
{
   printf( "Memory size occupied by status : %d\n", sizeof(status));
   printf( "Memory size occupied by errorStruct : %d\n", sizeof(errorStruct));
   //"Memory size occupied by status : 1"
   //"Memory size occupied by status : 1"
   return 0;
}
