#include<stdio.h>
#include<string.h>
int main(){
	char s[50];
	printf("Nhap chuoi:");
	scanf("%s",s);
	int a,e,u,i,o,k;
	a =e=u=i=o=k=0;
	for(int j=0;j<strlen(s);j++){
		switch(s[j]){
		case 'a': a++;break;
		case 'e': e++;break;
		case 'u': u++;break;
		case 'i': i++;break;
		case 'o': o++;break;
		default: k++;break;
	}
}
printf("so luong a la: %d\n",a);
printf("so luong e la: %d\n",e);
printf("so luong u la: %d\n",u);
printf("so luong i la: %d\n",i);
printf("so luong o la: %d\n",o);
printf("cac so khac la: %d\n",k);
}
