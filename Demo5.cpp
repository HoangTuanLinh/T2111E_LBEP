#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	printf("Nhap a=");
	scanf("%f", &a);
	printf("Nhap b=");
	scanf("%f", &b);
	printf("Nhap c=");
	scanf("%f", &c);
	float x,x1,x2;
	float delta = b*b - 4*a*c;
	 if(a==0){
	 	if(b==0){
	 		if(c==0){
	 		printf("Phuong trinh vo so nghiem");
	 	}else{
	 		printf("Phuong trinh vo nghiem");
		 }
		 }else{
	 	x=(-c)/b;
	 	printf("Phuong trinh co nghiem x = %f", x);
	 }
	 }else{
	 	if(delta >= 0){
		 x1= (-b + sqrt(delta))/(2*a);
		 x2= (-b - sqrt(delta))/(2*a);
		 printf("Phuong trinh co nghiem x1 = %f\n", x1);
		 printf("Phuong trinh co nghiem x2 = %f\n", x2);
		 }else{
		 	printf("Phuong trinh vo nghiem");
		 }
	 }
}
