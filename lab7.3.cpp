#include<stdio.h>
int main(){
	int n;
	printf("Nhap n so trong mang arr[n]: ");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0; i<n; i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	int x;
	int flag = 0;
	printf("Nhap X= ");
	scanf("%d",&x);
	for(i=0; i<n; i++){
		if(arr[i]==x){
			flag = 1;
		printf(" so %d co trong mang",x);
		break;}
	}if(flag == 0)
	printf(" \nso %d khong co trong mang",x);
}
