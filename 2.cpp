	#include <stdio.h>
#include <math.h>

void Logarithmically(int t)
{
	int a, b, c;
	printf("nhap so a : ");scanf("%d", &a);
	printf("nhap vao so mu b : ");scanf("%d", &b);
	
	c = pow (a,b);
	printf("c = %d^%d la : %d\n", a, b, c);
	
}
