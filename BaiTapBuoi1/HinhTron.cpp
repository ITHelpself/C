#include<stdio.h>
#include<math.h>
#define PI 3.14
void drawLine(){
    printf("---------------------------------\n");
}
void huongDanSuDung(){
   drawLine();
   printf("1. play!");
   printf("2. Help!");
   printf("3. Exit!");
   drawLine();
}
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
    drawLine();
    printf("Hinh tron ban kinh %.2f co C = %.2f, S = %.2f\n",r,chuViHinhTron(r),dienTichHinhTron(r));
    drawLine();
}
int main(){
    float r;
    nhap(r);
    xuat(r);
    return 0;
}