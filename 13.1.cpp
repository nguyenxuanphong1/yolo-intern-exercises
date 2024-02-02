#include <stdio.h>

void SWAP(int n, int a[])
{
	int temp = 0;
	int j= n-1;
	int k= 0;
	
	while(j>k)
	{
	
		temp = a[k];
		a[k] = a[j];
		a[j] = temp;	
		k++;
		j--;temp = 0;
	}

}

void Reverse(int t){
	int n; int a[n];
	printf("moi ban nhap vao mang :");scanf("%d", &n);
	
	for(int i = 0;i<n;i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	
	SWAP(n,a);
	printf("mang sau khi dao la: \n");
		for(int i = 0;i<n;i++)
		{
			printf("a[%d]= %d\n",i,a[i] );
		}
}


