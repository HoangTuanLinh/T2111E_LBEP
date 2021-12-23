#include<stdio.h>
int SoNguyenTo(int n){
	int m=n+1;
    for(m;true;m++){
    	int count =0;
    	for(int j=2;j<=m/2; j++){
    		if(m%j==0){
    			count++;
			}
		}if(count==0){
			return m;
		}
	}
}
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int m = SoNguyenTo(n); 
    printf("So nguyen to tiep theo cua n la: %d",m);
}
