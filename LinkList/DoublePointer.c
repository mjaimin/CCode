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
  int* p;
  p = NULL;
  allocate(&p);
  //allocate(p); This is wrong 
  //You need to pass address of p Not The value which p is pointing to  
  printf("%X\n",p);//E46010
  *p = 42;
  free(p);
}
