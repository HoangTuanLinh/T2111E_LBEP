#include<stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	if(n>2){
	

	int i=2;
	for( i;i<n;i++){
		
		int count=0,num=1;
		for(num;num<=i;num++){
			if(i%num==0){
				count++;
		}
		}if(count==2){
		printf("so nguyen to nho hon n la: %d\n",i);}
}
}else{
	printf("so n khong thoa man");
	
}
}
