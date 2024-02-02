#include<stdio.h>
void Array(int t)
{
	int n;
	int a[n],b[n];
	printf("Moi ban nhap n mang :"); scanf("%d",&n);
	printf("gia tri mang a:\n");
	for(int i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("gia tri mang b:\n");
	for(int i = 0; i < n; i++)
	{
		printf("b[%d] = ",i);
	    scanf("%d",&b[i]);
	}
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n;j++)
		{
			if(a[i] == b[j]){
				count++;
				break;
			}
		}
	}
	printf("tong phan tu cua mang a co trong mang b : %d\n",count);
}
