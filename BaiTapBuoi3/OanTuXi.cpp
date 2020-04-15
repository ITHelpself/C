#include<stdio.h>
#include<stdlib.h>
enum LUACHON {
    Bua = 0,
    Keo = 1,
    Giay = 2
};
void nhapLuaChon(int &luaChon){
    // nhap tu 1 den 4
    printf("nhap lua chon: \n");
    scanf("%d",&luaChon);
}
void nhapLuaChon(int &luaChon1, int &luaChon2){
    printf("Nguoi choi 1 - ");
    nhapLuaChon(luaChon1);
    printf("Nguoi choi 2 - ");
    nhapLuaChon(luaChon2);
}
void Play(int luaChon1, int luaChon2){
    switch (luaChon1)
    {
    case Bua:{
       switch (luaChon2) {
            case Bua:
                printf("Nguoi Choi 1 va Nguoi Choi 2 hoa nhau!");
            break;
            case Keo:
                printf("Nguoi Choi 1 thang nguoi choi 2!");
                break;
            case Giay:
                printf("Nguoi Choi 1 Thua nguoi choi 2!");
                break;
            default:
                printf("Lua chon cua nguoi choi 2 khong hop le");
                break;
            }
        };
        break;
    case Keo:{
       switch (luaChon2) {
            case Keo:
                printf("Nguoi Choi 1 va Nguoi Choi 2 hoa nhau!");
            break;
            case Giay:
                printf("Nguoi Choi 1 thang nguoi choi 2!");
                break;
            case Bua:
                printf("Nguoi Choi 1 Thua nguoi choi 2!");
                break;
            default:
                printf("Lua chon cua nguoi choi 2 khong hop le");
                break;
            }
        };
        break;
    case Giay:{
       switch (luaChon2) {
            case Giay:
                printf("Nguoi Choi 1 va Nguoi Choi 2 hoa nhau!");
            break;
            case Bua:
                printf("Nguoi Choi 1 thang nguoi choi 2!");
                break;
            case Keo:
                printf("Nguoi Choi 1 Thua nguoi choi 2!");
                break;
            default:
                printf("Lua chon cua nguoi choi 2 khong hop le");
                break;
            }
        };
        break;
    default:
        printf("Lua chon cua nguoi choi 1 khong hop le");
        break;
    }
}
// xuat
void xuatMenuChon(){
    printf("\n---------------------------------------\n");
    printf("0. Bua\n");
    printf("1. Keo\n");
    printf("2. Giay\n");
    printf("\n---------------------------------------\n");
}
int main(){
    int luaChon1,luaChon2;
    xuatMenuChon();
    nhapLuaChon(luaChon1,luaChon2);
    Play(luaChon1,luaChon2);
    return 0;
}