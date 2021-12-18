#include<stdio.h>
int main(){
	int n;
	printf("Nhap n so trong mang arr[n]: ");
	scanf("%d",&n);
	int arr[n],i=0;
	for(i=0; i<n; i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}int tong=0,d=0;
	float TBC;
	for(i=0; i<n; i++){
		if(arr[i]%2!=0){
			tong += arr[i];
			d++;
		}
	}TBC = (float)tong/d;
	printf("trung binh cong cac so le o vi tri chan trong mang %d so la: %f",n,TBC);
	
}
