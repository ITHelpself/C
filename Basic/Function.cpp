#include<stdio.h>
int sum(int a, int b);
int divide(int a, int b);
int main(){
    int (*fn)(int, int) = &sum;
    int x = 3,y = 5;
    printf("%d + %d = %d",x,y, fn(x,y));
    return 0;
}
int sum(int a, int b){
    return a+b;
}
float divide(int a, int b){
    return (float) a/b; // using cast operator
}