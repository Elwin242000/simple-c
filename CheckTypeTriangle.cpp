#include <iostream>
using namespace std;

//Check type triangle
void checkType(float a, float b, float c)
{
	if ((a+b>c) && (b+c>a) && (c+a>b))
	{
		if ((a==b) && (b==c))
		{
			cout<<"\n==> This is a equilateral triangle.";
		}	
		else if ((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))
		{
			cout<<"\n==> This is a right triangle.";
		}
		else if (((a*a==b*b+c*c) && (b==c)) || ((b*b==a*a+c*c) && (a==c)) || ((c*c==a*a+b*b) && (a==b)))
		{
			cout<<"\n==> This is a isosceles right triangle.";
		}
		else if ((a==b) || (b==c) || (c==a))
		{
			cout<<"\n==> This is a isosceles triangle.";
		}
		else
			cout<<"\n==> This is a scalene triangle.";
	}
	else
		cout<<"\n==> This is not a triangle.";
}
int main()
{
	float sides1, sides2, sides3;
	
	//Input sides1
	cout << "Input sides1 = ";
	cin >> sides1;
	//Input sides2
	cout << "Input sides2 = ";
	cin >> sides2;
	//Input sides3
	cout << "Input sides3 = ";
	cin >> sides3;
	
	//Check Type
	checkType(sides1, sides2, sides3);
	
	return 0;
}
