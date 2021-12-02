#include<stdio.h>
int main(){
	// input  A,B,C
	int A,B,C;
	printf("Nhap A=");
	scanf("%d",&A);
	printf("Nhap B=");
	scanf("%d",&B);
	printf("Nhap C=");
	scanf("%d",&C);
	
	if(A<B){
	if(A<C){
	printf("so nho nhat la: %d",A);
}else{
	printf("so nho nhat la: %d",C);
}
}else{
if(B<C){
	printf("so nho nhat la: %d",B);
}else{
	printf("so nho nhat la: %d",C);
}
}
}


	

	
