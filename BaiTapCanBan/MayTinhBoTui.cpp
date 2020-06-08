#include<stdio.h>
float tinhTong(int a, int b);
float xuatTong(int a, int b);
int main(){
    int a,b;// khai báo a,b
    // thay đổi giá trị a,b
    a = 3;
    b = 4;
    xuatTong(a,b);
    return 0;
}
float tinhTong(int a, int b){
    return a+b;
}
float xuatTong(int a, int b){
    float tong = tinhTong(a,b);
    printf("Tong = %.2f",tong);
}