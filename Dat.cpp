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
			case 1: 
			int a,b;
            printf ("nhap a :");
	        scanf("%d",&a);
	        printf ("nhap b :");
	        scanf("%d",&b);
	        if(a == 0) {
            if(b == 0) {
            printf("\n-> Phuong trinh tren co vo so nghiem\n");
            } else {
            printf("\n-> Phuong trinh tren vo nghiem\n");
            }
              } 
             else {
             float nghiem = (double)-b/a;
             printf("\n-> Phuong trinh tren co nghiem la : x = %0.2f\n",nghiem);
            }
				break;
			
			
			case 2: //Huy: khoang cach
			break;
			
			case 3: //Phat: pt bac hai
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

# CodeHomework
# CodeHomework
