#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap so n= ");
	scanf("%d",&n);
	if(n>1){
		int m=0;
		for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		m++;
		}if(m!=0){
			printf("n khong phai so nguyen to");
		}else{
			printf("n la so nguyen to");
		}		
	}else{
		printf("n k hong phai so nguyen to");
	}
}
