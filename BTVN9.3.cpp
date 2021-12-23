#include<stdio.h>
int ChuViTamGiac(int a, int b, int c){
	return a+b+c;
}
int main(){
	int a,b,c;
	do{
		printf("Nhap canh a=");
		scanf("%d",&a);
		printf("Nhap canh b=");
		scanf("%d",&b);
		printf("Nhap canh c=");
		scanf("%d",&c);
	}while(!(a+b>c && a+c>b && b+c>a));
	int CV= ChuViTamGiac(a,b,c);
	printf("Chu vi tam giac la: %d",CV);
}
