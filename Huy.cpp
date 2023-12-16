#include<bits/stdc++.h>
using namespace std;
struct SV
{
	char ten[10];
};
void Nhap(SV svien[], int &n)
{
	cout << "so luong: "; cin >> n;
	for (int i=0; i<n; i++)
	{	
		cout << "SV thu "<<i+1 << endl;
		cin.ignore();
		gets(svien[i].ten);
	}
	cout << endl;
}
int main()
{
	SV sv[4];
	int n;
	Nhap(sv,n);
}