#include<stdio.h>

void Fibonaccichain(int t) {
   int n, a = 0, b = 1, c;
   
   printf("Moi ban nhap so Fibonacci: ");
   scanf("%d", &n);
   
   printf("Cac so Fibonacci:\n");
   
   for (int i = 0; i < n; i++) 
   {
      printf("%d ", a);
      c = a + b;
      a = b;
      b = c;
   }
}
