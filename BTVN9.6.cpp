#include<stdio.h>
int TimBCNN(int a, int b){
	if(a==0 && b==0){
		return NULL;
	}
	if(a<0) a = -a;
	if(b<0) b= -b;
	for(int bc=a; bc <= a*b; bc++){
		if(bc%a==0 && bc%b==0){
			return bc;
		}
	}
}
int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	int BCNN= TimBCNN(a,b);
	printf("BCNN = %d",BCNN);
}
