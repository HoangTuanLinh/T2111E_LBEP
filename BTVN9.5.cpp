#include<stdio.h>
int TimUCLN(int a,int b){
	if(a==0 && b==0){
	return NULL;
	}
	if(a<0) a = -a;
	if(b<0) b= -b;
	for(int uc = a; uc>=1;uc--){
		if(a%uc==0 && b%uc==0){
			return uc;
		}
	}
}
int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	int UCLN= TimUCLN(a,b);
	printf("UCLN = %d",UCLN);
}
