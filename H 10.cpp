#include<stdio.h>

void Mix(int t)
{
	int n;
	printf("moi ban nhap n mang a  :");
	scanf("%d",&n);
    int a[n];
	for(int i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Mang a da nhap : ");
	for(int i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n");
	int temp;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			temp = a[i];
			a[i] = a[n-1];
			a[n-1] = temp;
		}else
		{
			temp = a[i];
			a[i] = a[n-2];
			a[n-2] = temp;
		}
	}
	printf("Mang sau khi xao tron :  ");
	for(int i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
