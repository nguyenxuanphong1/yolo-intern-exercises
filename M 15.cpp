#include <stdio.h>
void Sumofdigits(int t)
{
    int n;
    printf(" Moi ban nhap n so nguyen :");scanf("%d",&n);
    
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("Tong cua cac so nguyen : %d \n", sum);
  
}
