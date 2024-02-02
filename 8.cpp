#include <stdio.h>
#include <math.h>

void Checkoriginal(int t){
	int n; 
	printf("\n moi ban nhap so :");scanf("%d", &n);
	if(n<2){
		printf("\n%d khong phai so nguyen to", n);
	}
	
	int count = 0;
	for (int i = 2;i<n; i++){
		if(n % i == 0 ){
			count ++;
		}	
	}
	if (count == 0){
		printf("\n %d co la so nguyen to\n", n);
	}else{
		printf("\n %d khong phai so nguyen to\n", n);
		}
}
