#include <iostream>
using namespace std;
int tong(int a, int b)
{
	return a+b;
}
int hieu(int a, int b)
{
	return a+b;
}
int chanle(int x)
{
if(x%2==0)
cout<<x<<"La so chan";
else
cout<<x<<"La so le
}
int main()
{
	int a, b, x;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*,/,) ";
	cin >> phepToan;

if(phepToan=="+"){
	cout<<"Tong="<<tong(a,b);}
if(phepToan=="-")
	cout<<"Hieu="<<hieu(a,b);

cout << "Nhap so bat ki x: ";
	cin >> x;
cout<<"X"<<chanle(x);
	system("pause");
	return 0;
}