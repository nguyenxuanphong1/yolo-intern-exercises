#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Random12(int t)
{
	srand(time(NULL));
	int a;
	printf("Moi ban nhap so a:");
	scanf("%d",&a);
	int b = rand() % (2 * a + 1) - a;
	printf("So tu -a den a : %d\n", b);
}
