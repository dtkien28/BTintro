#include<iostream>
#include <stdio.h>
using namespace std;
/*	Dat: pt bac nhat
	Huy: khoang cach
	Phat: pt bac hai
	Tien: tong 1 den n
	Trung: Tong giai thua
	Khoa: Tong a+b;
*/
int main()
{
	int cn;
	do
	{
		cout << "----------CHUONG TRINH CHUC NANG----------" << endl;
		cout << "1. " << endl;
		cout << "2. " << endl;
		cout << "3. " << endl;
		cout << "4. " << endl;
		cout << "5. " << endl;
		cout << "6. " << endl;
		cout << "0. Thoat chuong trinh !!!" << endl;
		cout << endl;
		cout << "Chon chuc nang: ";
		cin >> cn;
		switch (cn)
		{
			case 1: //Dat: pt bac nhat
			break;
			
			case 2: //Huy: khoang cach
			break;
			
			case 3: //Phat: pt bac haifloat a,b,c,x,d,x1,x0,x2;
	printf("giai pt ax^2+bx+c=0");
	printf("\nNhap a:");
	scanf("%f",&a);
	printf("\nNhap b:");
	scanf("%f",&b);
	printf("\nNhap c:");
	scanf("%f",&c);
	d=(b*b)-(4*a*c);
	if (a==0){	
		printf("\nNghiem la:%f",(-c)/b);
	}
	else{
		printf("\ndelta=%f",d);
		if(d<0){
		printf("\nPT vo nghiem");}
		else{
			if(d==0){
			x0=-b/2*a;
			printf("\nPT co nghiem kep x=%f",x0);}
			else{
			x1=(-b+sqrt(d))/2*a;
			x2=(-b-sqrt(d))/2*a;
			printf("\nPT co 2 nghiem phan biet x1=%f,x2=%f",x1,x2);
		}}}
			break;
			
			case 4: //Tien: tong 1 den n
			break;
			
			case 5: //Trung: Tong giai thua
			break;
			
			case 6: //Khoa: Tong a+b;
			break;
			
			default:
				cout << "KHONG CO CHUC NANG! VUI LONG NHAP LAI !!!" << endl;
		}
	}
while (cn != 0);
}
#CodeHomework
#CodeHomework
# CodeHomework
 CodeHomework
# CodeHomework
# CodeHomework
# CodeHomework
# CodeHomework
