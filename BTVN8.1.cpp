#include<stdio.h>
int main(){
	int n;
	printf("Nhap mang n so nguyen la:");
	scanf("%d",&n);
	int arr[n], i = 0;
	for(i = 0; i < n; i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}int min = arr[0];
	for(i =0; i<n; i++){
		if(arr[i] < min ){
			min = arr[i];
		}
	}int x;
	printf("Nhap x = ");
	scanf("%d",&x);
	if(min>x){
		printf("khong tim duoc gia tri nho hon x trong mang: %d",min);
	}else{ 
	int m = min;
		for(i=0;i<n;i++){
			if(arr[i]> m && arr[i] < x){
				m = arr[i];
			}
		}printf("gia tri nho hon va gan x nhat trong mang la: %d",m);
	}
	
}
