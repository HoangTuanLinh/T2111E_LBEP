#include<stdio.h>
int main(){
	int n;
	do{
	printf("Nhap n so trong mang arr[n]: ");
	scanf("%d", &n);
    }while(n<=0);
	int arr[n], i = 0;
	for(i=0 ; i<n; i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}int count = 0, max = 0;
	for(i=0; i<n; i++){
		if(arr[i]>0){
			count++;
			if(count > max){
			max = count;
			}
		}else{
			count = 0;
		}
	}printf("\nso luong so duong lien tiep nhieu nhat: %d",max);
	
}

