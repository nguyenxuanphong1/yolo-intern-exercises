#include<stdio.h>
void Difference(int t)
{
	int n;
    printf("Nhap n phan tu  mang: ");
    scanf("%d", &n);
    
    int a[n], b[n], c[n]; 
    
    printf("\nGia tri cua mang a:\n");
    for(int i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\nGia tri cua mang a b:\n");
    for(int i=0; i<n; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    
    
    for(int i=0; i<n; i++) {
        c[i] = a[i] - b[i];
    }
    
   
    printf("\nSu khac biet cua 2 mang:\n");
    for(int i=0; i<n; i++) {
        printf("c[%d] = %d\n", i, c[i]);
    }
}
