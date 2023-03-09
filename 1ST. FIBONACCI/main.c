#include <stdio.h>

long fibbonacci(int n)
{
   int i;
   long back2 = 0, back1=1;
   long next;

   if (n == 0)
      return (0);

   for (i=2;i<n;i++){
      next = back1 + back2;
      back2 = back1;
      back1 = next;
   }
   return (back1+back2);
}

long fibonacciRecursivo(long posicion) {
    if (posicion < 2)
        return posicion;
    return fibonacciRecursivo(posicion - 1) + fibonacciRecursivo(posicion - 2);
}

int main() {
   int call = fibbonacci(45);
   char str[256];
   sprintf(str, "%d", call);
   printf("Var: %s", str);
   return 0;
}