#include<stdio.h>
int main(){
	int n;
	printf("Nhap mang n so nguyen la:");
	scanf("%d", &n);
	int arr[n], i = 0, j =0;
	for(i=0; i<n;i++){
//		do{
		printf("\narr[%d]=",i);
	    scanf("%d",&arr[i]);
	    int demo =0;
		for(j= 0; j<=i-1;j++){
			if(arr[j] ==arr[i]){
				demo =1;
	            break;
			} 
		}
//}while(demo==1);
if(demo ==1){
i--;}
}printf("mang sau khi nhap: \n");
for(int i=0; i<n; i++){
	printf("%d  ",arr[i]);
}
}
