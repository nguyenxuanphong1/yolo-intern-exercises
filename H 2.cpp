#include<stdio.h>
#include <stdlib.h>
#include<time.h>
void Random1(int t)
{
	srand(time(NULL));
	int a, b;
	printf("Moi ban nhap so  a:");scanf("%d",&a);
	printf("Moi ban nhap so b:");scanf("%d",&b);
	for(int i = 0; i < 4; i++)
	{
		int c = rand() % (b - a) + a;
	    printf("So rodom c : %d\n",c);
	}

}
