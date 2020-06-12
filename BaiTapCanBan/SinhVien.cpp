#include<stdio.h>;
#define MAX_SIZE 100
typedef struct NgaySinh
{
    int ngay;
    int thang;
    int nam;
};
typedef struct SinhVien
{
    char hoten[30];// "Nguyen Van A"
    int gioitinh;// 1: nam, 2: nu, khac 1,2: khac
    int tuoi;// 14
    NgaySinh ngaysinh; 
};
enum GioiTinh{
    NAM=1,
    NU=2,
    KHAC=0,
};
void nhapSinhVien(SinhVien &sinhvien);
void xuatSinhVien(SinhVien sinhvien);
// nhap danh sach sinh vien
void nhapDanhSachSinhVien(SinhVien danhsach[],int &soluong);//dinh nghia ham nhap danh sach sinh vien
void xuatDanhSachSinhVien(SinhVien danhsach[],int &soluong);
void xuatDanhSachSinhVienNam(SinhVien danhsach[], int soluong);

int main(){  
    SinhVien danhsach[MAX_SIZE];
    int soluong;
    nhapDanhSachSinhVien(danhsach,soluong);
   // xuatDanhSachSinhVien(danhsach,soluong);
    xuatDanhSachSinhVienNam(danhsach,soluong);
    return 0;
}
void nhapSinhVien(SinhVien &sinhvien){  
    fflush(stdin);
    printf("Nhap ho ten: ");
    gets(sinhvien.hoten);
    printf("nhap gioi tinh: ");
    scanf("%d", &sinhvien.gioitinh);
    printf("Nhap tuoi: ");
    scanf("%d", &sinhvien.tuoi);
    printf("nhap ngay sinh: ");
    scanf("%d%d%d", &sinhvien.ngaysinh.ngay,&sinhvien.ngaysinh.thang,&sinhvien.ngaysinh.nam);
   } 
void xuatSinhVien(SinhVien sinhvien){
    printf("%s\t",sinhvien.hoten);
    if(sinhvien.gioitinh==NAM)
    {
        printf("nam\t;");
    }
    else if(sinhvien.gioitinh==NU){
        printf("nu\t");
    }
    else{
        printf("khong xac dinh\t");
    }
    printf(" %d\t%d/%d/%d",sinhvien.tuoi,sinhvien.ngaysinh.ngay,sinhvien.ngaysinh.thang,sinhvien.ngaysinh.nam);
}
void nhapDanhSachSinhVien(SinhVien danhsach[],int &soluong){// xay dung ham nhap danh sach sinh vien
    printf("nhapsoluongSinhVien:");
    scanf("%d",&soluong);
    for(int i=0;i<soluong;i++){
        printf("Sinh Vien thu %d:\n",i);
        nhapSinhVien(danhsach[i]);
    }
}
void xuatDanhSachSinhVien(SinhVien danhsach[],int &soluong){
    printf("Ho ten\tGioi tinh\tTuoi\tNgay sinh");
    for(int i=0;i<soluong;i++){
        printf("\n");
        xuatSinhVien(danhsach[i]);
    }
}
void xuatDanhSachSinhVienNam(SinhVien danhsach[], int soluong){
    printf("Ho ten\tGioi tinh\tTuoi\tNgaysinh");
    for(int i=0; i<soluong;i++){
        printf("\n");
        if(danhsach[i].gioitinh==NAM){
            xuatSinhVien(danhsach[i]);
        }
    }
}