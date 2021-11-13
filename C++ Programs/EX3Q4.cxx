#include <iostream>
using namespace std;
int main()
{
	int a, b ,c;
	cout << "enter 3 numbers" << endl;
	cin >> a >> b >> c;
	if (a+b>c && b+c>a && a+c>b)
	{
		if (a == b && b== c)
	
		cout << "equilateral triangle";
		
		else
		
		if ((a == b && c != b ) || (a == c && b
		!=c) || (b==c && c!=a))
		
			cout << "isosceles triangle";
		
		else
		cout << "scalene triangle";
	
	}
	else
	cout << "cannot form a triangle";
	return 0;
	
}