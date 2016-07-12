#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
 
void * function(void*);
 
int main()
{
    pthread_t thread;
    int arg = 911;
    int * status; // notice I did not intialize status, status is *retval
    pthread_create(&thread, NULL, function, (void*)(&arg));
 
    pthread_join(thread, (void **)(&status));//passing address of status,&status is retval 
 
    //(2) this address is same as printed in (1)
    printf("The address of returned status is %p,", status); 
 
    printf("The returned status is %d\n", *status);
}
 
void * function(void * arg)
{
    int *p;
    p = (int*)arg;
    printf("I am in thread.\n");
 
     //(1) printing the address of variable holding the exit status of thread, see (2)                                                              
    printf("The arg address is %p %p\n", p, arg); 
    //pthread_exit(arg);
    return arg; // pthread_exit(arg) also returns the same
}

//output:
// 911
