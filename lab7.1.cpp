#include<stdio.h>
int main(){
	int n;
	int arr[n];
	printf("nhap mang arr[n] la: ");
	scanf("%d",&n);
	int tong =0,i;
	float TBC;
	for(i=0;i<n;i++){
		printf("nhap gia tri arr[%d] la:",i);
		scanf("%d",&arr[i]);
	}int d=0;
	for(i=0; i<n; i++){
		if(arr[i]%2!=0){
		tong +=arr[i];
		d++;}
	}if{
		TBC = (float)tong/d;
	printf("Trung binh cong cac so le : %f",TBC);
    }else{
    	printf("trong mang khong co so le");
	}
}
