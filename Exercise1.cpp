#include<stdio.h>
int main(){ // Tinh S(n)= 1 + 1/2 + 1/3 +... + 1/n
	int n;
	do{
	printf("Nhap so n=");
	scanf("%d",&n);
	if(n<=0){
	printf("Error\n");
    }
    }while(n<=0);
	float S = 0;
	for(int i=1;i<=n;i++){
		S= S+ 1.0/i ;
	}printf("Gia tri S = %f",S);
    
}

