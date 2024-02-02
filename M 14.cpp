#include <stdio.h>

float tinh_thue(float thu_nhap) {
    float thue;
    if (thu_nhap > 50000000) {
        thue = thu_nhap * 0.2;
    } else if (thu_nhap > 20000000) {
        thue = thu_nhap * 0.1;
    } else {
        thue = thu_nhap * 0.05;
    }
    return thue;
}

float tinh_thue_trong_n_thang(float tong_thu_nhap, int so_thang) {
    float thu_nhap_trung_binh = tong_thu_nhap / so_thang;
    float tong_thue = tinh_thue(thu_nhap_trung_binh) * so_thang;
    return tong_thue;
}

int Incometax(int t) {
    float tong_thu_nhap;
    int so_thang;

    printf("Nhap tong thu nhap: ");scanf("%f", &tong_thu_nhap);
    printf("Nhap so thang: ");scanf("%d", &so_thang);

    float tong_thue = tinh_thue_trong_n_thang(tong_thu_nhap, so_thang);

    printf("Tong so tien thue phai nop trong %d thang la: %.2f VND\n", so_thang, tong_thue);
}

