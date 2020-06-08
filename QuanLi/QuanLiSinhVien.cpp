#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct book_st{
    char ten[30];
    char theloai[30];
    int giatien;
};
void hoanVi(book_st &book1, book_st &book2);
void menu(book_st *bookList, int n);
void nhapSach(book_st *bookList, int n);
void sapXepTheoTheLoai(book_st *bookList, int n);
void xuatChiTietCuonSach(book_st *bookList, int n);
book_st timSachTheoTheLoai(book_st *booKList, int n, char theloai[]);
book_st xuatVaoTep(book_st *bookList, int n, char path[]);

int main(){
      int n = 3;
    book_st *bookList = (struct book_st *)malloc(n * sizeof(struct book_st));
    menu(bookList,n);
    return 0;
}
void hoanVi(book_st &book1, book_st &book2){
    book_st temp;
    temp = book1;
    book1 = book2;
    book2 = temp;
}
void nhapSach(book_st *bookList, int n){
    for(int i=0; i<3;i++){
        fflush(stdin);
        printf(" Nhap cuon sach thu %d: ", i);
        printf("Ten: ");
        gets(bookList->ten);
        printf("The loai: ");
        gets(bookList->theloai);
        printf("Gia Tien: ");
        scanf("%d",&bookList->giatien);
    }
}
void sapXepTheoTheLoai(book_st *bookList, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(strcmp(*(bookList+i)->theloai,*(bookList+j)->theloai) >0){
                hoanVi(bookList[i],bookList[j]);
            }
        }
    }
}
void xuatChiTietCuonSach(book_st *bookList, int n){
    sapXepTheoTheLoai(bookList, n);
    printf("STT\t ten\t theloai\t giatien\n");
    for(int i=0;i<n;i++){
        printf("%d\t %s\t %s\t %d\n");
    }
}
void menu(book_st *bookList, int n){
    int luachon;
    printf("-----------Quan li Sach--------------------------\n");
    printf("-----------1. Nhap vao 1 cuon sach---------------\n");
    printf("-----------2. xuat chi tiet tung cuon sach-------\n");
    printf("-----------3. tim kiem sach theo the loai--------\n");
    printf("-----------4. xuat vao tep-----------------------\n");
    printf("-----------5. Thoat------------------------------\n");
    printf("Nhap vao chuc nang: ");
    scanf("%d", &luachon);
    switch (luachon)
    {
    case 1:
        nhapSach(bookList,n);
        break;
    case 2:
        xuatChiTietCuonSach(bookList,n);
        break;
    default:
        break;
    }
}