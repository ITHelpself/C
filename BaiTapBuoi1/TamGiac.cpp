#include<stdio.h>
#include<math.h>
// nhap
void nhap(int &a, int &b, int &c){
	printf("nhap 3 canh tam giac: ");
	scanf("%d%d%d",&a,&b,&c);	
}
// xu li
float chuViTamGiac(int a, int b, int c){
	return (float)(a+b+c);
}
float dienTichTamGiac(int a, int b, int c){
	float p = chuViTamGiac(a,b,c)/2; // p la nua chu vi
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
bool laTamGiacCan(int a, int b, int c){
	bool flag = false;
	if(a==b || b==c|| a==c){
		flag = true;
		}
	return flag;	
}
bool laTamGiacDeu(int a, int b, int c){
	bool flag = false;
	if(a==b && b==c){
		flag = true;
	}
	return flag;	
}
// xuat
void xuatChuVi(int a, int b, int c){
	printf("\nChu vi: %.0f\n",chuViTamGiac(a,b,c));
}
void xuatDienTich(int a,int b, int c){
	printf("\nDien tich: %.2f\n",dienTichTamGiac(a,b,c));
}
void xuatLaTamGiac(int a, int b, int c){
	if(laTamGiacDeu(a,b,c)){
		printf("\n la tam giac deu \n");
		printf("la tam giac can \n");
	}
	else{
		printf("khong phai la tam giac deu\n");
		if(laTamGiacCan(a,b,c)){
			printf("la tam giac can \n");		
			}
		else{
			printf("khong la tam giac can \n");
		}
	}
}
int main(){
	// khai bao
	int a,b,c;
	// xu li
	nhap(a,b,c);
	xuatChuVi(a,b,c);
	xuatDienTich(a,b,c);
	xuatLaTamGiac(a,b,c);
	return 0;	
}