#include<stdio.h>
#define MAX_SIZE 50
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int timMax(int a[],int n);
void xuatMax(int a[],int n);
int main(){
    int a[MAX_SIZE];
    int n;
    nhapMang(a,n);
    xuatMang(a,n);
    xuatMax(a,n);
    return 0;
}
void nhapMang(int a[], int &n){
    int temp;
    printf("moi ban nhap vao n\n");
    scanf("%d",&n);   
    for(int i=0; i<n; i++){
        printf("nhap vao mang thu %d\n",i);
        scanf("%d",&temp);
        a[i] = temp;       
    }
}
void xuatMang(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }
}
int timMax(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
void xuatMax(int a[],int n)
{
    int max = timMax(a,n);
    printf("\n gia tri lon nhat cua mang la:%d ",max);
    
}