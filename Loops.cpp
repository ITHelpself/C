#include<stdio.h>

void nhap(int &a, int &b, int &c){
    printf("nhap 3 canh cua tam giac:");
    scanf("%d%d%d",&a,&b,&b);
}
void xuat(int a, int b, int c){

}
int main(){
    //khai bao
    int a,b,c;
    // xu li
    nhap(a,b,c);
    xuat(a,b,c);
    return 0;
}