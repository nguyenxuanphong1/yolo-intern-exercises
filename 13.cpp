#include<stdio.h>
#include<iostream>


void Reverse(int t){
	int n;int a[n];
	
	printf("nhap vao so phan tu cua mang : "); scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	int result[n];
	for(int i = n; i>=0;i--){
		result [n-1-i] = a[i];
	}
	

		printf("mang sau khi dao nguoc la:\n");
	for(int i=0;i<n;i++){
		printf("a[%d] = %d\n",i,result[i]);
	}
}

