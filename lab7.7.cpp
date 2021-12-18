#include<stdio.h>
int main(){
	int n;
	printf("Nhap n so nguye ntrong mang la:");
	scanf("%d",&n);
	int arr[n], i= 0;
	for(i =0; i < n; i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	int flag = 0, tong = 0;
	for(i=0;i<n;i++){
		if(arr[i] > 0){
			tong += arr[i];
			if(tong > flag){
				flag = tong;
			}
		}else{
			tong =0;
		}
	}printf("chuoi so duong co tong lon nhat la: %d",flag);
}
