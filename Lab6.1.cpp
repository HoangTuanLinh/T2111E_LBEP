#include<stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int tong=0;
	for(n; n>0; n=n/10){
		tong= tong +n%10;
	}printf("tong cac chu so n la: %d",tong);
}
