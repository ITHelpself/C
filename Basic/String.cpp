#include<regex>
#include<stdio.h>
#include<string.h>
typedef char* string;// đổi tên kiểu char* thành string
void tokenString(string src, string delimiters);
bool isNull(char *string);
int main(){
    char a[] = "Xin chao ban!";// tai sao a* khong duoc
    string delimiters = " !";
    tokenString(a,delimiters);
}
void tokenString(string src, string delimiters){
    int tokenSize = 0;
    printf("%d",strlen(src));
    printf("%s",src);
    string token = strtok(src,delimiters);
    while (token!=NULL)
    {
        printf("%d: %s\n", tokenSize++, token);
        token = strtok(NULL,delimiters);
    }  
}
int isNull(char *string){
    return strlen(string);
}