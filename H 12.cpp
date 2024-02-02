#include<stdio.h>

void Countfactorial(int t)
{
	int n;
	int factorial;
	printf("Moi ban nhap vao so nguyen n:");
	scanf("%d",&n);
	
	
	factorial = 1;
	for(int i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}
	printf("Giai thua cua %d: %d\n",n,factorial);
	
	int count = 0;
    while (n >= 5) {
    	count += n/5;
        n /= 5;
    }
	printf("So  luong cac so khac khong trong giai thua : %d\n",count);
}

