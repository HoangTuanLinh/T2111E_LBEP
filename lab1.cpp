#include<stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int i=1,m=0;
	for(i;i<=n; i++){
		if(n%i==0){
		printf("uoc cua n la: %d\n",i);
		m+=i;
		}
	}printf("tong uoc cua n la: %d",m);
}
