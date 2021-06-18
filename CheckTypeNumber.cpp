#include <iostream>
#include <math.h>

using namespace std;

//Kiem tra so nguyen to
bool checkSNT(int x)
{
	if (x < 2) return false;
	if (x == 2) return true;
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return false;
			break;
		}			
	}
	return true;
}

//Kiem tra so chinh phuong
bool checkSCP(int x)
{
	for (int i = 1; i < x; i++)
	{
		if (i*i == x)
		{
			return true;
			break;
		}
	}
	return false;
}

//Kiem tra so hoan thien
bool checkSHT(int x)
{
	int sum = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
			sum += i;
	}
	if (sum == x)
		return true;
	else
		return false;
}

int main()
{
	int number;
	
	//Nhap so
	cout<<"Number = ";
	cin>>number;
	
	//Kiem tra so nguyen to va xuat ket qua
	if (checkSNT(number))
	{
		cout<<"\n==> "<<number<<" la so nguyen to.";
	}
	else
	{
		cout<<"\n==> "<<number<<" khong phai so nguyen to.";
	}
	
	//Kiem tra so chinh phuong va xuat ket qua
	if (checkSCP(number))
	{
		cout<<"\n==> "<<number<<" la so chinh phuong.";
	}
	else
	{
		cout<<"\n==> "<<number<<" khong phai so chinh phuong.";
	}
	
	//Kiem tra so chinh phuong va xuat ket qua
	if (checkSHT(number))
	{
		cout<<"\n==> "<<number<<" la so hoan thien.";
	}
	else
	{
		cout<<"\n==> "<<number<<" khong phai so hoan thien.";
	}
	
	return 0;
}
