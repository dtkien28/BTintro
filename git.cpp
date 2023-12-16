#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,x,d,x1,x0,x2;
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
	
	return 0;
}
# CodeHomework
# CodeHomework
