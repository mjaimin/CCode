#include <stdio.h>
int main() 
{
   size_t sz = sizeof(long long);// size_t is unsigned int so, sz is never going to be lessthen Zero,
                                 //rather --sz will roll over again to FFFF after sz is 0
    while ( --sz >= 0 )
    {
        printf("Hello World\n");
    }
}
