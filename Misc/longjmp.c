#include <stdio.h>
#include <setjmp.h>
/* 
The setjmp() function saves various information about the calling environment (typically, the stack pointer, the instruction pointer, possibly the values of other registers and the signal mask) in the buffer env for later use by longjmp().

In this case(when setjmp is called first time), setjmp() returns 0.

The longjmp() function uses the information saved in env to transfer control back to the point where setjmp() was called and to restore ("rewind") the stack to its state at the time of the setjmp() call.

Following a successful longjmp(), execution continues as if setjmp() had returned for a second time.  This time setjmp returns the value provided in val 

void longjmp(jmp_buf env, int val);


 * */
jmp_buf env;

void f(void)
{
  longjmp(env, 10); 
}

int main(void)
{
  int val;

  val = setjmp(env); 
  if(val != 0) 
    printf("after long jump, the value is %d\n", val);
  else
    printf("ready to jump\n");

  f(); 

  return 0;
}
