#include<stdlib.h>
#include<stdio.h>
typedef struct  SinhVien// sinh vien giống như 1 kiểu dữ liệu
{
    char masinhvien[20];
    // tự viết tiếp nhé
};
void nhapSoLuongSinhVien(int &soluong);
void nhapSinhVien(SinhVien &sinhvien);// nhap 1 sinh vien
void nhapDanhSachSinhVien(SinhVien sinhvien[], int soluong);

int main(){
    SinhVien *danhsachsinhvien;
    int soluong;
    nhapSoLuongSinhVien(soluong);
    // cap phat bo nho cho danh sach sinh vien
    danhsachsinhvien = (struct SinhVien*) malloc (soluong*sizeof(SinhVien));
    nhapDanhSachSinhVien(danhsachsinhvien, soluong);
}
void nhapSoLuongSinhVien(int &soluong){
    // tự viết tiếp nhé
}
void nhapSinhVien(SinhVien &sinhvien){// nhap 1 sinh vien
    fflush(stdin);// truoc gets thì bỏ fflush
    printf("nhap ma sinh vien: ");
    gets(sinhvien.masinhvien);
    // tư viết tiếp nhé
}
void nhapDanhSachSinhVien(SinhVien sinhvien[], int soluong){
    for(int i=0;i<soluong;i++){
        printf("Sinh vien thu %d: ", i);
        nhapSinhVien(sinhvien[i]);
    }
}