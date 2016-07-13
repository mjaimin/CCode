#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
   // while(1) // Commented loop
    switch ('A')
    {
    case 'A': break;
    case 'B': continue;
    default : break;
    }    
}
// Error
//prog.cpp: In function 'int main()':
//prog.cpp:17:9: error: continue statement not within a loop
//         continue;
//         ^
