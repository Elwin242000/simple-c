#include <iostream>

using namespace std;

//Nhap 2 so
void inputNumber(int &a, int &b)
{
	//Nhap so thu nhat
	cout<<"number 1 = ";
	cin>>a;
	//Nhap so thu hai
	cout<<"number 2 = ";
	cin>>b;
}

//Tim uoc chung lon nhat cua 2 so duoc nhap vao
int findUCLN(int a, int b)
{
	int c;
	do
	{
		c = a;
		a = b % a;
		b = c;
	}
	while (a > 0);
	return b;
}

//Tim boi chung nho nhat cua 2 so duoc nhap vao
int findBCNN(int a, int b)
{
	int c, m=a, n=b, d;
	do
	{
		c = a;
		a = b % a;
		b = c;
	}
	while (a > 0);
	d = (m*n)/b;
	return d;
}

int main()
{
	int number1, number2;
	//Nhap gia tri cho 2 bien number1 va number2	
	inputNumber(number1,number2);
	
	//Tim uoc chung lon nhat cua number1 va number2
	cout<<"\n==> UCLN la: "<<findUCLN(number1,number2);
	//Tim boi chung nho nhat cua number1 va number2
	cout<<"\n==> BCNN la: "<<findBCNN(number1,number2);
	
	return 0;
}
