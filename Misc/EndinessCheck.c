#include <stdio.h>
#include <string.h>
void show_mem_rep(char *start, int n) 
{
    int i;
    for (i = 0; i < n; i++)
         printf(" %.2x", start[i]);
    printf("\n");
}
int main()
{
   int i = 0x01234567;
   char* c="ABCD";
   show_mem_rep((char *)&i, sizeof(i));
   show_mem_rep(c, strlen(c));
   return 0;
}


//Output
// 67 45 23 01
// 41 42 43 44
