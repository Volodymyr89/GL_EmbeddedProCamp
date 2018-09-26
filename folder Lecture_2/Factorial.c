/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main()
{
  int c, n=10, fact = 1;
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("Factorial of %d is %d\n", n, fact);
  getchar();
  return 0;
}