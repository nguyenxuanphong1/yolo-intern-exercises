#include<stdio.h>
void Division(int t)
{
	int n;
    printf("Moi ban nhap n mang : ");
    scanf("%d", &n);
    
    float a[n], b[n],c[n]; 
    
    printf("\ngia tri mang a:\n");
    for(int i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
    
    printf("\ngia tri mang b:\n");
    for(int i=0; i<n; i++) {
        printf("b[%d] = ", i);
        scanf("%f", &b[i]);
    }
    
    
    for(int i=0; i<n; i++) {
        c[i] = a[i] / b[i];
    }
    
   
    printf("\nThuong cua 2 so :\n");
    for(int i=0; i<n; i++) {
        printf("c[%d] = %.2f\n", i, c[i]);
    }
}
