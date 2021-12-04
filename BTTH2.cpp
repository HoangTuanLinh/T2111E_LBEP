#include<stdio.h>
int main(){
	int t= 4000;
	printf("so tien gui ngan hang la: %d\n",t);
	float m = t + t * 8/100;
	printf("so tien goc va lai sau 1 nam la: %f\n", m);
	m=m+m*8/100;
	printf("so tien goc va lai sau 2 nam la: %f\n", m);
	m=m + m * 8/100;
	printf("so tien goc va lai sau 3 nam la: %f\n", m);
	m=m + m * 8/100;
	printf("so tien goc va lai sau 4 nam la: %f\n", m);
}
