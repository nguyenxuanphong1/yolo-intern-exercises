#include<stdio.h>
int Exchange(int t)
{
		int n;
		printf("Nhap gia tien can quy doi la :");
		scanf("%d",&n);
		int a[10]={500,100,50,20,2,1};
		int cnt = 0;
		for(int i = 0; i < 6; i++)
		{
			cnt = cnt + n/a[i];
			n = n % a[i];
		}
		printf("%d \n",cnt);
}
