#include<stdio.h>

int main(){
	//nhap so nguyen co 4 chu so. tinh tong cac chu so va in ra man hinh,in ra dao nguoc
	//buoc 1: khai bao bien number,sum,reverse,thousand,hundred,tem,unit
	int number , sum , reverse, thousand, hundred, ten,unit;
	//buoc 2 :nhap gia tri cho bien number	
    printf("nhap so nguyen co 4 chu so: ");
	scanf("%d",&number);
	//buoc 3: xu li tinh toan de luu gia tri cho cac bien thousand,hundred,tem,unit
    thousand = number/1000;
    hundred = (number/100)%10;
    ten = (number/10)%10;
    unit = number % 10;
	//buoc 4:xu li tinh toan sum va reverse
	sum = thousand+hundred+ten+unit;
    reverse= unit*1000 + ten*100 + hundred*10 + thousand*1;
	//buoc 5:in ke qua ra man hinh
	printf("so nguoi dung nhap vao la: %d \n", number );
	printf("tong cac chu so cua so %d la: %d\n", number, sum);
	printf("so dao nguoc cua so la: %d",number,reverse);
    //buoc 6 ket thuc.
	return 0;
}
