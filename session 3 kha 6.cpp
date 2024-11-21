#include<stdio.h>

int main(){
    float canhday;
	float h;
	float dientich;
	printf("hay nhap canh day ");
	scanf("%f",&canhday);
	printf("hay nhap chieu cao ");
	scanf("%f",&h);
	dientich = (canhday * h)/2;
	printf("dien tich tam giac la %.2f",dientich);
	return 0;
}
