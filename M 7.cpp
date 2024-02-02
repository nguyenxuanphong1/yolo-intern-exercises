#include<stdio.h>
void Take(int t)
{
	int n;
    printf("Moi ban nhap n mang: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("\ngia tri mang a:\n");
    for(int i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int start;
    int end;
	printf("vi tri bat dau : ");
	scanf("%d",&start);
	printf("vi tri ket thuc: ");
	scanf("%d",&end);
	int b[end - start + 1];
	for(int i = start; i <= end; i++)
	{
		b[i - start] = a[i];
	}
	printf("Mang b : ");
	for(int i = 0; i < (end- start +1); i++)
	{
		printf("%d ", b[i]);
	}
    printf("\n");
} 
