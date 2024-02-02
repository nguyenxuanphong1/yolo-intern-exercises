#include <stdio.h>

void Motelprices(int t) {
    int checkin, checkout;
    printf("Nhap gio vao: ");scanf("%d", &checkin);
    printf("Nhap gio ra: ");scanf("%d", &checkout);
    
    
    int totaltime = 0;
    bool isovernight = checkout < checkin;
    if(isovernight)
	{
		totaltime = 24 - checkin + checkout;
	}
	else
	{
		totaltime = checkout-checkin;
	}
	printf("%d ",totaltime);
    if( totaltime > 24) 
	{
		printf("thoi gian nhap vao khong hop le!");
	} 
	int sotienphaitra1 = 0;
	int sotienphaitra = 0;
	
	if(totaltime<2)
	{
		sotienphaitra1 = (totaltime*70);
	}
	else
	{
		sotienphaitra1 = ((totaltime-2)*50+140);
	}
	
	if(!isovernight)
	{
		sotienphaitra = sotienphaitra1;
	}
	
    if(isovernight)
	{
		if(checkout<8)
		{
			sotienphaitra = sotienphaitra1 + 160;
		}
		else
		{
			sotienphaitra = sotienphaitra1 + 160 + (checkout - 8)*40;
		}
	}	
	printf("so tien khach tra khi thue phong :%d",sotienphaitra);
}

