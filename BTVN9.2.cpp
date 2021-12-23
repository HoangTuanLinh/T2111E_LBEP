#include<stdio.h>
int TongCacSo(int n){
	int tong = 0;
	while(n!=0){
		tong += n%10;
		n = n/10;
	}return tong;
}
int main(){
	int n;
	do{
	printf("nhap so n=");
	scanf("%d",&n);
    }while(n<=0);;
	int tong = TongCacSo(n);
	printf("Tong cac so cua so nguyen to n la: %d",tong);
}
