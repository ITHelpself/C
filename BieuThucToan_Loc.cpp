#include<stdio.h>
void nhap(int &a, int &b){
    printf("Nhap a,b: ");
    scanf("%d%d",&a,&b);
}
float tinhTong(int a, int b){
    return a+b;
}
float tinhHieu(int a, int b){
    return a-b;
}
float tinhTich(int a, int b){
    return a*b;
}
float tinhThuong(int a, int b){
    if(b==0){
        printf("b=0");
        return -1;
    }
    return (float)a/b;
}
void xuat(int a, int b){
    printf("Tong = %.0f\n",tinhTong(a,b));
    printf("Hieu = %.0f\n",tinhHieu(a,b));
    printf("Tich = %.0f\n",tinhTich(a,b));
    printf("Thuong = %.0f\n",tinhThuong(a,b));
}
int main(){
    // khai bao bien
    int a,b;
    // xu li
    nhap(a,b);
    xuat(a,b);
    return 0;
}
