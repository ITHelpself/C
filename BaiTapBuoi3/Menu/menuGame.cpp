#include<stdio.h>
enum LUACHON{
    PLAY = 1,
    BXH = 2,
    HELP = 3,
    EXIT = 4
};
enum PHATBAIHAT{
    CAILUONG = 1,
    NHACTRE = 2
};
 // Play = 1 => 1!= Play
void nhapLuaChon(int &luaChon){
    // nhap tu 1 den 4
    printf("nhap lua chon: ");
    scanf("%d",&luaChon);
}
void chonLuaNhac(int luaChon){
    switch (luaChon)
    {
    case PLAY: 
        printf("Play Game!");
        break;
    case BXH:
        printf("BXH");
        break;
    case HELP:
        printf("Help");
        break;
    case EXIT:
        printf("Exit");
        break;
    default:
        printf("Lua chon khong hop le");
        break;
    }
}
void chonLuaGame(int luaChon){
    switch (luaChon)
    {
    case PLAY: 
        printf("Play Game!");
        break;
    case BXH:
        printf("BXH");
        break;
    case HELP:
        printf("Help");
        break;
    case EXIT:
        printf("Exit");
        break;
    default:
        printf("Lua chon khong hop le");
        break;
    }
}
// xuat
void xuatLuatChoi(){
    printf("\n---------------------------------------\n");
    printf("1. play shshs game\n");
    printf("2. BXH\n");
    printf("3. Help\n");
    printf("4. Exit\n");
}
int main(){
    int luaChon;
    xuatLuatChoi();
    nhapLuaChon(luaChon);
    return 0;
}