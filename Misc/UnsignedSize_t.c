#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
   size_t sz = sizeof(long long);// size_t is unsigned int so it will never be less then 0 rather it will rollover from FFFF
    while ( --sz >= 0 )
    {
        printf("Hello World\n");
    }
}
