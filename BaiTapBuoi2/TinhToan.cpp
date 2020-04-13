#include<stdio.h>
#include<math.h>
void nhap(int &n){
    printf("Nhap n:");
    scanf("%d",&n);
}
float S1(int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        tong = tong + (i+1);
    }
    return tong;
}
float S2(int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        tong = tong + pow((i+1),2);
    }
    return tong;
}
float S3(int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        tong = tong + (float)1/(i+1);
    }
    return tong;
}
float S4(int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        tong = tong + (float)1/(2*(i+1));
    }
    return tong;
}
float S5(int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        tong = tong + (float)1/(2*(i+1)+1);
    }
    return tong;
}
float S6(int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        tong = tong + (float)1/((i+1)*(i+2));
    }
    return tong;
}
float S7(int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        tong = tong + (float)(i+1)/(i+2);
    }
    return tong;
}
float S8(int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        tong = tong + (float)(2*i+1)/(2*i+2);
    }
    return tong;
}
float T9(int n){
    float tich = 1;
    for(int i=0;i<n;i++){
        tich = tich*(i+1);
    }
    return tich;
}
float T10(int x, int n){
    return pow(x,n);
}
float S11(int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        int temp = 1;
        tong = tong + S1(i+1);
       }
    return tong;
}
float S12(int x, int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        tong = tong + pow(x,i+1);
    }
    return tong;
}
float S13(int x, int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        tong = tong +  pow(x,2*(i+1));
    }
    return tong;
}
float S14(int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        tong = tong + (float)1/(2*i+1);
    }
    return tong;
}
float S15(int n){
    float tong = 0;
    for(int i=0; i<n;i++){
        tong = tong + (float)1/S1(i+1);
    }
    return tong;
}
float S16(int x, int n){
    float tong = 0;
   for(int i=0; i<n;i++){
        tong = tong + (float)T10(x,(i+1))/S1(i+1);
    }
    return tong;
}
float S17(int x, int n){
    float tong = 0;
   for(int i=0; i<n;i++){
        tong = tong + T10(x,(i+1))/T9(i+1);
    }
    return tong;
}
float S18(int x, int n){
  float tong = 0;
   for(int i=0; i<=n;i++){
        tong = tong + T10(x,2*(i))/T9(2*i);
    }
    return tong;
}
float S19(int x, int n){
    float tong = 0;
    for(int i=0; i<=n;i++){
        tong = tong + T10(x,2*(i)+1)/ T9(2*i+1);
    }
    return tong;
}
void xuat(int n){
    // tu viet
}
void xuat(int x, int n){
    // tu viet
}
int main(){
    // tu viet
    return 0;
}