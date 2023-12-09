#include <stdio.h>

int Fibonacci(int n) {
   
   /* Type your code here. */
   if(n == 0)
   {
      return 0;
   } 
   else if(n == 1) 
   {
      return 1;
   } 
   else if (n < 0)
   {
      return -1;
   }
   else 
   {
      return (Fibonacci(n-1) + Fibonacci(n-2));
   }
}

int main() {
   int startNum;
      
   scanf("%d", &startNum);
   printf("Fibonacci(%d) is %d\n", startNum, Fibonacci(startNum));

   return 0;
}