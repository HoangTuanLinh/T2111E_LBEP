#include<stdio.h>
int main(){
	int n;
	do{
	printf("mang n so arr[n]:");
	scanf("%d",&n);
	}while(n<=0);
	int arr[n], i =0;	
	for(i=0; i<n; i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}int m=0;
	for(i=n; i>0; i--){
		if(arr[i]%2!=0){
			m= arr[i];
			break;
		}
	}if(m==0)
	printf("trong mang arr[%d] khong co so le",n);
	else
	printf("so le cuoi cung cua mang arr[%d] la: %d",n,m);
}
