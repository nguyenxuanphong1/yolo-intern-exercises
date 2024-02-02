#include<stdio.h>
#include<string.h>
void Arrayconcatenation(int t)
{
	int n,m;
	int a[n], b[m];
    printf("Moi ban nhap vao mang a:");scanf("%d",&n);
    printf("Moi ban nhap vao mang b:");scanf("%d",&m);
    
    
    printf("Nhap vao gia tri cua mang a:\n");
    for(int i = 0; i < n; i++){printf("a[%d] = ",i);
	scanf("%d",&a[i]);}
      printf("Nhap vao gia tri cua mang b:\n");
    for(int i = 0; i < m; i++){printf("b[%d] = ",i);
	scanf("%d",&b[i]);}
     int len1 = sizeof(a)/sizeof(int);
     int len2 = sizeof(b)/sizeof(int);
     int resultlen = len1 + len2;
     int result[resultlen];
     for(int i = 0; i < len1; i++)
	 {
        	result[i] = a[i];
	 }
	for(int i = 0; i < len2; i++){
		result[len1 + i] = b[i];
	}
	printf("Mang sau khi noi :");
	for(int i = 0; i < resultlen; i++){
		printf("%d ",result[i]);
	}
	printf("\n");
}
