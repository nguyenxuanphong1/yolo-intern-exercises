#include<stdio.h>
void Multiplication(int t)
{
	int n;
    printf("Moi ban nhap n mang : ");
    scanf("%d", &n);
    
    int a[n], b[n], c[n]; 
    
    printf("\nGia tri cua mang a:\n");
    for(int i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\nGia tri cua mang b:\n");
    for(int i=0; i<n; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    
    
    for(int i=0; i<n; i++) {
        c[i] = a[i] * b[i];
    }
    
   
    printf("\nTich cua 2 mang :\n");
    for(int i=0; i<n; i++) {
        printf("c[%d] = %d\n", i, c[i]);
    }
}
