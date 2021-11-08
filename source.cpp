#include <iostream>
using namespace std;
int tong(int a, int b)
{int a, b;
	cin >> a >> b;
cout << "a + b = " << a + b << endl;
}
int hieu(int a, int b);


int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
if(phepToan=="+"){
	cout<<tong();}
else
cout<<hieu();
	system("pause");
	return 0;
}