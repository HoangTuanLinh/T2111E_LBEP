#include<stdio.h>
int main(){
	int a;
	printf("Nhap a: ");
	scanf("%d",&a);
	int  SND;
	if(a>=1000&& a<10000){
		SND=(a%10)*1000+((a/10)%10)*100+(((a/10)/10)%10)*10+(((a/10)/10)/10);
		printf("so nghich dao la = %d",SND);
	}else{
		printf("khong phai so nguyen duong 4 chu so");
	}
}
