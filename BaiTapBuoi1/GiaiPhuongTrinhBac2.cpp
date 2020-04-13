#include<stdio.h>
#include<math.h>
#define PI 3.14
void nhap(int &a, int &b, int &c){
    do
    {
        printf("Nhap a: ");
        scanf("%d",&a);
    } while (a==0);
    printf("Nhap b,c: ");
    scanf("%d%d",&b,&c);
}
void giaiPhuongTrinhBac2(int a,int b, int c){
    float delta = pow(b,2)- 4*a*c;
    if(delta < 0){
        printf("Phuong trinh vo nghiem!");
    } else if(delta == 0){
        float x = (float)-b/(2*a);
        printf("Phuong trinh co mot nghiem: %d.2f",x);
    } else {
        float x1,x2;
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f va x2 = %.2f",x1,x2);
    }
}
int main(){
    int a,b,c;
    nhap(a,b,c);
    giaiPhuongTrinhBac2(a,b,c);
    return 0;
}