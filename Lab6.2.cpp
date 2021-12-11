#include<stdio.h>
int main(){
	int n;
	printf("Nhap n! = ");
	scanf("%d",&n);
	int i=1,tich =1;
	for(;i<=n;i++){
		tich *= i;
	}printf("n!= %d",tich);
	
}
