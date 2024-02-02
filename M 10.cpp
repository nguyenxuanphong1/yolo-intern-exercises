#include<stdio.h>
void Notinarray(int t)
{
int n;
	int a[n],b[n];
	printf("Moi ban nhap n mang :"); scanf("%d",&n);
	printf("gia tri cua mang a:\n");
	for(int i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("gia tri cua mang b:\n");
	for(int i = 0; i < n; i++)
	{
		printf("b[%d] = ",i);
	    scanf("%d",&b[i]);
	}
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		int found = 0;
		for(int j = 0; j < n;j++)
		{
			if(a[i] == b[j]){
				found = 1;
				break;
			}
		}
		if(!found)
		{
			count++;
		}
	}
	printf("tong so phan tu cua mang a khong co trong b: %d\n",count);
}
