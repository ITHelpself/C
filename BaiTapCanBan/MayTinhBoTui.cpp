#include <stdio.h>
#include <math.h>
enum PhepToan
{
    CONG = '+',
    TRU = '-',
    NHAN = '*',
    CHIA = '/',
    MU = '^',
};
// định nghĩa hàm --> xây dựng hàm --> gọi hàm
// int, float, char, bool
// void
int tinhTong(int a, int b);
void xuatTong(int a, int b); // định nghĩa hàm xuat tong
void xuatHieu(int a, int b);
int tinhHieu(int a, int b);
void xuatTich(int a, int b);
int tinhTich(int a, int b);
void xuatThuong(int a, int b);
float tinhThuong(int a, int b);
void xuatMu(int a, int b);
void menu(int a, int b);
int main()
{
    int a, b;
    a = 3, b = 4;
    menu(a, b);
    return 0;
}
void xuatTong(int a, int b)
{ // xây dựng hàm xuất tổng
    int tong = tinhTong(a, b);
    printf("tong = %d\n", tong);
}
int tinhTong(int a, int b)
{
    return a + b;
}
int tinhHieu(int a, int b){
    return a - b;
}
void xuatHieu(int a, int b)
{
    int hieu = tinhHieu(a, b);
    printf("Hieu = %d\n", hieu);
}
void xuatTich(int a, int b)
{
    int tich = tinhTich(a, b);
    printf("Tich = %d\n", tich);
}
int tinhTich(int a, int b)
{
    return a * b;
}
void xuatThuong(int a, int b)
{
    float thuong = tinhThuong(a, b);
    printf("Thuong = %f\n", thuong);
}
float tinhThuong(int a, int b)
{
    return (float)a / b;
}
void xuatMu(int a, int b)
{
    int mu = pow(a, b);
    printf(" Mu=%d\n", mu);
}
void menu(int a, int b)
{
    char luachon;
    // in menu
    printf("=============MENU==============\n");
    printf("1.Tinh Tong Hai So Nguyen\n");
    printf("2.Tinh Hieu Hai So Nguyen\n");
    printf("3.Tinh Tich So Nguyen\n");
    printf("4.Tinh Thuong So Nguyen\n");
    printf("5.Tinh So Mu So Hai So Nguyen\n");
    do
    {
        printf("Nhap Phep Tinh:");
        scanf("%c", &luachon);
    } while ((luachon != '+') && (luachon != '-') && (luachon != '/') && (luachon != '*') && (luachon != '^'));
    switch (luachon)
    {
    case CONG:
        xuatTong(a, b);
        break;
    case TRU:
        xuatHieu(a, b);
        break;
    case NHAN:
        xuatTich(a, b);
        break;
    case CHIA:
        xuatThuong(a, b);
        break;
    case MU:
        xuatMu(a, b);
        break;
    }
}