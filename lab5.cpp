#include<stdio.h>
int main(){
	int a,b;
	do{
	printf("Nhap a= ");
	scanf("%d",&a);
	printf("Nhap b= ");
	scanf("%d",&b);
    }while(!(a<b && a>0));
	int i=a;
	for( i;i<=b;i++){
		int count=0,num=1;
		for(num;num<=i;num++){
			if(i%num==0){
				count++;
		}
		}if(count==2){
		printf("%d\t",i);}
}
}
