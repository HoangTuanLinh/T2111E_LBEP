#include<stdio.h>
int main(){
	int n;
	do{
	printf("Nhap n mang trong arr[n] la: ");
	scanf("%d",&n);
    }while(n<=0);
    int arr[n],i = 0;
    for(i = 0; i< n; i++){
    	printf("arr[%d]= ",i);
    	scanf("%d",&arr[i]);
	}int count = 0, flag = 0;
	for(i = 0; i < n; i++){
		if(arr[i] > 0){
			count++;
			if(count > flag){
				flag = count;
			}
		}else{
			count = 0;
		}
	}printf("so luong cac so duong lien tiep lon nhat la: %d",flag);
}
