#include<stdio.h>
void nhap(int &a, int &b){
    do
    {
        printf("Nhap a: ");
        scanf("%d",&a);
    } while (a==0);
    printf("Nhap b: ");
    scanf("%d",&b);
}
void giaiPhuongTrinhBac1(int a,int b){
    printf("Phuong trinh co nghiem: %.2f",(float)-b/a);
}
int main(){
    int a,b;
    nhap(a,b);
    giaiPhuongTrinhBac1(a,b);
    return 0;
}