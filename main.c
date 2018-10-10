#include <stdio.h>
#include <stdlib.h>

float tinhnuachuvi(int a, int b, int c) {
    return (float) (a + b + c) / 2;
}

int main() {
    int a, b, c;
    printf("Nhap canh a cua tam giac: ");
    scanf("%d", &a);
    printf("Nhap canh b cua tam giac: ");
    scanf("%d", &b);
    printf("Nhap canh c cua tam giac: ");
    scanf("%d", &c);
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("do dai mot canh tam giac khong the nho hon hoac bang 0");
        exit;
    } else if (a + b <= c || a + c <= b || b + c <= a) {
        printf("tong hai canh tam giac luon lon hon hoac bang canh con lai");
        exit;
    } else {
        printf("nua chu vi tam giac la: %.2f", tinhnuachuvi(a, b, c));
    }
    return 0;
}