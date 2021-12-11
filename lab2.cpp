#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap a= ");
	scanf("%d",&a);
	printf("Nhap b= ");
	scanf("%d",&b);
		int max,c, BCLN;
	if(a>b)
	max=c=a;
	else
	max=c=b;
	while(1){
		if(max%a==0 && max%b==0){
			BCLN=max;
			break;
		}max+=c;
		
	}printf("boi chung nho nhat la: %d\n",BCLN);
	while(a!=b){
		if(a>b){
			a-=b;
		}else{
			b-=a;
		}
	}int UCNN=a;
	printf("uoc chung lon nhat la: %d",UCNN);

}
