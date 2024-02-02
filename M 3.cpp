#include<stdio.h>
void Sum(int t)
{
	 int n;
    printf("Moi ban nhap n mang  : ");
    scanf("%d", &n);
    
    int a[n], b[n], c[n]; 
    
    printf("\nMoi ban nhap vao mang a:\n");
    for(int i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\nMoi ban nhap vao mang b:\n");
    for(int i=0; i<n; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    
    
    for(int i=0; i<n; i++) {
        c[i] = a[i] + b[i];
    }
    
   
    printf("\nTong 2 mang :\n");
    for(int i=0; i<n; i++) {
        printf("c[%d] = %d\n", i, c[i]);
    }
		
	
}
