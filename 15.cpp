#include<stdio.h>
void Factorial(int t)
{
	int n;
	printf("Moi ban nhap vao so nguyen n:");
	scanf("%d",&n);
	int giaithua = 1;
	for(int i = 1; i <= n; i++)
	{
		giaithua = giaithua * i;
	}
	printf("Giai thua cua %d : %d\n",n,giaithua);
}

