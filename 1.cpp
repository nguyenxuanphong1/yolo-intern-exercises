#include <stdio.h>

void Swap(int t)
{
	int a, b, c;
	printf("nhap vao 3 so a, b, c :\n");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("ban da nhap :\na = %d \nb = %d \nc = %d", a, b, c);
	
	int temp = a;
	a = c ;
	c = temp;
	
	
	printf("\nsau khi hoan vi : \na = %d \nb = %d \nc = %d\n", a,b,c);
	
}
