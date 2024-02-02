#include<stdio.h>
void Findlocation(int t){

	int n, a[100],element;
	printf("Moi ban nhap n mang:");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}

    printf("Nhap vao vi tri muon kiem tra :");
	scanf("%d",&element);
	
	int j;
	for(int i = 0; i < n; i++){
		if(element == a[i])
		{
			j = i;
			break;
		} 
	}
	if(j != 0)
	{
		printf("vi tri muon tim %d : %d\n",element, j);
	}else{
		printf("khong tim thay vi tri %d trong mang\n ",element);
	}

}
