#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
    bool flag = true;
   // while(flag) // Commented loop
    switch ('A')
    {
    case 'A':
        flag = false;
        break;
    case 'B':
        continue;
    default:
        printf("In default Statment\n");
    }    
}
// Error
//prog.cpp: In function 'int main()':
//prog.cpp:17:9: error: continue statement not within a loop
         continue;
         ^
