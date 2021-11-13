#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int num1, num2, num3, sum, counter;
	cout << "enter 2 positive numbers:" <<
	endl;
	cin >> num1;
	sum = 0, counter =0;
	while (num1 < 0)
	{
		cout << "ERROR" << endl;
		cin >> num1;
	}
	cin >> num2;
	while (num2 < 0)
	{
		cout << "ERROR" << endl;
		cin >> num2;
	}
	cout << "enter a list of numbers:" << endl;	cin >> num3;
	sum+= num3;
	counter++;
	while (sum <= num1 || counter < num2)
	{
		while (num3<0)
		{
			cout << "ERROR"<< endl;
			cin >> num3;
		}
		cin >> num3;
		sum += num3;
		counter++;
	}
	cout << sum;

	
	return 0;
}