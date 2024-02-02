#include <stdio.h>

void Surplus (int t){
	int a, b;
	printf("nhap vao 2 so a, b :");
	scanf("%d%d", &a, &b);
	int count = 1; int difference = 0;
	do{ 
	count ++;  difference = a - (b * count);
	}while (difference > b);
	
	printf("so du cua %d / %d : %d\n", a, b, difference);
}
