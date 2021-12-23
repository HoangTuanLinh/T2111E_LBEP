#include<stdio.h>
#include<math.h>
float DTTamGiac(int a,int b,int c){
	float p=(float)(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
	int a,b,c;
	do{
		printf("Nhap canh a=");
		scanf("%d",&a);
		printf("Nhap canh b=");
		scanf("%d",&b);
		printf("Nhap canh c=");
		scanf("%d",&c);
	}while(!(a+b>c && a+c>b && b+c>a));
	int DT= DTTamGiac(a,b,c);
	printf("Chu vi tam giac la: %d",DT);
}
