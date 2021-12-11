#include<stdio.h>
int main(){
	int n;
	printf("nhap vi tri trong fibonaci: ");
	scanf("%d",&n);
	int a=0, b=1, c=1,i=1,j=0,vtri;
	if(n<0){
		printf("khong thuoc day fibonaci");
	}else{
		do{
			vtri=a;
			a=b;
			b=c;
			c=a+b;
			i++;
			j++;
		}while(j<=n);
		printf("vi tri thu %d trong day fibonaci la: %d",n,vtri);
	}
}
	

