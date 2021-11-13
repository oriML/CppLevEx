#include <iostream>
using namespace std;
double area(int x, int y)
{
	
	return x*y;
}

double area(int r)
{
	const double Pi = 3.14159;
	return (Pi*r*r);
}

int main()
{
	int L, W;
	cout << "enter length and width of the rectangle" << endl;
	cin >> L;
	while (L<=0)
	{
		cout << "ERROR" << endl;
		cin >> L ;
	}
	cin >> W;
	 while (W<=0)
	{
		cout << "ERROR" << endl;
		cin >> W;
	}
	cout << area (L,W);
	
	int R;
	cout << endl << "enter radius of the circle" << endl;
	cin >> R;
	while (R<=0)
	{
		cout << "ERROR" << endl;
		cin >> R;
	}
	cout << area (R);
	return 0;
	
}