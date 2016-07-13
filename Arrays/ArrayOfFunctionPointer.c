#include <stdio.h>
void function0(int);
void function1(int);
void function2(int);

int main()
{
    void(*g[])(int)={function0,function1,function2};
    (*g[0])(1000);
    (*g[1])(2000);
    (*g[2])(3000);
    return 0;          
}

void function0(int a){ printf("function0\n");}
void function1(int a){ printf("function1\n");}
void function2(int a){ printf("function2\n");}
