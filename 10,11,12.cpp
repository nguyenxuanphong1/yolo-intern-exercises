#include <stdio.h>

int FINDMAX(int n, int a[]){
	int MAX = a[0];
	for(int i=0; i<n; i++)
	{
		if(a[i]>MAX)
		{
			MAX = a[i];
		}
	}
	return MAX;	
} 

int FINDMIN(int n, int a[]){
	int MIN = a[0];
	for(int i=0; i>n; i--)
	{
		if(a[i]<MIN)
		{
			MIN = a[i];
		}
	}
	return MIN;	
} 

float TOTALMEDIUM(int n, int a[]){
	float medium; int total = 0;
	for(int i=0;i<n;i++){
		total += a[i];
	}
	medium = total / n;
	return medium;
	}

    


void Smallestlargestvalue(int t){
	int n;int a[n];
	printf(" nhap vao so phan tu mang :");scanf("%d", &n);
	
	for(int i = 0;i<n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nphan tu lon nhat trong mang la %d\n",FINDMAX(n,a));
	printf("\nphan tu nho nhat trong mang la %d\n",FINDMIN(n,a));
	printf("\ngia tri trung binh cua mang la %.2f\n", TOTALMEDIUM(n,a));
}

