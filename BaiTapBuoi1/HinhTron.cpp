#include<stdio.h>
#include<math.h>
#define PI 3.14
void nhap(float &r){
    printf("Nhap ban kinh: ");
    scanf("%f",&r);
}
float chuViHinhTron(float r){
    return 2*PI*r;
}
float dienTichHinhTron(float r){
    return PI * pow(r,2);
}
void xuat(float r){
    printf("Hinh tron ban kinh %.2f co C = %.2f, S = %.2f",r,chuViHinhTron(r),dienTichHinhTron(r));
}
int main(){
    float r;
    nhap(r);
    xuat(r);
    return 0;
}