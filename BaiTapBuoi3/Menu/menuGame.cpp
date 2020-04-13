#include<stdio.h>
void nhapLuaChon(int &luaChon){
    // nhap tu 1 den 4
    printf("nhap lua chon: ");
    scanf("%d",&luaChon);
}
void chonLua(int luaChon){
    switch (luaChon)
    {
    case 1:
        printf("Play Game!");
        break;
    case 2:
        printf("BXH");
        break;
    case 3:
        printf("Help");
        break;
    case 4:
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
    chonLua(luaChon);
    return 0;
}