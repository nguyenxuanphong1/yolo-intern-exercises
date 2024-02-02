#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Random11(int t)
{
	srand(time(NULL));
	int a;
	printf("Moi ban nhap so a:");
	scanf("%d",&a);
	int b = rand() % a + 0;
	printf("So tu 0 den a : %d\n", b);
}
