#include <stdio.h>
#include <string.h>
void allocate(int** q)
{
  printf("%X\n",*q); //NULL
  *q = (int*)malloc(sizeof(int));
  printf("%X\n",*q);//E46010
}

int main()
{
  int* p = NULL;
  allocate(&p);
  printf("%X\n",p);//E46010
  *p = 42;
  free(p);
}
