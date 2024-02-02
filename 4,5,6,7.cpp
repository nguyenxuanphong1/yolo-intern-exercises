#include <stdio.h>
bool check(int n)
{
    if(n % 2 == 0)
        return 1;
    else return 0;  
}
 
void demChanLe(int n, int a[]){
    int demChan = 0, demLe = 0;
    for(int i=0;i<n;i++)
    {
        if(check(a[i]) ==1 )
            demChan++;
        else demLe++;
    }
     
    printf("So luong so chan la: %d", demChan);
    printf("\nSo luong so le la: %d", demLe);
}

int Sumtongle(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i<n; i++)
	{
		if (a[i] % 2 != 0)
		{
			sum += a[i];
		}
	}
	return sum;
}
 
 int Sumtongchan(int a[], int n)
 {
 	int sum = 0;
	 for (int i = 0; i<n; i++)
 	{
	 if (a[i] % 2 != 0)
	 	{
	 		continue;
	 	}
	 	sum += a[i];
	 }
	 return sum;
 }
int Oddcount(int t)
{
    int n;
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n); 
    int a[n]; 
 
    for(int i=0;i<n;i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
     
    demChanLe(n,a);
    
    printf("\ntong so le = %d\n", Sumtongle(a, n));
    printf("\n tong so chan = %d\n",  Sumtongchan(a, n));
}
