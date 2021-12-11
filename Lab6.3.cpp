#include<stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int sdn=0;
	for(n;n>0;n/=10){
		if(n>10){
			sdn=(sdn+n%10)*10;
		}
		else { sdn+=n;
		}
	}
	printf("so dao nguoc cua n la: %d",sdn);
}
