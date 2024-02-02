#include<stdio.h>
void Ascendingarray(int n, int m,int a[],int b[])
{
	int i = 0, j = 0, count = 0, c[n+m];
	while(i<n && j<m)
	{
		if (a[i] <= b[j])
		{
			c[count++] = a[i];
			++i;
		}else
		{
			c[count++] = b[j];
			++j;
		}
	}
	while(i<n)
	{
		c[count++] = a[i++];
	}
	while(j<m)
	{
		c[count++] = b[j++];
	}
	for(int i = 0; i<n+m;i++)
	{
		printf("%d ",c[i]);
	}
}
void Connectingincrements(int t)
{
	int n,m;
    int a[n], b[m];
    printf("So phan tu cua mang a la :");scanf("%d",&n);
     for(int i = 0; i < n; i++)
	{
		 printf("a[%d] = ", i);
        scanf("%d", &a[i]);
	} 
    printf("So phan tu cua mang b la :");scanf("%d",&m);
	 for(int i = 0; i < m; i++)
	{
		 printf("b[%d] = ", i);
        scanf("%d", &b[i]);
	}
	printf("Mang c sau khi noi hai mang a va b duoc sap xep tang dan : ");
	Ascendingarray(n,m,a,b);
}
