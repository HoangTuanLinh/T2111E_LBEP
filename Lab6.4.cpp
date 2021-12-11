#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int j=2;
	for(j;j<n;j++){
		int i=1,s=0;
		for(i;i<j;i++){
			if(j%i==0){
				s+=i;
			}
		}if(s==j){
			printf("so hoan hao truoc n la: %d\n",j);
		}
	}
}
