#include<stdio.h>
void reverseArray(int arr[],int n){
	for(int i=n;i>0;i++){
		int temp = arr[i];
		arr[i]=arr[n-1-1];
		arr[n-1-i]= temp;
	}for(int i=0;i<n;i++){
	
	printf("%d   ",arr[i]);	
}
}
int main(){
	int n;
	printf("Nhap n trong mang arr[n]:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("&d",&arr[i]);
	}
	printf("Mang nghich dao la: ");
	reverseArray(arr,7);
	
	
	
} 

