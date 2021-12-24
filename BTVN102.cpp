#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("Nhap n trong arrs[n][50]= ");
	scanf("%d",&n);
	printf("arrs[%d][50]\n",n);
	char arrs[n][50];
	for(int i=0;i<n;i++){
		printf("Nhap chuoi:");
		scanf("\n%s",arrs[i]);
	}
	printf("mang sau khi nhap:");
	for(int i=0;i<n;i++){
		printf("\n%s",arrs[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0; j<n-i-1; j++){
			if(strcmp(arrs[j],arrs[j+1]) >0){
				char temp[50];
				strcpy(temp,arrs[j]);
				strcpy(arrs[j],arrs[j+1]);
				strcpy(arrs[j+1],temp);
			}
		}
	}
	printf("mang sau khi nhap:");
	for(int i=0;i<n;i++){
		printf("\n%s",arrs[i]);
}
}
