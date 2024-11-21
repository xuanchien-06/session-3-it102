#include<stdio.h>

int main(){
    int bankinh;
	float PI = 3.14;
	float chuvi;
	float dientich;
	printf("ban hay nhap ban kinh ");
	scanf("%d",&bankinh);
	chuvi =(2*bankinh)*PI;
	dientich =(bankinh*bankinh)*PI;
	printf("chu vi hinh tron la %.2f \n",chuvi);
	printf("dien tich hinh tron la %.2f",dientich);
	return 0;
}
