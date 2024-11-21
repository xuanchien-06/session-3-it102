#include<stdio.h>

int main(){
	float diemtoan;
	float diemvan;
	float diemanh;
	float tong;
	float trungbinh;
	//yeu cau nguoi dung nhap diem toan
	printf("moi ban nhap diem toan ");
	scanf("%f",&diemtoan);
	//yeu cau nhap diem van
	printf("moi ban nhap diem van ");
	scanf("%f",&diemvan);
	//yeu cau nhap diem anh
	printf("moi ban nhap diem anh ");
	scanf("%f",&diemanh);
	// tinh toan
	tong = diemtoan + diemvan + diemanh;
	trungbinh = (diemtoan+diemvan+diemanh)/3;
	printf("tong diem la %.2f \n",tong);
	printf("diem trung binh cong la %.2f",trungbinh);
	return 0;
}
